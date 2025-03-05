`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_FD 
import common::*;
(
    input      logic             clk, reset,
    input      fetch_data_t      dataF_in,
    output     fetch_data_t      dataF_out
);

    always_ff @(posedge clk) begin
        dataF_out.raw_instr   <= dataF_in.raw_instr;
        dataF_out.pc           <= dataF_in.pc;
        dataF_out.is_bubble    <= dataF_in.is_bubble;
    end
endmodule
