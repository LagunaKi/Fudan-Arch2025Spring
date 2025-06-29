`ifdef VERILATOR
`include "include/common.sv"
`include "pipeline/decode/decoder.sv"
`else

`endif

module decode 
    import common::*;
(
    input fetch_data_t dataF,
    output decode_data_t dataD,
    output creg_addr_t ra1, ra2,
    input word_t rd1, rd2
);

    control_t ctl;
    decoder decoder(
        .raw_instr(dataF.raw_instr),
        .ctl(ctl)
    );

    assign dataD.srca = rd1;
    assign dataD.srcb = rd2;
    assign dataD.ctl = ctl;
    assign dataD.dst = dataF.raw_instr[11:7];
    assign dataD.pc = dataF.pc;
    assign dataD.is_bubble = dataF.is_bubble;

    always_comb begin
        dataD.immediate = '0;
        unique case(ctl.op)
            default: begin
                dataD.immediate = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20]};
            end
        endcase
    end

    assign ra1 = dataF.raw_instr[19:15];
    assign ra2 = dataF.raw_instr[24:20];
    
    assign dataD.memory_address = '0;
    
endmodule
