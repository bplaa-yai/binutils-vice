/* Instruction opcode header for bsp.

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

#ifndef BSP_OPC_H
#define BSP_OPC_H

/* -- opc.h */

/* Override disassembly hashing - there are variable bits in the top
   byte of these instructions.  */
#define CGEN_DIS_HASH_SIZE 8
#define CGEN_DIS_HASH(buf,value) (((* (unsigned char*) (buf)) >> 3) % CGEN_DIS_HASH_SIZE)


/* -- opc.c */
/* Enum declaration for bsp instruction types.  */
typedef enum cgen_insn_type {
  BSP_INSN_INVALID, BSP_INSN_LH, BSP_INSN_LBL, BSP_INSN_LBH
 , BSP_INSN_SH, BSP_INSN_SBL, BSP_INSN_SBH, BSP_INSN_LIL
 , BSP_INSN_LIH, BSP_INSN_NOP, BSP_INSN_CMPI, BSP_INSN_ANDI
 , BSP_INSN_ADDI, BSP_INSN_B, BSP_INSN_BEQ, BSP_INSN_BNE
 , BSP_INSN_BGE, BSP_INSN_BLT, BSP_INSN_BEXT0, BSP_INSN_BEXT1
 , BSP_INSN_BEXT2, BSP_INSN_JR, BSP_INSN_JREQ, BSP_INSN_JRNEN
 , BSP_INSN_JRGE, BSP_INSN_JRLT, BSP_INSN_JREXT0, BSP_INSN_JREXT1
 , BSP_INSN_JREXT2, BSP_INSN_BREAK, BSP_INSN_RESUME, BSP_INSN_ADD
 , BSP_INSN_ADDC, BSP_INSN_SUB, BSP_INSN_SUBC, BSP_INSN_CMP, BSP_INSN_AND
 , BSP_INSN_OR, BSP_INSN_SLL, BSP_INSN_SRA, BSP_INSN_MUL
 , BSP_INSN_XOR, BSP_INSN_ABS, BSP_INSN_COPYTO, BSP_INSN_COPYFROM
 , BSP_INSN_LLH, BSP_INSN_LSH, BSP_INSN_GETBITSI, BSP_INSN_PROBEBITSI
 , BSP_INSN_SHIFTSTREAM, BSP_INSN_GETBITSR, BSP_INSN_GENLOOKUPPACK, BSP_INSN_LEAFRUNLEVELPARSE
 , BSP_INSN_BLOCKRUNLEVELPARSE, BSP_INSN_LOADCODEPACKH261, BSP_INSN_GENERICLEAFPARSE, BSP_INSN_BLOCKRUNSIZEPARSE
 , BSP_INSN_CODESEARCH, BSP_INSN_PACKBITSTREAM, BSP_INSN_LOADCODEPACK, BSP_INSN_BYTEALIGN
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID BSP_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) BSP_INSN_BYTEALIGN + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_iformat;
  long f_opcode_AB;
  long f_opcode_CD;
  long f_gpr_cond_AB;
  long f_imm;
  long f_rT;
  long f_ignore_C;
  long f_rD_CD;
  long f_rALT_C;
  long f_ext_C;
  long f_rALT_ext_C;
  long f_rS_C;
  long f_q_D;
  long f_p_D;
  long f_L_D;
  long f_M_D;
  long f_M2_D;
  long f_N_D;
  long f_label;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


#endif /* BSP_OPC_H */
