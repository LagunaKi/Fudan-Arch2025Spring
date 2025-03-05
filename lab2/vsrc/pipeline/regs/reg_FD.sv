`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_FD 
import common::*;
(
    input      logic             clk, reset,
    input      fetch_data_t      dataF_in,
    input      u1                stalldata,
    output     fetch_data_t      dataF_out
);

    always_ff @(posedge clk) begin
        if(stalldata) begin
            dataF_out.raw_instr    <= dataF_out.raw_instr;
            dataF_out.pc           <= dataF_out.pc;
            dataF_out.is_bubble    <= 1'b1;
        end
        else begin
            dataF_out <= dataF_in;
        end
    end
endmodule
