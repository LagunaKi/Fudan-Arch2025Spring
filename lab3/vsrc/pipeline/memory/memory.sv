`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module memory
    import common::*;
(
    input execute_data_t dataE,
    input  dbus_resp_t dresp,
    output dbus_req_t  dreq,
    output memory_data_t dataM
);

    msize_t msize;
    assign dreq.size = msize;
    assign dataM.stall = dataE.stall;

    strobe_t strobe;
    u1 isunsigned;
    u1 sign_bit;
    u64 writedata, readdata;

    always_comb begin
        dataM.pc = '0;
        dataM.result = '0;
        dataM.ctl = '0;
        dataM.dst = '0;
        dataM.mem_addr = '0;
        unique case(dataE.ctl.op)
            SD:begin
                dataM.pc = dataE.pc;
                dataM.result = dataE.result;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE8;
                dreq.strobe = strobe;
                dreq.data = writedata;
                isunsigned = 0;
            end
            SB:begin
                dataM.pc = dataE.pc;
                dataM.result = dataE.result;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE1;
                dreq.strobe = strobe;
                dreq.data = writedata;
                isunsigned= 0;
            end
            SH:begin
                dataM.pc = dataE.pc;
                dataM.result = dataE.result;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE2;
                dreq.strobe = strobe;
                dreq.data = writedata;
                isunsigned= 0;
            end
            SW:begin
                dataM.pc = dataE.pc;
                dataM.result = dataE.result;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE4;
                dreq.strobe = strobe;
                dreq.data = writedata;
                isunsigned= 0;
            end

            LD:begin
                dataM.pc = dataE.pc;
                dataM.result = dresp.data;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE8;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 0;
            end
            LB:begin
                dataM.pc = dataE.pc;
                dataM.result = readdata;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE1;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 0;
            end
            LH:begin
                dataM.pc = dataE.pc;
                dataM.result = readdata;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE2;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 0;
            end
            LW:begin
                dataM.pc = dataE.pc;
                dataM.result = readdata;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE4;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 0;
            end
            LBU:begin
                dataM.pc = dataE.pc;
                dataM.result = readdata;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE1;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 1;
            end
            LHU:begin
                dataM.pc = dataE.pc;
                dataM.result = readdata;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE2;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 1;
            end
            LWU:begin
                dataM.pc = dataE.pc;
                dataM.result = readdata;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b1 & ~dataE.stall;
                dreq.addr = dataE.mem_addr;
                msize = MSIZE4;
                dreq.strobe = 8'b0000_0000;
                dreq.data = '0;
                isunsigned = 1;
            end
            default:begin
                dataM.pc = dataE.pc;
                dataM.result = dataE.result;
                dataM.ctl = dataE.ctl;
                dataM.dst = dataE.dst;
                dataM.mem_addr = dataE.mem_addr;

                dreq.valid = 1'b0;
                dreq.addr = '0;
                msize = MSIZE8;
                dreq.strobe = '0;
                dreq.data = '0;
                isunsigned = 0;

            end
        endcase
    end

    always_comb begin
		unique case(msize)
			MSIZE1: begin 
				unique case(dataE.mem_addr[2:0])
					3'b000: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[7];
						readdata = {{56{sign_bit}}, dresp.data[7-:8]};
					end
					3'b001: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[15];
						readdata = {{56{sign_bit}}, dresp.data[15-:8]};
					end
					3'b010: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[23];
						readdata = {{56{sign_bit}}, dresp.data[23-:8]};
					end
					3'b011: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[31];
						readdata = {{56{sign_bit}}, dresp.data[31-:8]};
					end
					3'b100: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[39];
						readdata = {{56{sign_bit}}, dresp.data[39-:8]};
					end
					3'b101: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[47];
						readdata = {{56{sign_bit}}, dresp.data[47-:8]};
					end
					3'b110: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[55];
						readdata = {{56{sign_bit}}, dresp.data[55-:8]};
					end
					3'b111: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[63];
						readdata = {{56{sign_bit}}, dresp.data[63-:8]};
					end
					default: begin
						
					end
				endcase
			end
			MSIZE2: begin
				unique case(dataE.mem_addr[2:1])
					2'b00: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[15];
						readdata = {{48{sign_bit}}, dresp.data[15-:16]};
					end
					2'b01: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[31];
						readdata = {{48{sign_bit}}, dresp.data[31-:16]};
					end
					2'b10: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[47];
						readdata = {{48{sign_bit}}, dresp.data[47-:16]};
					end
					2'b11: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[63];
						readdata = {{48{sign_bit}}, dresp.data[63-:16]};
					end
					default: begin
						
					end
				endcase
			end
			MSIZE4: begin
				unique case(dataE.mem_addr[2])
					1'b0: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[31];
						readdata = {{32{sign_bit}}, dresp.data[31-:32]};
					end
					1'b1: begin
						sign_bit = isunsigned ? 1'b0 : dresp.data[63];
						readdata = {{32{sign_bit}}, dresp.data[63-:32]};
					end
					default: begin
						
					end
				endcase
			end
			MSIZE8: begin
				readdata = dresp.data;
			end
			default: begin
				
			end
		endcase
	end
	
	always_comb begin
		strobe = '0;
		writedata = '0;
		unique case(msize)
			MSIZE1: begin
				unique case(dataE.mem_addr[2:0])
					3'b000: begin
						writedata[7-:8] = dataE.result[7:0];
						strobe = 8'h01;
					end
					3'b001: begin
						writedata[15-:8] = dataE.result[7:0];
						strobe = 8'h02;
					end
					3'b010: begin
						writedata[23-:8] = dataE.result[7:0];
						strobe = 8'h04;
					end
					3'b011: begin
						writedata[31-:8] = dataE.result[7:0];
						strobe = 8'h08;
					end
					3'b100: begin
						writedata[39-:8] = dataE.result[7:0];
						strobe = 8'h10;
					end
					3'b101: begin
						writedata[47-:8] = dataE.result[7:0];
						strobe = 8'h20;
					end
					3'b110: begin
						writedata[55-:8] = dataE.result[7:0];
						strobe = 8'h40;
					end
					3'b111: begin
						writedata[63-:8] = dataE.result[7:0];
						strobe = 8'h80;
					end
					default: begin
						
					end
				endcase
			end
			MSIZE2: begin
				unique case(dataE.mem_addr[2:1])
					2'b00: begin
						writedata[15-:16] = dataE.result[15:0];
						strobe = 8'h03;
					end
					2'b01: begin
						writedata[31-:16] = dataE.result[15:0];
						strobe = 8'h0c;
					end
					2'b10: begin
						writedata[47-:16] = dataE.result[15:0];
						strobe = 8'h30;
					end
					2'b11: begin
						writedata[63-:16] = dataE.result[15:0];
						strobe = 8'hc0;
					end
					default: begin
						
					end
				endcase
			end
			MSIZE4: begin
				unique case(dataE.mem_addr[2])
					1'b0: begin
						writedata[31-:32] = dataE.result[31:0];
						strobe = 8'h0f;
					end
					1'b1: begin
						writedata[63-:32] = dataE.result[31:0];
						strobe = 8'hf0;
					end
					default: begin
						
					end
				endcase
			end
			MSIZE8: begin
				writedata = dataE.result;
				strobe = '1;
			end
			default: begin
				
			end
		endcase
	end

endmodule
