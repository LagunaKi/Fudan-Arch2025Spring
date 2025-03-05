`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module fetch
    import common::*;
(
        
    input u32 raw_instr,
    input u64 pc,
    output fetch_data_t dataF,
    input logic ivalid
);


    always_comb begin
        dataF.raw_instr = '0;
        dataF.pc = '0;
        dataF.is_bubble = '0;
        if(ivalid == 0)begin
            dataF.raw_instr = raw_instr;
            dataF.pc = pc;
            dataF.is_bubble = 1'b1;
        end
        else begin
            dataF.raw_instr = raw_instr;
            dataF.pc = pc;
            dataF.is_bubble = 1'b0;
        end
    end
    
endmodule
