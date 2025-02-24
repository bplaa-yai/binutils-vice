/* Instruction opcode table for bsp.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996, 1997, 1998, 1999, 2000, 2001, 2002 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

*/

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "bsp-desc.h"
#include "bsp-opc.h"
#include "libiberty.h"

/* -- opc.c */

/* -- asm.c */
/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p PARAMS ((const CGEN_INSN *));
static unsigned int asm_hash_insn PARAMS ((const char *));
static int dis_hash_insn_p PARAMS ((const CGEN_INSN *));
static unsigned int dis_hash_insn PARAMS ((const char *, CGEN_INSN_INT));

/* Instruction formats.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define F(f) & bsp_cgen_ifld_table[BSP_##f]
#else
#define F(f) & bsp_cgen_ifld_table[BSP_/**/f]
#endif
static const CGEN_IFMT ifmt_empty = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_lh = {
  16, 16, 0xf800, { { F (F_IFORMAT) }, { F (F_OPCODE_AB) }, { F (F_GPR_COND_AB) }, { F (F_IMM) }, { 0 } }
};

static const CGEN_IFMT ifmt_nop = {
  16, 16, 0xffff, { { F (F_IFORMAT) }, { F (F_OPCODE_AB) }, { F (F_GPR_COND_AB) }, { F (F_IMM) }, { 0 } }
};

static const CGEN_IFMT ifmt_b = {
  16, 16, 0xff00, { { F (F_IFORMAT) }, { F (F_OPCODE_AB) }, { F (F_GPR_COND_AB) }, { F (F_LABEL) }, { 0 } }
};

static const CGEN_IFMT ifmt_jr = {
  16, 16, 0xfff8, { { F (F_IFORMAT) }, { F (F_OPCODE_AB) }, { F (F_GPR_COND_AB) }, { F (F_IGNORE_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_add = {
  16, 16, 0xfe00, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_EXT_C) }, { F (F_RD_CD) }, { F (F_RS_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_abs = {
  16, 16, 0xfe38, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_EXT_C) }, { F (F_RD_CD) }, { F (F_RS_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_copyto = {
  16, 16, 0xfc07, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_RALT_C) }, { F (F_RS_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_copyfrom = {
  16, 16, 0xfc38, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_RALT_C) }, { F (F_RS_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_llh = {
  16, 16, 0xfe07, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_EXT_C) }, { F (F_RD_CD) }, { F (F_RS_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_lsh = {
  16, 16, 0x10180, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_EXT_C) }, { F (F_RD_CD) }, { F (F_RS_C) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_getbitsi = {
  16, 16, 0xfc30, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_RD_CD) }, { F (F_M_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_probebitsi = {
  16, 16, 0xfe30, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_RD_CD) }, { F (F_M_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_shiftstream = {
  16, 16, 0xffb0, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_RD_CD) }, { F (F_M_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_getbitsr = {
  16, 16, 0xfc38, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_RD_CD) }, { F (F_M_D) }, { F (F_M2_D) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_genlookuppack = {
  16, 16, 0x101b8, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_RD_CD) }, { F (F_M_D) }, { F (F_M2_D) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_leafrunlevelparse = {
  16, 16, 0xffbf, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_RD_CD) }, { F (F_M_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_loadcodepackH261 = {
  16, 16, 0xfc00, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_IMM) }, { 0 } }
};

static const CGEN_IFMT ifmt_genericleafparse = {
  16, 16, 0xffff, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_L_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_blockrunsizeparse = {
  16, 16, 0xfdff, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_L_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_codesearch = {
  16, 16, 0xfcff, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_L_D) }, { F (F_N_D) }, { 0 } }
};

static const CGEN_IFMT ifmt_packbitstream = {
  16, 16, 0xfd08, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_L_D) }, { F (F_M2_D) }, { F (F_RT) }, { 0 } }
};

static const CGEN_IFMT ifmt_loadcodepack = {
  16, 16, 0xfc00, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_IMM) }, { 0 } }
};

static const CGEN_IFMT ifmt_bytealign = {
  16, 16, 0xffff, { { F (F_IFORMAT) }, { F (F_OPCODE_CD) }, { F (F_Q_D) }, { F (F_P_D) }, { F (F_IMM) }, { 0 } }
};

#undef F

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define A(a) (1 << CGEN_INSN_##a)
#else
#define A(a) (1 << CGEN_INSN_/**/a)
#endif
#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define OPERAND(op) BSP_OPERAND_##op
#else
#define OPERAND(op) BSP_OPERAND_/**/op
#endif
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE bsp_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* lh $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x8000 }
  },
/* lbl $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x8800 }
  },
/* lbh $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x9000 }
  },
/* sh $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x9800 }
  },
/* sbl $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0xa000 }
  },
/* sbh $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0xa800 }
  },
/* lil $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0xb000 }
  },
/* lih $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0xb800 }
  },
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x0 }
  },
/* cmpi $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x800 }
  },
/* andi $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x1000 }
  },
/* addi $rAB $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RAB), ' ', OP (IMM), 0 } },
    & ifmt_lh, { 0x2800 }
  },
/* b $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1f00 }
  },
/* beq $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1800 }
  },
/* bne $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1900 }
  },
/* bge $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1a00 }
  },
/* blt $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1b00 }
  },
/* bext0 $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1c00 }
  },
/* bext1 $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1d00 }
  },
/* bext2 $label */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (LABEL), 0 } },
    & ifmt_b, { 0x1e00 }
  },
/* jr $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3600 }
  },
/* jreq $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3000 }
  },
/* jreq $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3100 }
  },
/* jrge $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3100 }
  },
/* jrge $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3200 }
  },
/* jrext0 $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3300 }
  },
/* jrext1 $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3400 }
  },
/* jrext2 $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_jr, { 0x3500 }
  },
/* break */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x2000 }
  },
/* resume */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x3800 }
  },
/* add $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x4000 }
  },
/* addc $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x4200 }
  },
/* sub $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x4000 }
  },
/* subc $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x4200 }
  },
/* and $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x4c00 }
  },
/* or $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x5000 }
  },
/* sll $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x5400 }
  },
/* sra $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x5800 }
  },
/* mul $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x5c00 }
  },
/* xor $rDCD $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_add, { 0x6400 }
  },
/* abs $rDCD $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RT), 0 } },
    & ifmt_abs, { 0x6400 }
  },
/* copyto $rAltC $rSC */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RALTC), ' ', OP (RSC), 0 } },
    & ifmt_copyto, { 0x7000 }
  },
/* copyfrom $rAltC $rDCD */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RALTC), ' ', OP (RDCD), 0 } },
    & ifmt_copyfrom, { 0x7400 }
  },
/* llh $rDCD $rSC */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (RSC), 0 } },
    & ifmt_llh, { 0x7800 }
  },
/* lsh $rSC $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RSC), ' ', OP (RT), 0 } },
    & ifmt_lsh, { 0x7c00 }
  },
/* getbitsi $bitswallow $rDCD $N */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), ' ', OP (RDCD), ' ', OP (N), 0 } },
    & ifmt_getbitsi, { 0xc000 }
  },
/* probebitsi $rDCD $N */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDCD), ' ', OP (N), 0 } },
    & ifmt_probebitsi, { 0xc400 }
  },
/* shiftstream $bitswallow $N */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), ' ', OP (N), 0 } },
    & ifmt_shiftstream, { 0xc800 }
  },
/* getbitsr $bitswallow $rDCD $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), ' ', OP (RDCD), ' ', OP (RT), 0 } },
    & ifmt_getbitsr, { 0xcc00 }
  },
/* genlookuppack $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RT), 0 } },
    & ifmt_genlookuppack, { 0xd000 }
  },
/* leafrunlevelparse $bitswallow */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), 0 } },
    & ifmt_leafrunlevelparse, { 0xd400 }
  },
/* blockrunlevelparse $bitswallow */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), 0 } },
    & ifmt_leafrunlevelparse, { 0xd800 }
  },
/* loadcodepackH261 $bitswallow $p $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), ' ', OP (P), ' ', OP (IMM), 0 } },
    & ifmt_loadcodepackH261, { 0xdc00 }
  },
/* genericleafparse */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_genericleafparse, { 0xe000 }
  },
/* blockrunsizeparse $bitswallow */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (BITSWALLOW), 0 } },
    & ifmt_blockrunsizeparse, { 0xe400 }
  },
/* codesearch $q $p */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (Q), ' ', OP (P), 0 } },
    & ifmt_codesearch, { 0xe800 }
  },
/* packbitstream $q $L $rT */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (Q), ' ', OP (L), ' ', OP (RT), 0 } },
    & ifmt_packbitstream, { 0xf000 }
  },
/* loadcodepack $q $p $imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (Q), ' ', OP (P), ' ', OP (IMM), 0 } },
    & ifmt_loadcodepack, { 0xf400 }
  },
/* bytealign */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bytealign, { 0xf800 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define F(f) & bsp_cgen_ifld_table[BSP_##f]
#else
#define F(f) & bsp_cgen_ifld_table[BSP_/**/f]
#endif
#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define A(a) (1 << CGEN_INSN_##a)
#else
#define A(a) (1 << CGEN_INSN_/**/a)
#endif
#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define OPERAND(op) BSP_OPERAND_##op
#else
#define OPERAND(op) BSP_OPERAND_/**/op
#endif
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE bsp_cgen_macro_insn_table[] =
{
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE bsp_cgen_macro_insn_opcode_table[] =
{
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (insn)
     const CGEN_INSN *insn ATTRIBUTE_UNUSED;
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (insn)
     const CGEN_INSN *insn;
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (mnem)
     const char * mnem;
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (buf, value)
     const char * buf ATTRIBUTE_UNUSED;
     CGEN_INSN_INT value ATTRIBUTE_UNUSED;
{
  return CGEN_DIS_HASH (buf, value);
}

static void set_fields_bitsize PARAMS ((CGEN_FIELDS *, int));

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (fields, size)
     CGEN_FIELDS *fields;
     int size;
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
bsp_cgen_init_opcode_table (cd)
     CGEN_CPU_DESC cd;
{
  int i;
  int num_macros = (sizeof (bsp_cgen_macro_insn_table) /
		    sizeof (bsp_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & bsp_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & bsp_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = (CGEN_INSN *) xmalloc (num_macros * sizeof (CGEN_INSN));
  memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      bsp_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & bsp_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      bsp_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
