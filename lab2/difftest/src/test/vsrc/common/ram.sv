`include "include/common.sv"

import "DPI-C" function int get_switch();

// latency
`define LATENCY
`ifndef RANDOMIZE_DELAY
/* verilator lint_off REDEFMACRO */
`define RANDOMIZE_DELAY 3
`endif

`define IDX(addr) (addr > 64'h8000_0000 ? ((addr - 64'h8000_0000) >> 3) : 0)

/* verilator lint_off WIDTH */

module RAMHelper2 import common::*;
(
	input logic clk, reset,
	input cbus_req_t  oreq,
	output  cbus_resp_t oresp,
	output logic trint, swint, exint
);

task automatic check_req_modification(cbus_req_t req, cbus_req_t saved_req);
	if (req.valid != saved_req.valid || 
		req.is_write != saved_req.is_write ||
		req.size != saved_req.size ||
		req.addr != saved_req.addr ||
		req.len != saved_req.len ||
		req.burst != saved_req.burst) begin
		$display("ERROR: Unexpected CBus request modification.\n");
		$finish();
	end
endtask

	cbus_req_t saved_oreq;
	enum i2 {NONE, WAIT, READ, WRITE} state;
	i8 count_down;
	i4 size;
	addr_t addr, idx, wrap1, wrap2;
	longint cyc_cnt, ms_cnt;
	assign idx = `IDX(addr);
	u64 wmask;
	for (genvar i = 0; i < 8; i++) begin
		assign wmask[i * 8 + 7 -: 8] = {8{oreq.strobe[i]}};
	end

	u64 mtime, mtimecmp;
	logic msip;

	always_ff @(posedge clk) begin
		if (~reset) begin
			if (cyc_cnt == 25) begin
				ms_cnt <= ms_cnt + 1;
				mtime <= mtime + 1;
				cyc_cnt <= 0;
			end else begin
				cyc_cnt <= cyc_cnt + 1;
			end
			trint <= mtime > mtimecmp;
			swint <= msip;
			unique case (state)
			NONE: begin
				if (oreq.valid) begin
					saved_oreq <= oreq;
					if (count_down == 0) begin
						if (oreq.is_write) begin
							unique case (oreq.addr)
							64'h40600004: if (oreq.strobe[4]) begin
								$fwrite(32'h8000_0001, "%c", oreq.data[39:32]); // stdout
								$fflush(32'h8000_0001);
							end
							64'h23333000: if (oreq.data == 64'h233 && oreq.strobe == '1) $display("Pass!");
							64'h38000000: msip <= oreq.data[0];
							64'h38004000: mtimecmp <= oreq.data;
							64'h3800bff8: mtime <= oreq.data;
							default: if (addr != 64'h4060000c) ram_write_helper(`IDX(oreq.addr), oreq.data, wmask, '1);
							endcase
							count_down <= {$random()} % `RANDOMIZE_DELAY;
						end else begin
							if (`IDX(oreq.addr) >= 'h10000000) begin
								$display("ERROR: Load address %x out of range!\n", oreq.addr);
								$finish;
							end
							count_down <= {$random()} % `RANDOMIZE_DELAY;
						end
					end else begin
						count_down <= count_down - 1;
						state <= WAIT;
					end				
				end
			end
			WAIT: begin
				check_req_modification(oreq, saved_oreq);
				unique if (count_down == 0) begin
					state <= oreq.is_write ? WRITE : READ;
					addr <= oreq.addr;
					count_down <= oreq.len;
					size <= 1 << oreq.size;
					unique case (oreq.burst)
					AXI_BURST_FIXED: begin
						wrap1 <= oreq.addr;
						wrap2 <= oreq.addr + (1 << oreq.size);
					end
					AXI_BURST_WRAP: begin
						wrap1 <= oreq.addr & ~(((64'(oreq.len) + 1) << oreq.size) - 1);
						wrap2 <= (oreq.addr & ~(((64'(oreq.len) + 1) << oreq.size) - 1)) + ((64'(oreq.len) + 1) << oreq.size);
					end
					default: {wrap1, wrap2} <= '0;
					endcase
				end else
					count_down <= count_down - 1;
			end
			READ: begin
				check_req_modification(oreq, saved_oreq);
				if (idx >= 'h10000000) begin
					$display("ERROR: Load address %x out of range!\n", addr);
					$finish;
				end
				unique if (oresp.last) begin
					state <= NONE;
					count_down <= {$random()} % `RANDOMIZE_DELAY;
				end else begin
					count_down <= count_down - 1;
					addr <= (addr + size == wrap2) ? wrap1 : addr + size;
				end
			end
			WRITE: begin
				check_req_modification(oreq, saved_oreq);
				unique case (addr)
				64'h40600004: if (oreq.strobe[4]) begin
					$fwrite(32'h8000_0001, "%c", oreq.data[39:32]); // stdout
					$fflush(32'h8000_0001);
				end
				64'h23333000: if (oreq.data == 64'h233 && oreq.strobe == '1) $display("Pass!");
				64'h38000000: msip <= oreq.data[0];
				64'h38004000: mtimecmp <= oreq.data;
				64'h3800bff8: mtime <= oreq.data;
				default: if (addr != 64'h4060000c) ram_write_helper(idx, oreq.data, wmask, '1);
				endcase
				unique if (oresp.last) begin
					state <= NONE;
					count_down <= {$random()} % `RANDOMIZE_DELAY;
				end else begin
					count_down <= count_down - 1;
					addr <= addr + size;
				end
			end
			endcase
		end else begin
			{state, cyc_cnt, ms_cnt, addr, size, saved_oreq} <= '0;
			count_down <= {$random()} % `RANDOMIZE_DELAY;
			mtime <= '0;
			mtimecmp <= '1;
			msip <= '0;
			{trint, swint, exint} <= '0;
		end
	end

	always_comb begin
		oresp = '0;
		unique if (state == READ || (state == NONE && oreq.valid && count_down == 0 && ~oreq.is_write)) begin
			oresp.ready = '1;
			oresp.last = count_down == 0;
			unique case (oreq.addr)
			64'h40600008: oresp.data = '0;
			64'h38000000: oresp.data = {63'b0, msip};
			64'h38004000: oresp.data = mtimecmp;
			64'h3800bff8: oresp.data = mtime;
			64'h20003000: oresp.data = ms_cnt;
			64'h23333008: oresp.data = {'0, get_switch()};
			default: oresp.data = ram_read_helper('1, `IDX(oreq.addr));
			endcase
		end else if (state == WRITE || (state == NONE && oreq.valid && count_down == 0 && oreq.is_write)) begin
			oresp.ready = '1;
			oresp.last = count_down == 0;
		end else
			oresp = '0;
	end

endmodule