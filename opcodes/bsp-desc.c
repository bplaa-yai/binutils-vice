/* CPU data for bsp.

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
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "bsp-desc.h"
#include "bsp-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] =
{
  { "base", MACH_BASE },
  { "bsp", MACH_BSP },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] =
{
  { "bsp", ISA_BSP },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE bsp_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE bsp_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE bsp_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE bsp_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA bsp_cgen_isa_table[] = {
  { "bsp", 16, 16, 16, 16 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH bsp_cgen_mach_table[] = {
  { "bsp", "bsp", MACH_BSP, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY bsp_cgen_opval_h_gpr_entries[] =
{
  { "r0", 0, {0, {0}}, 0, 0 },
  { "r1", 1, {0, {0}}, 0, 0 },
  { "r2", 2, {0, {0}}, 0, 0 },
  { "r3", 3, {0, {0}}, 0, 0 },
  { "r4", 4, {0, {0}}, 0, 0 },
  { "r5", 5, {0, {0}}, 0, 0 },
  { "r6", 6, {0, {0}}, 0, 0 },
  { "r7", 7, {0, {0}}, 0, 0 }
};

CGEN_KEYWORD bsp_cgen_opval_h_gpr =
{
  & bsp_cgen_opval_h_gpr_entries[0],
  8,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY bsp_cgen_opval_h_altr_entries[] =
{
  { "rpage", 0, {0, {0}}, 0, 0 },
  { "alpha_h", 1, {0, {0}}, 0, 0 },
  { "alpha_l", 2, {0, {0}}, 0, 0 },
  { "beta_h", 3, {0, {0}}, 0, 0 },
  { "beta_l", 4, {0, {0}}, 0, 0 },
  { "cmp_h", 5, {0, {0}}, 0, 0 },
  { "cmp_l", 6, {0, {0}}, 0, 0 },
  { "mask_h", 7, {0, {0}}, 0, 0 },
  { "mask_l", 8, {0, {0}}, 0, 0 },
  { "root_tbl_ptr", 9, {0, {0}}, 0, 0 },
  { "tbl_res", 10, {0, {0}}, 0, 0 },
  { "block_data", 11, {0, {0}}, 0, 0 },
  { "block_address", 12, {0, {0}}, 0, 0 },
  { "block_ptr", 13, {0, {0}}, 0, 0 },
  { "ac_run", 14, {0, {0}}, 0, 0 },
  { "status_cntl", 15, {0, {0}}, 0, 0 }
};

CGEN_KEYWORD bsp_cgen_opval_h_altr =
{
  & bsp_cgen_opval_h_altr_entries[0],
  16,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY bsp_cgen_opval_h_bit_swallow_entries[] =
{
  { "swallow", 1, {0, {0}}, 0, 0 },
  { "sw", 1, {0, {0}}, 0, 0 },
  { "puke", 0, {0, {0}}, 0, 0 },
  { "", 0, {0, {0}}, 0, 0 }
};

CGEN_KEYWORD bsp_cgen_opval_h_bit_swallow =
{
  & bsp_cgen_opval_h_bit_swallow_entries[0],
  4,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define A(a) (1 << CGEN_HW_##a)
#else
#define A(a) (1 << CGEN_HW_/**/a)
#endif

const CGEN_HW_ENTRY bsp_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { (1<<MACH_BASE) } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { (1<<MACH_BASE) } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { (1<<MACH_BASE) } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { (1<<MACH_BASE) } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { (1<<MACH_BASE) } } },
  { "h-gpr", HW_H_GPR, CGEN_ASM_KEYWORD, (PTR) & bsp_cgen_opval_h_gpr, { 0, { (1<<MACH_BASE) } } },
  { "h-altr", HW_H_ALTR, CGEN_ASM_KEYWORD, (PTR) & bsp_cgen_opval_h_altr, { 0, { (1<<MACH_BASE) } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PC), { (1<<MACH_BASE) } } },
  { "h-dRAM", HW_H_DRAM, CGEN_ASM_NONE, 0, { 0, { (1<<MACH_BASE) } } },
  { "h-bit-swallow", HW_H_BIT_SWALLOW, CGEN_ASM_KEYWORD, (PTR) & bsp_cgen_opval_h_bit_swallow, { 0, { (1<<MACH_BASE) } } },
  { 0, 0, CGEN_ASM_NONE, 0, {0, {0}} }
};

#undef A


/* The instruction field table.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define A(a) (1 << CGEN_IFLD_##a)
#else
#define A(a) (1 << CGEN_IFLD_/**/a)
#endif

const CGEN_IFLD bsp_cgen_ifld_table[] =
{
  { BSP_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_IFORMAT, "f-iformat", 0, 16, 15, 2, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_OPCODE_AB, "f-opcode-AB", 0, 16, 13, 3, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_OPCODE_CD, "f-opcode-CD", 0, 16, 13, 4, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_GPR_COND_AB, "f-gpr-cond-AB", 0, 16, 10, 3, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_IMM, "f-imm", 0, 16, 7, 8, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_RT, "f-rT", 0, 16, 2, 3, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_IGNORE_C, "f-ignore-C", 0, 16, 7, 5, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_RD_CD, "f-rD-CD", 0, 16, 9, 3, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_RALT_C, "f-rALT-C", 0, 16, 10, 4, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_EXT_C, "f-ext-C", 0, 16, 9, 1, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_RS_C, "f-rS-C", 0, 16, 5, 3, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_Q_D, "f-q-D", 0, 16, 9, 1, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_P_D, "f-p-D", 0, 16, 8, 1, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_L_D, "f-L-D", 0, 16, 7, 4, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_M_D, "f-M-D", 0, 16, 5, 2, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_M2_D, "f-M2-D", 0, 16, 3, 1, { 0, { (1<<MACH_BASE) } }  },
  { BSP_F_N_D, "f-N-D", 0, 16, 3, 4, { 0, { (1<<MACH_BASE) } }  },
  { 0, 0, 0, 0, 0, 0, {0, {0}} }
};

#undef A



/* multi ifield declarations */



/* multi ifield definitions */


/* The operand table.  */

#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define A(a) (1 << CGEN_OPERAND_##a)
#else
#define A(a) (1 << CGEN_OPERAND_/**/a)
#endif
#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define OPERAND(op) BSP_OPERAND_##op
#else
#define OPERAND(op) BSP_OPERAND_/**/op
#endif

const CGEN_OPERAND bsp_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", BSP_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &bsp_cgen_ifld_table[0] } }, 
    { 0|A(SEM_ONLY), { (1<<MACH_BASE) } }  },
/* rAB: Source GPR For format A and B insns */
  { "rAB", BSP_OPERAND_RAB, HW_H_GPR, 10, 3,
    { 0, { (const PTR) &bsp_cgen_ifld_table[5] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* imm: Immediate */
  { "imm", BSP_OPERAND_IMM, HW_H_UINT, 7, 8,
    { 0, { (const PTR) &bsp_cgen_ifld_table[6] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* rT: rT */
  { "rT", BSP_OPERAND_RT, HW_H_GPR, 2, 3,
    { 0, { (const PTR) &bsp_cgen_ifld_table[7] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* rDCD: Destination GPR for format C insns */
  { "rDCD", BSP_OPERAND_RDCD, HW_H_GPR, 9, 3,
    { 0, { (const PTR) &bsp_cgen_ifld_table[9] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* rAltC: Destination AltR for format C insns */
  { "rAltC", BSP_OPERAND_RALTC, HW_H_ALTR, 10, 4,
    { 0, { (const PTR) &bsp_cgen_ifld_table[10] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* rSC: Source GPR for format C insns */
  { "rSC", BSP_OPERAND_RSC, HW_H_GPR, 5, 3,
    { 0, { (const PTR) &bsp_cgen_ifld_table[12] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* rpage: rPage register used implicitly in load/store insns */
  { "rpage", BSP_OPERAND_RPAGE, HW_H_ALTR, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { (1<<MACH_BASE) } }  },
/* rstatus: rStatus -- status register */
  { "rstatus", BSP_OPERAND_RSTATUS, HW_H_ALTR, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { (1<<MACH_BASE) } }  },
/* bitswallow: swallow bit of some format D insns */
  { "bitswallow", BSP_OPERAND_BITSWALLOW, HW_H_BIT_SWALLOW, 9, 1,
    { 0, { (const PTR) &bsp_cgen_ifld_table[13] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* q: q-bit in format D insns */
  { "q", BSP_OPERAND_Q, HW_H_UINT, 9, 1,
    { 0, { (const PTR) &bsp_cgen_ifld_table[13] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* p: p */
  { "p", BSP_OPERAND_P, HW_H_UINT, 8, 1,
    { 0, { (const PTR) &bsp_cgen_ifld_table[14] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* N: Number of bits */
  { "N", BSP_OPERAND_N, HW_H_UINT, 3, 4,
    { 0, { (const PTR) &bsp_cgen_ifld_table[18] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* L: Number of bits */
  { "L", BSP_OPERAND_L, HW_H_UINT, 7, 4,
    { 0, { (const PTR) &bsp_cgen_ifld_table[15] } }, 
    { 0, { (1<<MACH_BASE) } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { 0 } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define A(a) (1 << CGEN_INSN_##a)
#else
#define A(a) (1 << CGEN_INSN_/**/a)
#endif

static const CGEN_IBASE bsp_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, {0, {0}} },
/* lh $rAB $imm */
  {
    BSP_INSN_LH, "lh", "lh", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* lbl $rAB $imm */
  {
    BSP_INSN_LBL, "lbl", "lbl", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* lbh $rAB $imm */
  {
    BSP_INSN_LBH, "lbh", "lbh", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* sh $rAB $imm */
  {
    BSP_INSN_SH, "sh", "sh", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* sbl $rAB $imm */
  {
    BSP_INSN_SBL, "sbl", "sbl", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* sbh $rAB $imm */
  {
    BSP_INSN_SBH, "sbh", "sbh", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* lil $rAB $imm */
  {
    BSP_INSN_LIL, "lil", "lil", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* lih $rAB $imm */
  {
    BSP_INSN_LIH, "lih", "lih", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* nop */
  {
    BSP_INSN_NOP, "nop", "nop", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* cmpi $rAB $imm */
  {
    BSP_INSN_CMPI, "cmpi", "cmpi", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* andi $rAB $imm */
  {
    BSP_INSN_ANDI, "andi", "andi", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* addi $rAB $imm */
  {
    BSP_INSN_ADDI, "addi", "addi", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* b $imm */
  {
    BSP_INSN_B, "b", "b", 16,
    { 0|A(UNCOND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* beq $imm */
  {
    BSP_INSN_BEQ, "beq", "beq", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* bne $imm */
  {
    BSP_INSN_BNE, "bne", "bne", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* bge $imm */
  {
    BSP_INSN_BGE, "bge", "bge", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* blt $imm */
  {
    BSP_INSN_BLT, "blt", "blt", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* bext0 $imm */
  {
    BSP_INSN_BEXT0, "bext0", "bext0", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* bext1 $imm */
  {
    BSP_INSN_BEXT1, "bext1", "bext1", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* bext2 $imm */
  {
    BSP_INSN_BEXT2, "bext2", "bext2", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jr $rT */
  {
    BSP_INSN_JR, "jr", "jr", 16,
    { 0|A(UNCOND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jreq $rT */
  {
    BSP_INSN_JREQ, "jreq", "jreq", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jreq $rT */
  {
    BSP_INSN_JRNEN, "jrnen", "jreq", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jrge $rT */
  {
    BSP_INSN_JRGE, "jrge", "jrge", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jrge $rT */
  {
    BSP_INSN_JRLT, "jrlt", "jrge", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jrext0 $rT */
  {
    BSP_INSN_JREXT0, "jrext0", "jrext0", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jrext1 $rT */
  {
    BSP_INSN_JREXT1, "jrext1", "jrext1", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* jrext2 $rT */
  {
    BSP_INSN_JREXT2, "jrext2", "jrext2", 16,
    { 0|A(COND_CTI)|A(DELAY_SLOT), { (1<<MACH_BASE) } }
  },
/* break */
  {
    BSP_INSN_BREAK, "break", "break", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* resume */
  {
    BSP_INSN_RESUME, "resume", "resume", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* add $rDCD $rSC $rT */
  {
    BSP_INSN_ADD, "add", "add", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* addc $rDCD $rSC $rT */
  {
    BSP_INSN_ADDC, "addc", "addc", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* sub $rDCD $rSC $rT */
  {
    BSP_INSN_SUB, "sub", "sub", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* subc $rDCD $rSC $rT */
  {
    BSP_INSN_SUBC, "subc", "subc", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* and $rDCD $rSC $rT */
  {
    BSP_INSN_AND, "and", "and", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* or $rDCD $rSC $rT */
  {
    BSP_INSN_OR, "or", "or", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* sll $rDCD $rSC $rT */
  {
    BSP_INSN_SLL, "sll", "sll", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* sra $rDCD $rSC $rT */
  {
    BSP_INSN_SRA, "sra", "sra", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* mul $rDCD $rSC $rT */
  {
    BSP_INSN_MUL, "mul", "mul", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* xor $rDCD $rSC $rT */
  {
    BSP_INSN_XOR, "xor", "xor", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* abs $rDCD $rT */
  {
    BSP_INSN_ABS, "abs", "abs", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* copyto $rAltC $rSC */
  {
    BSP_INSN_COPYTO, "copyto", "copyto", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* copyfrom $rAltC $rDCD */
  {
    BSP_INSN_COPYFROM, "copyfrom", "copyfrom", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* lhr $rDCD $rSC */
  {
    BSP_INSN_LHR, "lhr", "lhr", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* lhr $rSC $rT */
  {
    BSP_INSN_LSR, "lsr", "lhr", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* gtbitsi $bitswallow $rDCD $N */
  {
    BSP_INSN_GETBITSI, "getbitsi", "gtbitsi", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* probebitsi $rDCD $N */
  {
    BSP_INSN_PROBEBITSI, "probebitsi", "probebitsi", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* shiftstream $bitswallow $N */
  {
    BSP_INSN_SHIFTSTREAM, "shiftstream", "shiftstream", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* getbitsr $bitswallow $rDCD $rT */
  {
    BSP_INSN_GETBITSR, "getbitsr", "getbitsr", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* genlookuppack $rT */
  {
    BSP_INSN_GENLOOKUPPACK, "genlookuppack", "genlookuppack", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* leafrunlevelparse $bitswallow */
  {
    BSP_INSN_LEAFRUNLEVELPARSE, "leafrunlevelparse", "leafrunlevelparse", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* blockrunlevelparse $bitswallow */
  {
    BSP_INSN_BLOCKRUNLEVELPARSE, "blockrunlevelparse", "blockrunlevelparse", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* loadcodepackH261 $bitswallow $p $imm */
  {
    BSP_INSN_LOADCODEPACKH261, "loadcodepackH261", "loadcodepackH261", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* genericleafparse */
  {
    BSP_INSN_GENERICLEAFPARSE, "genericleafparse", "genericleafparse", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* blockrunsizeparse $bitswallow */
  {
    BSP_INSN_BLOCKRUNSIZEPARSE, "blockrunsizeparse", "blockrunsizeparse", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* codesearch $q $p */
  {
    BSP_INSN_CODESEARCH, "codesearch", "codesearch", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* packbitstream $q $L $rT */
  {
    BSP_INSN_PACKBITSTREAM, "packbitstream", "packbitstream", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* loadcodepack $q $p $imm */
  {
    BSP_INSN_LOADCODEPACK, "loadcodepack", "loadcodepack", 16,
    { 0, { (1<<MACH_BASE) } }
  },
/* bytealign */
  {
    BSP_INSN_BYTEALIGN, "bytealign", "bytealign", 16,
    { 0, { (1<<MACH_BASE) } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */
static void init_tables PARAMS ((void));

static void
init_tables ()
{
}

static const CGEN_MACH * lookup_mach_via_bfd_name
  PARAMS ((const CGEN_MACH *, const char *));
static void build_hw_table  PARAMS ((CGEN_CPU_TABLE *));
static void build_ifield_table  PARAMS ((CGEN_CPU_TABLE *));
static void build_operand_table PARAMS ((CGEN_CPU_TABLE *));
static void build_insn_table    PARAMS ((CGEN_CPU_TABLE *));
static void bsp_cgen_rebuild_tables PARAMS ((CGEN_CPU_TABLE *));

/* Subroutine of bsp_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (table, name)
     const CGEN_MACH *table;
     const char *name;
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  abort ();
}

/* Subroutine of bsp_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (cd)
     CGEN_CPU_TABLE *cd;
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & bsp_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of bsp_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (cd)
     CGEN_CPU_TABLE *cd;
{
  cd->ifld_table = & bsp_cgen_ifld_table[0];
}

/* Subroutine of bsp_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (cd)
     CGEN_CPU_TABLE *cd;
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & bsp_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected =
    (const CGEN_OPERAND **) xmalloc (MAX_OPERANDS * sizeof (CGEN_OPERAND *));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of bsp_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (cd)
     CGEN_CPU_TABLE *cd;
{
  int i;
  const CGEN_IBASE *ib = & bsp_cgen_insn_table[0];
  CGEN_INSN *insns = (CGEN_INSN *) xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of bsp_cgen_cpu_open to rebuild the tables.  */

static void
bsp_cgen_rebuild_tables (cd)
     CGEN_CPU_TABLE *cd;
{
  int i;
  unsigned int isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* some ridiculously big number */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (((1 << i) & isas) != 0)
      {
	const CGEN_ISA *isa = & bsp_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* this is ok */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* this is ok */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & bsp_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      fprintf (stderr, "bsp_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%d' vs. `%d'\n",
		       cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.

   ??? We only support ISO C stdargs here, not K&R.
   Laziness, plus experiment to see if anything requires K&R - eventually
   K&R will no longer be supported - e.g. GDB is currently trying this.  */

CGEN_CPU_DESC
bsp_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  unsigned int isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (bsp_cgen_mach_table, name);

	    machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  fprintf (stderr, "bsp_cgen_cpu_open: unsupported argument `%d'\n",
		   arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* mach unspecified means "all" */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* base mach is always selected */
  machs |= 1;
  /* isa unspecified means "all" */
  if (isas == 0)
    isas = (1 << MAX_ISAS) - 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      fprintf (stderr, "bsp_cgen_cpu_open: no endianness specified\n");
      abort ();
    }

  cd->isas = isas;
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = bsp_cgen_rebuild_tables;
  bsp_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;
  
  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to bsp_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
bsp_cgen_cpu_open_1 (mach_name, endian)
     const char *mach_name;
     enum cgen_endian endian;
{
  return bsp_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
bsp_cgen_cpu_close (cd)
     CGEN_CPU_DESC cd;
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	{
	  if (CGEN_INSN_RX ((insns)))
	    regfree (CGEN_INSN_RX (insns));
	}
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	{
	  if (CGEN_INSN_RX (insns))
	    regfree (CGEN_INSN_RX (insns));
	}
    }

  

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}

