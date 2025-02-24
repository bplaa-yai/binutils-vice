/* tc-bsp.c -- Assembler for the Fujitsu BSP.
   Copyright 2002 Free Software Foundation.
   Author: Ilya Volynets <ilya@theIlya.com>

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#include <stdio.h>
#include "as.h"
#include "subsegs.h"     
#include "symcat.h"
#include "opcodes/bsp-desc.h"
#include "opcodes/bsp-opc.h"
#include "cgen.h"
#include "libbfd.h"
#include "aout/aout64.h"
#include "tc-bsp.h"

/* Structure to hold all of the different components describing
   an individual instruction.  */
typedef struct
{
  const CGEN_INSN *	insn;
  const CGEN_INSN *	orig_insn;
  CGEN_FIELDS		fields;
#if CGEN_INT_INSN_P
  CGEN_INSN_INT         buffer [1];
#define INSN_VALUE(buf) (*(buf))
#else
  unsigned char         buffer [CGEN_MAX_INSN_SIZE];
#define INSN_VALUE(buf) (buf)
#endif
  char *		addr;
  fragS *		frag;
  int                   num_fixups;
  fixS *                fixups [GAS_CGEN_MAX_FIXUPS];
  int                   indices [MAX_OPERAND_INSTANCES];
}
bsp_insn;

/* We're going to use these in the fr_subtype field to mark 
   whether to keep inserted nops.  */

#define NOP_KEEP 1		/* Keep these NOPS.  */
#define NOP_DELETE 2		/* Delete these NOPS.  */

#define DO_COUNT    TRUE
#define DONT_COUNT  FALSE

const char comment_chars[]        = ";";
const char line_comment_chars[]   = "#";
const char line_separator_chars[] = ""; 
const char EXP_CHARS[]            = "eE";
const char FLT_CHARS[]            = "dD";

/*
 * We only have one machine variant so far,
 * but may get more later on, if, let's say O2+ has some improvements
 */
#define bsp_mach 0

#define DEFAULT_FLAGS 0

/* Flags to set in the elf header */
static flagword bsp_flags = DEFAULT_FLAGS;

static int bsp_user_set_flags_p = 0;

/* Forward reference to static functions */
static void bsp_set_flags		PARAMS ((int));

/* The target specific pseudo-ops which we support.  */
const pseudo_typeS md_pseudo_table[] =
{
  { "eflags",	bsp_set_flags,		0 },
  { "word",	cons,			4 },
  { NULL, 	NULL,			0 }
};


#define BSP_SHORTOPTS "G:"
const char * md_shortopts = BSP_SHORTOPTS;


/* sample options... Not ued atm */
#define OPTION_GPR_32		(OPTION_MD_BASE)
#define OPTION_GPR_64		(OPTION_MD_BASE + 1)

struct option md_longopts[] =
{
  { "mgpr-32",		no_argument,		NULL, OPTION_GPR_32        },
  { "mgpr-64",		no_argument,		NULL, OPTION_GPR_64        },
  { NULL,		no_argument,		NULL, 0                 },
};

size_t md_longopts_size = sizeof (md_longopts);

/* What value to give to bfd_set_gp_size.  */
static int g_switch_value = 8;

int
md_parse_option (c, arg)
     int    c;
     char * arg;
{
  switch (c)
    {
    default:
      return 0;

/*    case 'G':
      g_switch_value = atoi (arg);
      if (! g_switch_value)
	bsp_flags |= EF_BSP_G0;
      break;

    case OPTION_GPR_32:
      bsp_flags = (bsp_flags & ~EF_BSP_GPR_MASK) | EF_BSP_GPR_32;
      break;

    case OPTION_GPR_64:
      bsp_flags = (bsp_flags & ~EF_BSP_GPR_MASK) | EF_BSP_GPR_64;
      break;*/
    }

  return 1;
}

void
md_show_usage (stream)
  FILE * stream;
{
  fprintf (stream, _("BSP specific command line options:\n"));
  fprintf (stream, _("-G n         Data >= n bytes is in small data area\n"));
  fprintf (stream, _("-mgpr-32     Note 32 gprs are used\n"));
  fprintf (stream, _("-mgpr-64     Note 64 gprs are used\n"));
} 


void
md_begin ()
{
  /* Initialize the `cgen' interface.  */
  
  /* Set the machine number and endian.  */
  gas_cgen_cpu_desc = bsp_cgen_cpu_open (CGEN_CPU_OPEN_MACHS, 0,
					 CGEN_CPU_OPEN_ENDIAN,
					 CGEN_ENDIAN_BIG,
					 CGEN_CPU_OPEN_END);
  bsp_cgen_init_asm (gas_cgen_cpu_desc);

  /* This is a callback from cgen to gas to parse operands.  */
  cgen_set_parse_operand_fn (gas_cgen_cpu_desc, gas_cgen_parse_operand);

  /* Set the ELF flags if desired. */
  if (bsp_flags)
    bfd_set_private_flags (stdoutput, bsp_flags);

  /* Set the machine type */
  bfd_default_set_arch_mach (stdoutput, bfd_arch_bsp, bsp_mach);

  /* Set up gp size so we can put local common items in .sbss */
  bfd_set_gp_size (stdoutput, g_switch_value);
}

int chain_num = 0;


#if 0
void
bsp_cleanup ()
{
}
#endif

void
md_assemble (str)
     char * str;
{
  bsp_insn insn;
  char *errmsg;
  finished_insnS  finished_insn;

  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse ();

  insn.insn = bsp_cgen_assemble_insn
    (gas_cgen_cpu_desc, str, & insn.fields, insn.buffer, &errmsg);
  
  if (!insn.insn)
    {
      as_bad (errmsg);
      return;
    }
  gas_cgen_finish_insn (insn.insn, insn.buffer,
			CGEN_FIELDS_BITSIZE (& insn.fields), 0, &finished_insn);


}

void 
md_operand (expressionP)
     expressionS * expressionP;
{
  if (* input_line_pointer == '#')
    {
      input_line_pointer ++;
      expression (expressionP);
    }
}

valueT
md_section_align (segment, size)
     segT   segment;
     valueT size;
{
  int align = bfd_get_section_alignment (stdoutput, segment);
  return ((size + (1 << align) - 1) & (-1 << align));
}

symbolS *
md_undefined_symbol (name)
  char * name ATTRIBUTE_UNUSED;
{
  return 0;
}

/* Functions concerning relocs.  */

/* The location from which a PC relative jump should be calculated,
   given a PC relative reloc.  */

long
md_pcrel_from_section (fixP, sec)
     fixS * fixP;
     segT   sec;
{
  if (fixP->fx_addsy != (symbolS *) NULL
      && (! S_IS_DEFINED (fixP->fx_addsy)
	  || S_GET_SEGMENT (fixP->fx_addsy) != sec))
    {
      /* The symbol is undefined (or is defined but not in this section).
	 Let the linker figure it out.  */
      return 0;
    }

  return (fixP->fx_frag->fr_address + fixP->fx_where) & ~1;
}

/* Return the bfd reloc type for OPERAND of INSN at fixup FIXP.
   Returns BFD_RELOC_NONE if no reloc type can be found.
   *FIXP may be modified if desired.  */

bfd_reloc_code_real_type
md_cgen_lookup_reloc (insn, operand, fixP)
     const CGEN_INSN *    insn ATTRIBUTE_UNUSED;
     const CGEN_OPERAND * operand;
     fixS *               fixP;
{
  switch (operand->type)
    {
    case BSP_OPERAND_LABEL:
      fixP->fx_pcrel = TRUE;
      return BFD_RELOC_BSP_LABEL16;

    default: 
      break;
      }
  return BFD_RELOC_NONE;
}


/* Write a value out to the object file, using the appropriate endianness.  */

void
bsp_md_number_to_chars (buf, val, n)
     char * buf;
     valueT val;
     int    n;
{
  number_to_chars_bigendian (buf, val, n);
}

/* Turn a string in input_line_pointer into a floating point constant of type
   type, and store the appropriate bytes in *litP.  The number of LITTLENUMS
   emitted is stored in *sizeP .  An error message is returned, or NULL on OK.
*/

/* Equal to MAX_PRECISION in atof-ieee.c */
#define MAX_LITTLENUMS 6

char *
md_atof (type, litP, sizeP)
     char   type;
     char * litP;
     int *  sizeP;
{
  int              i;
  int              prec;
  LITTLENUM_TYPE   words [MAX_LITTLENUMS];
  char *           t;
  char *           atof_ieee ();

  switch (type)
    {
    case 'f':
    case 'F':
    case 's':
    case 'S':
      prec = 2;
      break;

    case 'd':
    case 'D':
    case 'r':
    case 'R':
      prec = 4;
      break;

   /* FIXME: Some targets allow other format chars for bigger sizes here.  */

    default:
      * sizeP = 0;
      return _("Bad call to md_atof()");
    }

  t = atof_ieee (input_line_pointer, type, words);
  if (t)
    input_line_pointer = t;
  * sizeP = prec * sizeof (LITTLENUM_TYPE);

  for (i = 0; i < prec; i++)
    {
      md_number_to_chars (litP, (valueT) words[i],
			  sizeof (LITTLENUM_TYPE));
      litP += sizeof (LITTLENUM_TYPE);
    }
     
  return 0;
}

#if 0
/* I have to figure out this one, we probably need it... */
bfd_boolean
bsp_fix_adjustable (fixP)
   fixS * fixP;
{
  bfd_reloc_code_real_type reloc_type;

  if ((int) fixP->fx_r_type >= (int) BFD_RELOC_UNUSED)
    {
      const CGEN_INSN *insn = NULL;
      int opindex = (int) fixP->fx_r_type - (int) BFD_RELOC_UNUSED;
      const CGEN_OPERAND *operand = cgen_operand_lookup_by_num(gas_cgen_cpu_desc, opindex);
      reloc_type = md_cgen_lookup_reloc (insn, operand, fixP);
    }
  else
    reloc_type = fixP->fx_r_type;

  /* We need the symbol name for the VTABLE entries */
  if (   reloc_type == BFD_RELOC_VTABLE_INHERIT
      || reloc_type == BFD_RELOC_VTABLE_ENTRY
      || reloc_type == BFD_RELOC_BSP_GPREL12
      || reloc_type == BFD_RELOC_BSP_GPRELU12)
    return 0;

  return 1;
}
#endif

/* Return an initial guess of the length by which a fragment must grow to
   hold a branch to reach its destination.
   Also updates fr_type/fr_subtype as necessary.

   Called just before doing relaxation.
   Any symbol that is now undefined will not become defined.
   The guess for fr_var is ACTUALLY the growth beyond fr_fix.
   Whatever we do to grow fr_fix or fr_var contributes to our returned value.
   Although it may not be explicit in the frag, pretend fr_var starts with a
   0 value.  */

int
md_estimate_size_before_relax (fragP, segment)
     fragS * fragP;
     segT    segment ATTRIBUTE_UNUSED;
{
	return fragP->fr_var;
} 

/* *fragP has been relaxed to its final size, and now needs to have
   the bytes inside it modified to conform to the new size.

   Called after relaxation is finished.
   fragP->fr_type == rs_machine_dependent.
   fragP->fr_subtype is the subtype of what the address relaxed to.  */

void
md_convert_frag (abfd, sec, fragP)
  bfd *   abfd ATTRIBUTE_UNUSED;
  segT    sec ATTRIBUTE_UNUSED;
  fragS * fragP;
{
	return;
}

/* Allow user to set flags bits.  */

void
bsp_set_flags (arg)
     int arg ATTRIBUTE_UNUSED;
{
  flagword new_flags = get_absolute_expression ();
  flagword new_mask = ~ (flagword)0;

  bsp_user_set_flags_p = 1;
  if (*input_line_pointer == ',')
    {
      ++input_line_pointer;
      new_mask = get_absolute_expression ();
    }

  bsp_flags = (bsp_flags & ~new_mask) | (new_flags & new_mask);
  bfd_set_private_flags (stdoutput, bsp_flags);
}


fixS *
bsp_cgen_record_fixup_exp (frag, where, insn, length, operand, opinfo, exp)
     fragS *              frag;
     int                  where;
     const CGEN_INSN *    insn;
     int                  length;
     const CGEN_OPERAND * operand;
     int                  opinfo;
     expressionS *        exp;
{
  fixS * fixP = gas_cgen_record_fixup_exp (frag, where, insn, length,
                                           operand, opinfo, exp);
    
  return fixP;
}
