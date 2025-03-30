`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module alu
	import common::*;
(
	input [63:0] a, b,
	input alufunc_t alufunc,
	output reg [63:0] result
);
	always_comb begin
		unique case(alufunc)
			ALU_ADD: begin 
			    result = a + b; 
			end
			ALU_SUB: begin 
			    result = a - b; 
			end
			ALU_AND: begin 
			    result = a & b;
			end
			ALU_OR: begin 
			    result = a | b;  
			end
			ALU_XOR: begin 
			    result = a ^ b; 
			end
			ALU_DIRECT: begin
			    result = a; 
			end
			ALU_SSMALL: 
			begin 
			     result = {63'b0,  $signed(a) < $signed(b) }; 
			end
			ALU_USMALL: begin 
			     result = {63'b0,  a < b }; 
			end
			ALU_LEFT: begin 
			     result = a << b[5:0]; 
			end
			ALU_URIGHT: begin 
			     result = a >> b[5:0]; 
			end
			ALU_SRIGHT: begin 
			     result = $signed(a) >>> b[5:0]; 
			end
			ALU_URIGHT_32: begin
				result = {32'b0, a[31:0] >> b[5:0]};
			end
			ALU_SRIGHT_32: begin
				result = {{32{a[31]}}, a[31:0]} >>> b[5:0];
			end
			default: begin
				result = '0;
			end
		endcase
	end
	
endmodule