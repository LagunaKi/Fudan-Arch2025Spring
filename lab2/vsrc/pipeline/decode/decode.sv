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
    assign dataD.stall = dataF.stall;

    always_comb begin
        dataD.immediate = '0;
        unique case(ctl.op)
            LUI:begin
                dataD.immediate = {{32{dataF.raw_instr[31]}}, dataF.raw_instr[31:12], {12{1'b0}} };
            end
            default: begin
                dataD.immediate = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20]};
            end
        endcase
    end

    assign ra1 = dataF.raw_instr[19:15];
    assign ra2 = dataF.raw_instr[24:20];

    always_comb begin
        dataD.mem_addr = '0;
        unique case(ctl.op)
            LD: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LB: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LH: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LW: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LBU: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LHU: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LWU: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            SD: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            SB: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            SH: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            SW: begin
                dataD.mem_addr = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            default: begin  end
        endcase
    end
    
endmodule
