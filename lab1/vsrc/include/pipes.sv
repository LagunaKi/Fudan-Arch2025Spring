`ifndef __PIPES_SV
`define __PIPES_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

package pipes;
	import common::*;
/* Define instrucion decoding rules here */

// parameter F7_RI = 7'bxxxxxxx;

//一条指令的低 7 位为 7'b0010011 且 [14:12] 位为 3'b000 ，那么该指令是 addi
parameter F7_ADDI = 7'b0010011;
parameter F3_ADDI = 7'b000;
    
/* Define pipeline structures here */

typedef struct packed {
	u32 raw_instr;
} fetch_data_t;

//标识指令
typedef enum logic [5:0] { 
	UNKNOWN, ADDI
} decode_op_t; 


typedef enum logic [4:0] {
	ALU_ADD

    // to add other instructions...
} alufunc_t;

//decode生成的控制信号
typedef struct packed {
	decode_op_t op;
	alufunc_t alufunc;
	u1 regwrite;//是否写回寄存器
	
} control_t;

//传给excute的数据
typedef struct packed {
	word_t srca, srcb;
	control_t ctl;
	creg_addr_t dst; 
} decode_data_t;

endpackage

`endif

