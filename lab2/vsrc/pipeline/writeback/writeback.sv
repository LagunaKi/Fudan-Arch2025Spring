`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module writeback
    import common::*;
(
        
    input memory_data_t dataM,
    output writeback_data_t dataW
);
    assign dataW.is_bubble = dataM.is_bubble;
    always_comb begin
        dataW.pc = '0;
        dataW.result = '0;
        dataW.ctl = '0;
        dataW.dst = '0;
        dataW.mem_addr = '0;
        unique case(dataM.ctl.op)
            default:begin
                dataW.pc = dataM.pc;
                dataW.result = dataM.result;
                dataW.ctl = dataM.ctl;
                dataW.dst = dataM.dst;
                dataW.mem_addr = dataM.mem_addr;
            end
        endcase
    end

endmodule
