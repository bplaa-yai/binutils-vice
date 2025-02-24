/* tc-bsp.h -- Header file for tc-bsp.c.
   Copyright 2002 Free Software Foundation, Inc.
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
   Boston, MA 02111-1307, USA. */

#define TC_BSP

#ifndef BFD_ASSEMBLER
/* leading space so will compile with cc */
 #error BSP support requires BFD_ASSEMBLER
#endif

#define LISTING_HEADER "BSP GAS "

/* The target BFD architecture.  */
#define TARGET_ARCH bfd_arch_bsp

#define TARGET_FORMAT "a.out-bsp"

#define TARGET_BYTES_BIG_ENDIAN 1

/* Permit temporary numeric labels.  */
#define LOCAL_LABELS_FB 1

#define DIFF_EXPR_OK		/* .-foo gets turned into PC relative relocs */

/* We don't need to handle .word strangely.  */
#define WORKING_DOT_WORD

/* Values passed to md_apply_fix3 don't include the symbol value.  */
#define MD_APPLY_SYM_VALUE(FIX) 0

#define md_apply_fix3 gas_cgen_md_apply_fix3

#if 0
extern void bsp_cleanup PARAMS ((void));
#define md_cleanup bsp_cleanup
#endif

#define md_number_to_chars bsp_md_number_to_chars

#if 0
#define tc_fix_adjustable(FIX) bsp_fix_adjustable (FIX)
struct fix;
extern bfd_boolean bsp_fix_adjustable PARAMS ((struct fix *));
#endif

#undef GAS_CGEN_MAX_FIXUPS
#define GAS_CGEN_MAX_FIXUPS 1

#define tc_gen_reloc gas_cgen_tc_gen_reloc

#define md_cgen_record_fixup_exp bsp_cgen_record_fixup_exp

/* Call md_pcrel_from_section(), not md_pcrel_from().  */
#define MD_PCREL_FROM_SECTION(FIX, SEC) md_pcrel_from_section (FIX, SEC)
extern long md_pcrel_from_section PARAMS ((struct fix *, segT));
