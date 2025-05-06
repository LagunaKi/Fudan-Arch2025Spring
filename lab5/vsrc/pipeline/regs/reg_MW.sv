`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_MW
    import common::*;
(
        input logic clk, reset, stalldata, flush,
        input memory_data_t dataM_in,
        output memory_data_t dataM_out,
        input memory_data_t last_dataM
);

    always_ff @ (posedge clk)
    begin
        if(reset) begin
            dataM_out.pc <= '0;
            dataM_out.result <= '0;
            dataM_out.csr_result <= '0;
            dataM_out.ctl.op <= UNKNOWN;
            dataM_out.ctl.alufunc <= ALU_NOP;
            dataM_out.ctl.regwrite <= '0;
            dataM_out.ctl.csr_ops <= '0;
            dataM_out.dst <= '0;
            dataM_out.mem_addr <= '0;
            dataM_out.csr_addr <= '0;
            dataM_out.stall <= 1'b1;
        end
        else if(flush) begin
            // On flush, clear the pipeline stage
            dataM_out.pc <= '0;
            dataM_out.result <= '0;
            dataM_out.csr_result <= '0;
            dataM_out.ctl.op <= UNKNOWN;
            dataM_out.ctl.alufunc <= ALU_NOP;
            dataM_out.ctl.regwrite <= '0;
            dataM_out.ctl.csr_ops <= '0;
            dataM_out.dst <= '0;
            dataM_out.mem_addr <= '0;
            dataM_out.csr_addr <= '0;
            dataM_out.stall <= 1'b1;
        end
        else if(stalldata)begin
            dataM_out.result <= last_dataM.result;
            dataM_out.csr_result <= last_dataM.csr_result;
            dataM_out.pc <= last_dataM.pc;
            dataM_out.ctl <= last_dataM.ctl;
            dataM_out.dst <= last_dataM.dst;
            dataM_out.csr_addr <= last_dataM.csr_addr;
            dataM_out.stall <= 1'b1;
        end
        else begin
            dataM_out <= dataM_in;
        end
    end
    
endmodule
