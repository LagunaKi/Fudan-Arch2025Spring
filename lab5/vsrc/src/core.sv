`ifndef __CORE_SV
`define __CORE_SV

`ifdef VERILATOR
`include "include/csr.sv"
`include "include/common.sv"
`include "pipeline/fetch/fetch.sv"
`include "pipeline/fetch/pcselect.sv"
`include "pipeline/decode/decode.sv"
`include "pipeline/execute/execute.sv"
`include "pipeline/memory/memory.sv"
`include "pipeline/writeback/writeback.sv"
`include "pipeline/regfile/regfile.sv"
`include "pipeline/regfile/csr_regfile.sv"
`include "pipeline/regs/reg_FD.sv"
`include "pipeline/regs/reg_DE.sv"
`include "pipeline/regs/reg_EM.sv"
`include "pipeline/regs/reg_MW.sv"

`endif

module core 
	import csr_pkg::*;
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

    u64       pc, pc_nxt, offset;
    u32       raw_instr;
    u1        handin;
    fetch_data_t       dataF, dataF_nxt, saved_dataF;
    decode_data_t      dataD, dataD_nxt;
    execute_data_t     dataE, dataE_nxt;
    memory_data_t      dataM, dataM_nxt;
    writeback_data_t   dataW;
    creg_addr_t        ra1, ra2;
    word_t             rd1, rd2, csr_rd;
	csr_addr_t         csr_ra;
    u1                 stallpc, stalldata, stall, bubble, flush, csr_write;
	u1 				   hazard_ra1, hazard_ra2, hazard_jalr, hazard_csr;
	instfunc_t         op_in, op_out;
    assign stallpc = ireq.valid & (~iresp.data_ok);
	assign stalldata = dreq.valid & (~dresp.data_ok);
	assign stall = dataD.stall;
	assign handin = ~dataW.stall;


	always_ff @(posedge clk) begin
        if (reset) begin
            pc <= 64'h8000_0000;
            ireq.addr <= '0;
            ireq.valid <= '1;
        end 
		else begin
            pc <= pc_nxt;
            if (ireq.valid == 1'b0) begin
                ireq.addr <= pc_nxt;
                ireq.valid <= 1'b1;
            end 
			else begin
                if (iresp.data_ok == 0) begin
                    ireq.addr <= ireq.addr;
                    ireq.valid <= ireq.valid;
                end 
				else begin
                    ireq.addr <= ireq.addr;
                    ireq.valid <= 1'b0;
                end
            end
        end
    end

	always_comb begin
		if(bubble)begin
			raw_instr = '0;
		end
		else begin
        	raw_instr = (iresp.data_ok == 1) ? iresp.data : '0;
		end
    end

	// Pipeline flush control
    assign csr_write = (dataW.ctl.op inside {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI, ECALL}) & ~dataW.stall;
    
    // Flush pipeline on CSR writes or exception/return instructions
    // Enhanced flush logic with multi-cycle CSR operation support
    typedef enum logic [1:0] {
        CSR_IDLE,
        CSR_MRET,
        CSR_ECALL
    } csr_state_t;
    
    csr_state_t csr_state, csr_state_next;
    
    always_ff @(posedge clk) begin
        if (reset) begin
            csr_state <= CSR_IDLE;
        end else begin
            csr_state <= csr_state_next;
        end
    end
    
    always_comb begin
        csr_state_next = csr_state;
        flush = 1'b0;
        
        unique case (csr_state)
            CSR_IDLE: begin
                if (dataE.ctl.is_mret) begin
                    csr_state_next = CSR_MRET;
                    flush = 1'b1;
                end else if (dataE.ctl.is_ecall) begin
                    csr_state_next = CSR_ECALL;
                    flush = 1'b1;
                end
            end
            CSR_MRET: begin
                // Handle MRET CSR updates
                csr_state_next = CSR_IDLE;
            end
            CSR_ECALL: begin
                // Handle ECALL CSR updates
                csr_state_next = CSR_IDLE;
            end
            default: begin
                // Handle unexpected states
                csr_state_next = CSR_IDLE;
            end
        endcase
        
        // Maintain original flush conditions
        flush = flush || csr_write;
    end

	// data hazard
    // CSR hazard detection
    assign hazard_csr = (~stall) && (
        (dataD.ctl.op inside {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI}) &&
        ((~dataE.stall && dataE.ctl.op inside {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI} && 
          dataD.csr_addr == dataE.csr_addr) ||
         (~dataM.stall && dataM.ctl.op inside {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI} &&
          dataD.csr_addr == dataM.csr_addr) ||
         (~dataW.stall && dataW.ctl.op inside {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI} &&
          dataD.csr_addr == dataW.csr_addr))
    );

	assign hazard_ra1 = (~stall) && (
						(~dataE.stall && ra1 == dataE.dst) || 
						(~dataM.stall && ra1 == dataM.dst) || 
						(~dataW.stall && ra1 == dataW.dst));

	assign hazard_ra2 = (~stall) && (
						(~dataE.stall && ra2 == dataE.dst) || 
						(~dataM.stall && ra2 == dataM.dst) || 
						(~dataW.stall && ra2 == dataW.dst));
	
	assign hazard_jalr = (~stall && dataD.ctl.op == JALR) && (
						(~dataE.stall && ra1 == dataE.dst) ||
						(~dataM.stall && ra1 == dataM.dst) ||
						(~dataW.stall && ra1 == dataW.dst));

	assign bubble = hazard_ra1 || hazard_ra2 || hazard_jalr || hazard_csr;
	// assign bubble = hazard_ra1 || hazard_ra2;

	always_comb begin
		if(dataD.ctl.op == JALR)begin
			if(hazard_jalr)begin
				op_out = MAINTAIN;
			end
			else begin
				op_out = F_JALR;
			end
		end
		else begin
			op_out = op_in;
		end
	end


    pcselect pcselect (
		.pc, .stalldata, .stallpc, .ireq,
		.pc_selected(pc_nxt),
		.stall, .bubble, .flush, 
		.op(op_out), .offset,
		.mepc(csr_regfile.csr_nxt[CSR_MEPC])  // Connect MEPC from CSR
	);


    fetch fetch (
        .raw_instr, .ireq, 
        .pc, .dataF
    );

    reg_FD reg_FD (
        .clk,  .reset , .ireq, .flush, 
		.stallpc, .stalldata,
		.saved_dataF_in (saved_dataF),
		.saved_dataF_out (saved_dataF), 
		.last_dataF (dataF_nxt),
        .dataF_in       (dataF),
        .dataF_out      (dataF_nxt),
		.bubble
    );

    decode decode (
        .dataF  (dataF_nxt),
        .dataD,
        .ra1, .ra2,
        .rd1, .rd2, .csr_rd, 
		.op     (op_in),
		.offset, .csr_ra
    );

    reg_DE reg_DE (
        .clk ,.reset , .stalldata, .flush, 
        .dataD_in   (dataD),
        .dataD_out  (dataD_nxt),
		.last_dataD (dataD_nxt),
		.bubble
    );

    execute execute (
        .clk            (clk),
        .reset          (reset),
        .dataD          (dataD_nxt),
        .dataE          (dataE)
    );

    reg_EM reg_EM (
        .clk, .reset, .stalldata, .flush, 
        .dataE_in       (dataE),
        .dataE_out      (dataE_nxt),
		.last_dataE     (dataE_nxt)
    );

    memory memory (
        .dataE          (dataE_nxt),
        .dresp          (dresp),
        .dreq           (dreq),
        .dataM          (dataM)
    );

    reg_MW reg_MW (
        .clk, .reset, .stalldata, .flush, 
        .dataM_in       (dataM),
        .dataM_out      (dataM_nxt),
		.last_dataM (dataM_nxt)
    );

    writeback writeback (
        .dataM          (dataM_nxt),
        .dataW          (dataW)
    );

    // CSR register file
    csr_regfile csr_regfile (
        .clk            (clk),
        .reset          (reset),
        // Write port
        .we          ((dataW.ctl.op inside {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI}) & ~dataW.stall),
        .wa          (dataW.csr_addr),
        .wd          (dataW.csr_result),
        // Read port
        .ra          (csr_ra),
        .rd          (csr_rd)
    );

    regfile regfile (
        .clk            (clk),
        .reset          (reset),
        .ra1            (ra1),
        .ra2            (ra2),
        .rd1            (rd1),
        .rd2            (rd2),
        .WE             (dataW.ctl.regwrite & ~dataW.stall),
        .wa             (dataW.dst),
        .wd             (dataW.result)
    );


    


`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (csr_regfile.csr_nxt[CSR_MHARTID][7:0]),
		.index              (0),
		.valid              (handin),
		.pc                 (dataW.pc),
		.instr              (0),
		.skip               (dataW.ctl.memwrite & ~dataW.mem_addr[31]),
		.isRVC              (0),
		.scFailed           (0),
		.wen                (dataW.ctl.regwrite),
		.wdest              ({3'b0, dataW.dst}),
		.wdata              (dataW.result)
	);
	      
	DifftestArchIntRegState DifftestArchIntRegState (
		.clock              (clk),
		.coreid             (csr_regfile.csr_nxt[CSR_MHARTID][7:0]),
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
		.coreid             (csr_regfile.csr_nxt[CSR_MHARTID][7:0]),
		.valid              (0),
		.code               (0),
		.pc                 (0),
		.cycleCnt           (0),
		.instrCnt           (0)
	);

	DifftestCSRState DifftestCSRState(
		.clock              (clk),
		.coreid             (csr_regfile.csr_nxt[CSR_MHARTID][7:0]),
		.priviledgeMode     (3),
		.mstatus            (csr_regfile.csr_nxt[CSR_MSTATUS] & MSTATUS_MASK),
		.sstatus            (csr_regfile.csr_nxt[CSR_SSTATUS] & SSTATUS_MASK), // SSTATUS_MASK defined in include/common.sv
		.mepc               (csr_regfile.csr_nxt[CSR_MEPC]),
		.sepc               (0),
		.mtval              (csr_regfile.csr_nxt[CSR_MTVAL]),
		.stval              (0),
		.mtvec              (csr_regfile.csr_nxt[CSR_MTVEC] & MTVEC_MASK),
		.stvec              (0),
		.mcause             (csr_regfile.csr_nxt[CSR_MCAUSE]),
		.scause             (0),
		.satp               (csr_regfile.csr_nxt[CSR_SATP]),
		.mip                (csr_regfile.csr_nxt[CSR_MIP] & MIP_MASK),
		.mie                (csr_regfile.csr_nxt[CSR_MIE]),
		.mscratch           (csr_regfile.csr_nxt[CSR_MSCRATCH]),
		.sscratch           (0),
		.mideleg            (0),
		.medeleg            (0)
	);
`endif
endmodule
`endif
