`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_DE 
import common::*;
(
    input    u1            clk, reset, stalldata,
    input    decode_data_t    dataD_in,
    output   decode_data_t    dataD_out,
    input    decode_data_t    last_dataD,
    input    u1               bubble
);

    always_ff @(posedge clk) begin
        if(stalldata)begin
            dataD_out <= last_dataD;
        end
        else if (reset || bubble) begin    
            dataD_out.srca       <= '0;
            dataD_out.srcb       <= '0;
            dataD_out.immediate  <= '0;
            dataD_out.ctl.op     <= UNKNOWN;
            dataD_out.ctl.alufunc <= ALU_NOP;
            dataD_out.ctl.regwrite <= '0;
            dataD_out.dst        <= '0;
            dataD_out.pc         <= 64'h8000_0000;
            dataD_out.stall <= 1'b1;
        end
        else begin
            dataD_out <= dataD_in;
        end
    end
endmodule

