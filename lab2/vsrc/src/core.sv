`ifndef __CORE_SV
`define __CORE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "pipeline/fetch/fetch.sv"
`include "pipeline/fetch/pcselect.sv"
`include "pipeline/decode/decode.sv"
`include "pipeline/execute/execute.sv"
`include "pipeline/memory/memory.sv"
`include "pipeline/writeback/writeback.sv"
`include "pipeline/regfile/regfile.sv"
`include "pipeline/regs/reg_FD.sv"
`include "pipeline/regs/reg_DE.sv"
`include "pipeline/regs/reg_EM.sv"
`include "pipeline/regs/reg_MW.sv"

`endif

module core 
	import common::*;
(
	input logic clk, reset,
	output ibus_req_t  ireq,
	input  ibus_resp_t iresp,
	output dbus_req_t  dreq,
	input  dbus_resp_t dresp,
	input logic trint, swint, exint
);


    /* TODO: Add your CPU-Core here. */

    logic [63:0]       pc, pc_nxt;
    logic [31:0]       raw_instr;
    logic              handin;
    assign handin = dataW.ctl.regwrite & ~dataW.is_bubble;

    u1 stallpc;
	assign stallpc = ireq.valid && ~iresp.data_ok;
	always_ff @( posedge clk ) begin
		if(reset) begin
			pc <= 64'h8000_0000;
		end else if(stallpc) begin
			pc <= pc;
		end else begin
			pc <= pc_nxt;
		end
	end
    assign ireq.addr = pc;
    assign ireq.valid = 1'b1;
    assign raw_instr = iresp.data;

    fetch_data_t       dataF, dataF_next;
    decode_data_t      dataD, dataD_next;
    execute_data_t     dataE, dataE_next;
    memory_data_t      dataM, dataM_next;
    writeback_data_t   dataW;
    creg_addr_t        ra1, ra2;
    word_t             rd1, rd2;
    logic              Iwait;
    assign Iwait = ireq.valid & (~iresp.data_ok);

    pcselect pcselect (
		.pcplus4(pc + 4),
		.pc_selected(pc_nxt)
	);


    fetch fetch (
        .raw_instr      (raw_instr),
        .pc             (pc),
        .dataF_next     (dataF_next),
        .dataF          (dataF),
        .ivalid         (ireq.valid)
    );

    reg_FD reg_FD (
        .clk,  .reset ,
        .dataF_in       (dataF),
        .dataF_out      (dataF_next)
    );

    decode decode (
        .dataF          (dataF_next),
        .dataD          (dataD),
        .ra1            (ra1),
        .ra2            (ra2),
        .rd1            (rd1),
        .rd2            (rd2)
    );

    reg_DE reg_DE (
        .clk ,.reset ,
        .dataD_in       (dataD),
        .dataD_out      (dataD_next)
    );

    execute execute (
        .clk            (clk),
        .reset          (reset),
        .dataD          (dataD_next),
        .dataE          (dataE)
    );

    reg_EM reg_EM (
        .clk            (clk),
        .reset          (reset),
        .dataE_in       (dataE),
        .dataE_out      (dataE_next)
    );

    memory memory (
        .dataE          (dataE_next),
        .dresp          (dresp),
        .dreq           (dreq),
        .dataM          (dataM)
    );

    reg_MW reg_MW (
        .clk            (clk),
        .reset          (reset),
        .dataM_in       (dataM),
        .dataM_out      (dataM_next)
    );

    writeback writeback (
        .dataM          (dataM_next),
        .dataW          (dataW)
    );

    regfile regfile (
        .clk            (clk),
        .reset          (reset),
        .ra1            (ra1),
        .ra2            (ra2),
        .rd1            (rd1),
        .rd2            (rd2),
        .WE             (handin),
        .wa             (dataW.dst),
        .wd             (dataW.result)
    );


    


`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (0),
		.index              (0),
		.valid              (handin),
		.pc                 (dataW.pc),
		.instr              (0),
		.skip               (0),
		.isRVC              (0),
		.scFailed           (0),
		.wen                (dataW.ctl.regwrite),
		.wdest              ({3'b0, dataW.dst}),
		.wdata              (dataW.result)
	);
	      
	DifftestArchIntRegState DifftestArchIntRegState (
		.clock              (clk),
		.coreid             (0),
		.gpr_0              (regfile.regs_nxt[0]),
		.gpr_1              (regfile.regs_nxt[1]),
		.gpr_2              (regfile.regs_nxt[2]),
		.gpr_3              (regfile.regs_nxt[3]),
		.gpr_4              (regfile.regs_nxt[4]),
		.gpr_5              (regfile.regs_nxt[5]),
		.gpr_6              (regfile.regs_nxt[6]),
		.gpr_7              (regfile.regs_nxt[7]),
		.gpr_8              (regfile.regs_nxt[8]),
		.gpr_9              (regfile.regs_nxt[9]),
		.gpr_10             (regfile.regs_nxt[10]),
		.gpr_11             (regfile.regs_nxt[11]),
		.gpr_12             (regfile.regs_nxt[12]),
		.gpr_13             (regfile.regs_nxt[13]),
		.gpr_14             (regfile.regs_nxt[14]),
		.gpr_15             (regfile.regs_nxt[15]),
		.gpr_16             (regfile.regs_nxt[16]),
		.gpr_17             (regfile.regs_nxt[17]),
		.gpr_18             (regfile.regs_nxt[18]),
		.gpr_19             (regfile.regs_nxt[19]),
		.gpr_20             (regfile.regs_nxt[20]),
		.gpr_21             (regfile.regs_nxt[21]),
		.gpr_22             (regfile.regs_nxt[22]),
		.gpr_23             (regfile.regs_nxt[23]),
		.gpr_24             (regfile.regs_nxt[24]),
		.gpr_25             (regfile.regs_nxt[25]),
		.gpr_26             (regfile.regs_nxt[26]),
		.gpr_27             (regfile.regs_nxt[27]),
		.gpr_28             (regfile.regs_nxt[28]),
		.gpr_29             (regfile.regs_nxt[29]),
		.gpr_30             (regfile.regs_nxt[30]),
		.gpr_31             (regfile.regs_nxt[31])
	);

    DifftestTrapEvent DifftestTrapEvent(
		.clock              (clk),
		.coreid             (0),
		.valid              (0),
		.code               (0),
		.pc                 (0),
		.cycleCnt           (0),
		.instrCnt           (0)
	);

	DifftestCSRState DifftestCSRState(
		.clock              (clk),
		.coreid             (0),
		.priviledgeMode     (3),
		.mstatus            (0),
		.sstatus            (0),
		.mepc               (0),
		.sepc               (0),
		.mtval              (0),
		.stval              (0),
		.mtvec              (0),
		.stvec              (0),
		.mcause             (0),
		.scause             (0),
		.satp               (0),
		.mip                (0),
		.mie                (0),
		.mscratch           (0),
		.sscratch           (0),
		.mideleg            (0),
		.medeleg            (0)
	);
`endif
endmodule
`endif
