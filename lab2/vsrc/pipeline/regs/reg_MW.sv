`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_MW
    import common::*;
(
        input logic clk, reset,
        input memory_data_t dataM_in,
        output memory_data_t dataM_out
);

    always_ff @ (posedge clk)
    begin
        dataM_out <= dataM_in;
    end
    
endmodule
