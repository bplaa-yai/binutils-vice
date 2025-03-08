/* CPU data header for bsp.

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

#ifndef BSP_CPU_H
#define BSP_CPU_H

#define CGEN_ARCH bsp

/* Given symbol S, return bsp_cgen_<S>.  */
#if defined (__STDC__) || defined (ALMOST_STDC) || defined (HAVE_STRINGIZE)
#define CGEN_SYM(s) bsp##_cgen_##s
#else
#define CGEN_SYM(s) bsp/**/_cgen_/**/s
#endif


/* Selected cpu families.  */
#define HAVE_CPU_BSP

#define CGEN_INSN_LSB0_P 1

/* Minimum size of any insn (in bytes).  */
#define CGEN_MIN_INSN_SIZE 2

/* Maximum size of any insn (in bytes).  */
#define CGEN_MAX_INSN_SIZE 2

#define CGEN_INT_INSN_P 1

/* Maximum number of syntax elements in an instruction.  */
#define CGEN_ACTUAL_MAX_SYNTAX_ELEMENTS 24

/* CGEN_MNEMONIC_OPERANDS is defined if mnemonics have operands.
   e.g. In "b,a foo" the ",a" is an operand.  If mnemonics have operands
   we can't hash on everything up to the space.  */
#define CGEN_MNEMONIC_OPERANDS

/* Maximum number of fields in an instruction.  */
#define CGEN_ACTUAL_MAX_IFMT_OPERANDS 7

/* Enums.  */

/* Enum declaration for Format field.  */
typedef enum insn_format {
  FMT_A = 2, FMT_B = 0, FMT_C = 1, FMT_D = 3
} INSN_FORMAT;

/* Enum declaration for Format A opcodes.  */
typedef enum insn_opc_a {
  OPA_LH, OPA_LBL, OPA_LBH, OPA_SH
 , OPA_SBL, OPA_SBH, OPA_LIL, OPA_LIH
} INSN_OPC_A;

/* Enum declaration for Format B opcodes.  */
typedef enum insn_opc_b {
  OPB_NOP, OPB_CMPI, OPB_ANDI, OPB_B
 , OPB_BREAK, OPB_ADDI, OPB_JR, OPB_RESUME
} INSN_OPC_B;

/* Enum declaration for Condition type for branch and jr insns.  */
typedef enum insn_condtype {
  COND_EQ = 0, COND_NE = 1, COND_GE = 1, COND_LT = 2
 , COND_EXT0 = 3, COND_EXT1 = 4, COND_EXT2 = 5, COND_TRUE = 6
} INSN_CONDTYPE;

/* Enum declaration for Format C opcodes.  */
typedef enum insn_opc_c {
  OPC_ADD, OPC_SUB, OPC_CMP, OPC_AND
 , OPC_OR, OPC_LSHIFT, OPC_ARSHIFT, OPC_MULT
 , OPC_ZZXLATE, OPC_XOR, OPC_ABS, OPC_NEG
 , OPC_COPYTO, OPC_COPYFROM, OPC_LLOADH, OPC_LSTOREH
} INSN_OPC_C;

/* Enum declaration for Extended/Normal format C insn.  */
typedef enum insn_ext_c {
  EXT_TRUE = 1, EXT_FALSE = 0
} INSN_EXT_C;

/* Enum declaration for Format D opcodes.  */
typedef enum insn_opc_d {
  OPD_GETBITSI = 0, OPD_PROBEBITS = 1, OPD_SHIFTSTREAM = 2, OPD_GETBITSR = 3
 , OPD_GENERIC_LOOKUP_PACK = 4, OPD_LEAF_RUN_LEVEL_PARSE = 5, OPD_BLOCK_RUN_LEVEL_PARSE = 6, OPD_LOAD_CODE_PACK_H261 = 7
 , OPD_GENERIC_LEAF_PARSE = 8, OPD_BLOCK_RUN_SIZE_PARSE = 9, OPD_CODE_SEARCH = 10, OPD_PACK_BITSTREAM = 12
 , OPD_LOAD_CODE_PACK = 13, OPD_BYTE_ALIGN = 14
} INSN_OPC_D;

/* Attributes.  */

/* Enum declaration for machine type selection.  */
typedef enum mach_attr {
  MACH_BASE, MACH_BSP, MACH_MAX
} MACH_ATTR;

/* Enum declaration for instruction set selection.  */
typedef enum isa_attr {
  ISA_BSP, ISA_MAX
} ISA_ATTR;

/* Number of architecture variants.  */
#define MAX_ISAS  1
#define MAX_MACHS ((int) MACH_MAX)

/* Ifield attribute indices.  */

/* Enum declaration for cgen_ifld attrs.  */
typedef enum cgen_ifld_attr {
  CGEN_IFLD_VIRTUAL, CGEN_IFLD_PCREL_ADDR, CGEN_IFLD_ABS_ADDR, CGEN_IFLD_RESERVED
 , CGEN_IFLD_SIGN_OPT, CGEN_IFLD_SIGNED, CGEN_IFLD_END_BOOLS, CGEN_IFLD_START_NBOOLS = 31
 , CGEN_IFLD_MACH, CGEN_IFLD_END_NBOOLS
} CGEN_IFLD_ATTR;

/* Number of non-boolean elements in cgen_ifld_attr.  */
#define CGEN_IFLD_NBOOL_ATTRS (CGEN_IFLD_END_NBOOLS - CGEN_IFLD_START_NBOOLS - 1)

/* Enum declaration for bsp ifield types.  */
typedef enum ifield_type {
  BSP_F_NIL, BSP_F_ANYOF, BSP_F_IFORMAT, BSP_F_OPCODE_AB
 , BSP_F_OPCODE_CD, BSP_F_GPR_COND_AB, BSP_F_IMM, BSP_F_RT
 , BSP_F_IGNORE_C, BSP_F_RD_CD, BSP_F_RALT_C, BSP_F_EXT_C, BSP_F_RALT_EXT_C
 , BSP_F_RS_C, BSP_F_Q_D, BSP_F_P_D, BSP_F_L_D
 , BSP_F_M_D, BSP_F_M2_D, BSP_F_N_D, BSP_F_LABEL, BSP_F_MAX
} IFIELD_TYPE;

#define MAX_IFLD ((int) BSP_F_MAX)

/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* Enum declaration for bsp hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_GPR, HW_H_ALTR, HW_H_PC
 , HW_H_DRAM, HW_H_BIT_SWALLOW, HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH, CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* Enum declaration for bsp operand types.  */
typedef enum cgen_operand_type {
  BSP_OPERAND_PC, BSP_OPERAND_RAB, BSP_OPERAND_IMM, BSP_OPERAND_RT
 , BSP_OPERAND_RDCD, BSP_OPERAND_RALTC, BSP_OPERAND_RALTEXTC, BSP_OPERAND_RSC, BSP_OPERAND_RPAGE
 , BSP_OPERAND_RSTATUS, BSP_OPERAND_BITSWALLOW, BSP_OPERAND_Q, BSP_OPERAND_P
 , BSP_OPERAND_N, BSP_OPERAND_L, BSP_OPERAND_LABEL, BSP_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS ((int) BSP_OPERAND_MAX)

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 5

/* Insn attribute indices.  */

/* Enum declaration for cgen_insn attrs.  */
typedef enum cgen_insn_attr {
  CGEN_INSN_ALIAS, CGEN_INSN_VIRTUAL, CGEN_INSN_UNCOND_CTI, CGEN_INSN_COND_CTI
 , CGEN_INSN_SKIP_CTI, CGEN_INSN_DELAY_SLOT, CGEN_INSN_RELAXABLE, CGEN_INSN_RELAX
 , CGEN_INSN_NO_DIS, CGEN_INSN_PBB, CGEN_INSN_END_BOOLS, CGEN_INSN_START_NBOOLS = 31
 , CGEN_INSN_MACH, CGEN_INSN_END_NBOOLS
} CGEN_INSN_ATTR;

/* Number of non-boolean elements in cgen_insn_attr.  */
#define CGEN_INSN_NBOOL_ATTRS (CGEN_INSN_END_NBOOLS - CGEN_INSN_START_NBOOLS - 1)

/* cgen.h uses things we just defined.  */
#include "opcode/cgen.h"

/* Ifield support.  */

extern const struct cgen_ifld bsp_cgen_ifld_table[];

/* Attributes.  */
extern const CGEN_ATTR_TABLE bsp_cgen_hardware_attr_table[];
extern const CGEN_ATTR_TABLE bsp_cgen_ifield_attr_table[];
extern const CGEN_ATTR_TABLE bsp_cgen_operand_attr_table[];
extern const CGEN_ATTR_TABLE bsp_cgen_insn_attr_table[];

/* Hardware decls.  */

extern CGEN_KEYWORD bsp_cgen_opval_h_gpr;
extern CGEN_KEYWORD bsp_cgen_opval_h_altr;
extern CGEN_KEYWORD bsp_cgen_opval_h_bit_swallow;




#endif /* BSP_CPU_H */
