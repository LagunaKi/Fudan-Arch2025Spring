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
    assign dataW.stall = dataM.stall;
    always_comb begin
        dataW.pc = '0;
        dataW.result = '0;;
        dataW.ctl = '0;
        dataW.dst = '0;
        dataW.mem_addr = '0;
        dataW.csr_addr = '0;
        unique case(dataM.ctl.op)
            default:begin
                dataW.pc = dataM.pc;
                dataW.result = dataM.result;
                dataW.ctl = dataM.ctl;
                dataW.dst = dataM.dst;
                dataW.csr_addr = dataM.csr_addr;
                dataW.mem_addr = dataM.mem_addr;
                for(int i=0;i < 3;i++)begin
                    dataW.ctl.csr_ops[i].we = dataW.ctl.csr_ops[i].we & ~dataW.stall;
                end
            end
        endcase
    end

endmodule
