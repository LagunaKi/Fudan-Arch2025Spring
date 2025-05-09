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
        dataF_out <= dataF_in;
    end
endmodule
