/* Semantic operand instances for bsp.

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

/* Operand references.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define OP_ENT(op) BSP_OPERAND_##op
#else
#define OP_ENT(op) BSP_OPERAND_/**/op
#endif
#define INPUT CGEN_OPINST_INPUT
#define OUTPUT CGEN_OPINST_OUTPUT
#define END CGEN_OPINST_END
#define COND_REF CGEN_OPINST_COND_REF

static const CGEN_OPINST sfmt_empty_ops[] = {
  { END }
};

static const CGEN_OPINST sfmt_lh_ops[] = {
  { INPUT, "h_memory_HI_add__DFLT_rpage_imm", HW_H_MEMORY, CGEN_MODE_HI, 0, 0, 0 },
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rpage", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_lbl_ops[] = {
  { INPUT, "h_memory_QI_add__DFLT_rpage_imm", HW_H_MEMORY, CGEN_MODE_QI, 0, 0, 0 },
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rpage", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_sh_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { INPUT, "rpage", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "h_memory_HI_add__DFLT_rpage_imm", HW_H_MEMORY, CGEN_MODE_HI, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_sbl_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { INPUT, "rpage", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "h_memory_QI_add__DFLT_rpage_imm", HW_H_MEMORY, CGEN_MODE_QI, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_sbh_ops[] = {
  { INPUT, "h_memory_QI_add__DFLT_rpage_imm", HW_H_MEMORY, CGEN_MODE_QI, 0, 0, 0 },
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { INPUT, "rpage", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_lil_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { OUTPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_lih_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_HI, OP_ENT (IMM), 0, 0 },
  { OUTPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_nop_ops[] = {
  { END }
};

static const CGEN_OPINST sfmt_cmpi_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { INPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_addi_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { INPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "rAB", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RAB), 0, 0 },
  { OUTPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_b_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, 0 },
  { INPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_beq_ops[] = {
  { INPUT, "imm", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (IMM), 0, COND_REF },
  { INPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, COND_REF },
  { INPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, COND_REF },
  { END }
};

static const CGEN_OPINST sfmt_jr_ops[] = {
  { INPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_jreq_ops[] = {
  { INPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, COND_REF },
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, COND_REF },
  { INPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, COND_REF },
  { END }
};

static const CGEN_OPINST sfmt_add_ops[] = {
  { INPUT, "rSC", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RSC), 0, 0 },
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, 0 },
  { INPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "rDCD", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RDCD), 0, 0 },
  { OUTPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_sll_ops[] = {
  { INPUT, "rSC", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RSC), 0, 0 },
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, 0 },
  { OUTPUT, "rDCD", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RDCD), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_mul_ops[] = {
  { INPUT, "rSC", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RSC), 0, 0 },
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, 0 },
  { OUTPUT, "h_altr_UINT_5", HW_H_ALTR, CGEN_MODE_UINT, 0, 5, 0 },
  { OUTPUT, "rDCD", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RDCD), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_abs_ops[] = {
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, 0 },
  { INPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { OUTPUT, "rDCD", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RDCD), 0, 0 },
  { OUTPUT, "rstatus", HW_H_ALTR, CGEN_MODE_UINT, 0, 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_copyto_ops[] = {
  { INPUT, "rSC", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RSC), 0, 0 },
  { OUTPUT, "rAltC", HW_H_ALTR, CGEN_MODE_UINT, OP_ENT (RALTC), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_copyfrom_ops[] = {
  { INPUT, "rAltExtC", HW_H_ALTR, CGEN_MODE_UINT, OP_ENT (RALTEXTC), 0, 0 },
  { OUTPUT, "rDCD", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RDCD), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_llh_ops[] = {
  { INPUT, "h_memory_HI_ext__USI_rSC", HW_H_MEMORY, CGEN_MODE_HI, 0, 0, 0 },
  { INPUT, "rSC", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RSC), 0, 0 },
  { OUTPUT, "rDCD", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RDCD), 0, 0 },
  { END }
};

static const CGEN_OPINST sfmt_lsh_ops[] = {
  { INPUT, "rSC", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RSC), 0, 0 },
  { INPUT, "rT", HW_H_GPR, CGEN_MODE_UINT, OP_ENT (RT), 0, 0 },
  { OUTPUT, "h_memory_HI_ext__USI_rSC", HW_H_MEMORY, CGEN_MODE_HI, 0, 0, 0 },
  { END }
};

#undef OP_ENT
#undef INPUT
#undef OUTPUT
#undef END
#undef COND_REF

/* Operand instance lookup table.  */

static const CGEN_OPINST *bsp_cgen_opinst_table[MAX_INSNS] = {
  0,
  & sfmt_lh_ops[0],
  & sfmt_lbl_ops[0],
  & sfmt_lbl_ops[0],
  & sfmt_sh_ops[0],
  & sfmt_sbl_ops[0],
  & sfmt_sbh_ops[0],
  & sfmt_lil_ops[0],
  & sfmt_lih_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_cmpi_ops[0],
  & sfmt_cmpi_ops[0],
  & sfmt_addi_ops[0],
  & sfmt_b_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_beq_ops[0],
  & sfmt_jr_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_jreq_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_add_ops[0],
  & sfmt_add_ops[0],
  & sfmt_add_ops[0],
  & sfmt_add_ops[0],
  & sfmt_add_ops[0],
  & sfmt_add_ops[0],
  & sfmt_sll_ops[0],
  & sfmt_sll_ops[0],
  & sfmt_mul_ops[0],
  & sfmt_add_ops[0],
  & sfmt_abs_ops[0],
  & sfmt_copyto_ops[0],
  & sfmt_copyfrom_ops[0],
  & sfmt_llh_ops[0],
  & sfmt_lsh_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
  & sfmt_nop_ops[0],
};

/* Function to call before using the operand instance table.  */

void
bsp_cgen_init_opinst_table (cd)
     CGEN_CPU_DESC cd;
{
  int i;
  const CGEN_OPINST **oi = & bsp_cgen_opinst_table[0];
  CGEN_INSN *insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].opinst = oi[i];
}
