// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+539,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+541,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+543,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+545,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+547,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+548,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+549,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+550,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+551,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+552,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+539,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+541,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+543,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+545,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+547,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+548,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+549,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+550,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+551,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+552,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+2,"SimTop oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"SimTop oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+4,"SimTop oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MLEN1", "MLEN2", "MLEN4", "MLEN8", 
                                                "MLEN16", 
                                                "MLEN32", 
                                                "MLEN64", 
                                                "MLEN128", 
                                                "MLEN256"};
            const char* __VenumItemValues[]
            = {"0", "1", "11", "111", "1111", "11111", 
                                                "111111", 
                                                "1111111", 
                                                "11111111"};
            tracep->declDTypeEnum(2, "common::mlen_t", 9, 8, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {
            const char* __VenumItemNames[]
            = {"AXI_BURST_FIXED", "AXI_BURST_INCR", 
                                                "AXI_BURST_WRAP", 
                                                "AXI_BURST_RESERVED"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(3, "common::axi_burst_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+11,"SimTop oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop oresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"SimTop oresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+14,"SimTop oresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop trint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"SimTop swint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"SimTop exint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+19,"SimTop ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+20,"SimTop ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+23,"SimTop iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+24,"SimTop iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+25,"SimTop dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+26,"SimTop dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+32,"SimTop dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+33,"SimTop dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+34,"SimTop dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+36,"SimTop icreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+37,"SimTop icreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+38,"SimTop icreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+39,"SimTop icreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+41,"SimTop icreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+42,"SimTop icreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+44,"SimTop icreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+45,"SimTop icreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+46,"SimTop dcreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+47,"SimTop dcreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+48,"SimTop dcreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+49,"SimTop dcreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+51,"SimTop dcreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+52,"SimTop dcreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+54,"SimTop dcreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+55,"SimTop dcreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+56,"SimTop icresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+57,"SimTop icresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+58,"SimTop icresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+60,"SimTop dcresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+61,"SimTop dcresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+62,"SimTop dcresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"SimTop core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+24,"SimTop core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+25,"SimTop core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+26,"SimTop core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+32,"SimTop core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"SimTop core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+34,"SimTop core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop core trint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop core swint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop core exint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+64,"SimTop core pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop core pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop core offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop core raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+71,"SimTop core handin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+72,"SimTop core dataF\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+73,"SimTop core dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+75,"SimTop core dataF\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+76,"SimTop core dataF_nxt\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core dataF_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core dataF_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+80,"SimTop core saved_dataF\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+81,"SimTop core saved_dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+83,"SimTop core saved_dataF\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+84,"SimTop core dataD\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop core dataD\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop core dataD\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop core dataD\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop core dataD\206 csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"UNKNOWN", "ADDI", "XORI", "ORI", "ANDI", 
                                                "ADD", 
                                                "SUB", 
                                                "AND", 
                                                "OR", 
                                                "XOR", 
                                                "ADDIW", 
                                                "ADDW", 
                                                "SUBW", 
                                                "LD", 
                                                "SD", 
                                                "LB", 
                                                "LH", 
                                                "LW", 
                                                "LBU", 
                                                "LHU", 
                                                "LWU", 
                                                "SB", 
                                                "SH", 
                                                "SW", 
                                                "LUI", 
                                                "BNE", 
                                                "BEQ", 
                                                "BLT", 
                                                "BGE", 
                                                "BLTU", 
                                                "BGEU", 
                                                "SLTI", 
                                                "SLTIU", 
                                                "SLLI", 
                                                "SRLI", 
                                                "SRAI", 
                                                "SLL", 
                                                "SLT", 
                                                "SLTU", 
                                                "SRL", 
                                                "SRA", 
                                                "SLLIW", 
                                                "SRLIW", 
                                                "SRAIW", 
                                                "SLLW", 
                                                "SRLW", 
                                                "SRAW", 
                                                "AUIPC", 
                                                "JALR", 
                                                "JAL", 
                                                "CSRRW", 
                                                "CSRRS", 
                                                "CSRRC", 
                                                "CSRRWI", 
                                                "CSRRSI", 
                                                "CSRRCI"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011", 
                                                "10100", 
                                                "10101", 
                                                "10110", 
                                                "10111", 
                                                "11000", 
                                                "11001", 
                                                "11010", 
                                                "11011", 
                                                "11100", 
                                                "11101", 
                                                "11110", 
                                                "11111", 
                                                "100000", 
                                                "100001", 
                                                "100010", 
                                                "100011", 
                                                "100100", 
                                                "100101", 
                                                "100110", 
                                                "100111", 
                                                "101000", 
                                                "101001", 
                                                "101010", 
                                                "101011", 
                                                "101100", 
                                                "101101", 
                                                "101110", 
                                                "101111", 
                                                "110000", 
                                                "110001", 
                                                "110010", 
                                                "110011", 
                                                "110100", 
                                                "110101", 
                                                "110110", 
                                                "110111"};
            tracep->declDTypeEnum(4, "common::decode_op_t", 56, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+94,"SimTop core dataD\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        {
            const char* __VenumItemNames[]
            = {"ALU_UNKNOWN", "ALU_ADD", "ALU_SUB", 
                                                "ALU_AND", 
                                                "ALU_OR", 
                                                "ALU_XOR", 
                                                "ALU_DIRECT", 
                                                "ALU_NOP", 
                                                "ALU_LT", 
                                                "ALU_LTU", 
                                                "ALU_SL", 
                                                "ALU_SRU", 
                                                "ALU_SR", 
                                                "ALU_SRUW", 
                                                "ALU_SRW"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110"};
            tracep->declDTypeEnum(5, "common::alufunc_t", 15, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+95,"SimTop core dataD\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+96,"SimTop core dataD\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+97,"SimTop core dataD\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+98,"SimTop core dataD\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+99,"SimTop core dataD\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+100,"SimTop core dataD\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+101,"SimTop core dataD\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core dataD\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core dataD\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+106,"SimTop core dataD\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+107,"SimTop core dataD_nxt\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core dataD_nxt\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core dataD_nxt\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core dataD_nxt\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core dataD_nxt\206 csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+117,"SimTop core dataD_nxt\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+118,"SimTop core dataD_nxt\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+119,"SimTop core dataD_nxt\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+120,"SimTop core dataD_nxt\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+121,"SimTop core dataD_nxt\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+122,"SimTop core dataD_nxt\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+123,"SimTop core dataD_nxt\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+124,"SimTop core dataD_nxt\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop core dataD_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core dataD_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+129,"SimTop core dataD_nxt\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+130,"SimTop core dataE\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core dataE\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+134,"SimTop core dataE\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+136,"SimTop core dataE\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+137,"SimTop core dataE\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+138,"SimTop core dataE\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+139,"SimTop core dataE\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+140,"SimTop core dataE\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+141,"SimTop core dataE\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+142,"SimTop core dataE\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+143,"SimTop core dataE\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+145,"SimTop core dataE\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+146,"SimTop core dataE\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+147,"SimTop core dataE_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core dataE_nxt\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+151,"SimTop core dataE_nxt\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop core dataE_nxt\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+154,"SimTop core dataE_nxt\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+155,"SimTop core dataE_nxt\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+156,"SimTop core dataE_nxt\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+157,"SimTop core dataE_nxt\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+158,"SimTop core dataE_nxt\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+159,"SimTop core dataE_nxt\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+160,"SimTop core dataE_nxt\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+162,"SimTop core dataE_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+163,"SimTop core dataE_nxt\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+164,"SimTop core dataM\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop core dataM\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+168,"SimTop core dataM\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+170,"SimTop core dataM\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+171,"SimTop core dataM\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+172,"SimTop core dataM\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+173,"SimTop core dataM\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+174,"SimTop core dataM\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+175,"SimTop core dataM\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+176,"SimTop core dataM\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core dataM\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core dataM\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+180,"SimTop core dataM\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+181,"SimTop core dataM_nxt\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+183,"SimTop core dataM_nxt\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core dataM_nxt\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+187,"SimTop core dataM_nxt\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+188,"SimTop core dataM_nxt\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+189,"SimTop core dataM_nxt\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+190,"SimTop core dataM_nxt\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+191,"SimTop core dataM_nxt\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+192,"SimTop core dataM_nxt\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+193,"SimTop core dataM_nxt\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+194,"SimTop core dataM_nxt\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core dataM_nxt\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+197,"SimTop core dataM_nxt\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declQuad(c+198,"SimTop core dataW\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+200,"SimTop core dataW\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+202,"SimTop core dataW\206 csr_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+204,"SimTop core dataW\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+205,"SimTop core dataW\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+206,"SimTop core dataW\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+207,"SimTop core dataW\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+208,"SimTop core dataW\206 ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+209,"SimTop core dataW\206 ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+210,"SimTop core dataW\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+211,"SimTop core dataW\206 mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+213,"SimTop core dataW\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+214,"SimTop core dataW\206 csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBus(c+215,"SimTop core ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+216,"SimTop core ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+217,"SimTop core rd1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+219,"SimTop core rd2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+553,"SimTop core csr_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+221,"SimTop core csr_ra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
        tracep->declBit(c+222,"SimTop core stallpc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+223,"SimTop core stalldata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+105,"SimTop core stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+224,"SimTop core bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+225,"SimTop core flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+225,"SimTop core csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+226,"SimTop core hazard_ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+227,"SimTop core hazard_ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+228,"SimTop core hazard_jalr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+229,"SimTop core hazard_csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MAINTAIN", "PLUS4", "F_BEQ", "N_BEQ", 
                                                "F_JAL", 
                                                "F_JALR"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101"};
            tracep->declDTypeEnum(6, "common::instfunc_t", 6, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+230,"SimTop core op_in",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+231,"SimTop core op_out",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+223,"SimTop core pcselect stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"SimTop core pcselect stallpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+64,"SimTop core pcselect pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core pcselect stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop core pcselect ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core pcselect ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop core pcselect pc_selected",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+224,"SimTop core pcselect bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"SimTop core pcselect flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+231,"SimTop core pcselect op",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+68,"SimTop core pcselect offset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop core fetch raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+64,"SimTop core fetch pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+19,"SimTop core fetch ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core fetch ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+72,"SimTop core fetch dataF\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+73,"SimTop core fetch dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+75,"SimTop core fetch dataF\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+539,"SimTop core reg_FD clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core reg_FD reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"SimTop core reg_FD flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop core reg_FD ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop core reg_FD ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+72,"SimTop core reg_FD dataF_in\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+73,"SimTop core reg_FD dataF_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+75,"SimTop core reg_FD dataF_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"SimTop core reg_FD saved_dataF_in\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+81,"SimTop core reg_FD saved_dataF_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+83,"SimTop core reg_FD saved_dataF_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"SimTop core reg_FD saved_dataF_out\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+81,"SimTop core reg_FD saved_dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+83,"SimTop core reg_FD saved_dataF_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core reg_FD last_dataF\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core reg_FD last_dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core reg_FD last_dataF\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"SimTop core reg_FD stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"SimTop core reg_FD stallpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core reg_FD dataF_out\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core reg_FD dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core reg_FD dataF_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+224,"SimTop core reg_FD bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+76,"SimTop core decode dataF\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop core decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+79,"SimTop core decode dataF\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+84,"SimTop core decode dataD\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop core decode dataD\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop core decode dataD\206 immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop core decode dataD\206 shamt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop core decode dataD\206 csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+94,"SimTop core decode dataD\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+95,"SimTop core decode dataD\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+96,"SimTop core decode dataD\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"SimTop core decode dataD\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+98,"SimTop core decode dataD\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+99,"SimTop core decode dataD\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+100,"SimTop core decode dataD\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+101,"SimTop core decode dataD\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core decode dataD\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core decode dataD\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"SimTop core decode dataD\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+215,"SimTop core decode ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+216,"SimTop core decode ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+217,"SimTop core decode rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+219,"SimTop core decode rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+553,"SimTop core decode csr_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+230,"SimTop core decode op",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+68,"SimTop core decode offset",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+221,"SimTop core decode csr_ra",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+232,"SimTop core decode ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+233,"SimTop core decode ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+234,"SimTop core decode ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+235,"SimTop core decode ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+236,"SimTop core decode ctl\206 csr_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+237,"SimTop core decode ctl\206 csr_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+76,"SimTop core decode decoder raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+232,"SimTop core decode decoder ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+233,"SimTop core decode decoder ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+234,"SimTop core decode decoder ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"SimTop core decode decoder ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"SimTop core decode decoder ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"SimTop core decode decoder ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+238,"SimTop core decode decoder f7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+239,"SimTop core decode decoder f7t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+240,"SimTop core decode decoder f3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+241,"SimTop core decode decoder f6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+539,"SimTop core reg_DE clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core reg_DE reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"SimTop core reg_DE stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"SimTop core reg_DE flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+84,"SimTop core reg_DE dataD_in\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop core reg_DE dataD_in\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop core reg_DE dataD_in\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop core reg_DE dataD_in\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop core reg_DE dataD_in\206 csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+94,"SimTop core reg_DE dataD_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+95,"SimTop core reg_DE dataD_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+96,"SimTop core reg_DE dataD_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"SimTop core reg_DE dataD_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+98,"SimTop core reg_DE dataD_in\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+99,"SimTop core reg_DE dataD_in\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+100,"SimTop core reg_DE dataD_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+101,"SimTop core reg_DE dataD_in\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core reg_DE dataD_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+105,"SimTop core reg_DE dataD_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"SimTop core reg_DE dataD_in\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+107,"SimTop core reg_DE dataD_out\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core reg_DE dataD_out\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core reg_DE dataD_out\206 immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core reg_DE dataD_out\206 shamt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core reg_DE dataD_out\206 csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+117,"SimTop core reg_DE dataD_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+118,"SimTop core reg_DE dataD_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+119,"SimTop core reg_DE dataD_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+120,"SimTop core reg_DE dataD_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+121,"SimTop core reg_DE dataD_out\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+122,"SimTop core reg_DE dataD_out\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+123,"SimTop core reg_DE dataD_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+124,"SimTop core reg_DE dataD_out\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop core reg_DE dataD_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core reg_DE dataD_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"SimTop core reg_DE dataD_out\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+107,"SimTop core reg_DE last_dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core reg_DE last_dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core reg_DE last_dataD\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core reg_DE last_dataD\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core reg_DE last_dataD\206 csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+117,"SimTop core reg_DE last_dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+118,"SimTop core reg_DE last_dataD\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+119,"SimTop core reg_DE last_dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+120,"SimTop core reg_DE last_dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+121,"SimTop core reg_DE last_dataD\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+122,"SimTop core reg_DE last_dataD\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+123,"SimTop core reg_DE last_dataD\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+124,"SimTop core reg_DE last_dataD\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop core reg_DE last_dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core reg_DE last_dataD\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"SimTop core reg_DE last_dataD\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBit(c+224,"SimTop core reg_DE bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+539,"SimTop core execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core execute reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+107,"SimTop core execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core execute dataD\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core execute dataD\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core execute dataD\206 csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+117,"SimTop core execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+118,"SimTop core execute dataD\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+119,"SimTop core execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+120,"SimTop core execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+121,"SimTop core execute dataD\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+122,"SimTop core execute dataD\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+123,"SimTop core execute dataD\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+124,"SimTop core execute dataD\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop core execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core execute dataD\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"SimTop core execute dataD\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+130,"SimTop core execute dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core execute dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+134,"SimTop core execute dataE\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+136,"SimTop core execute dataE\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+137,"SimTop core execute dataE\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+138,"SimTop core execute dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+139,"SimTop core execute dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+140,"SimTop core execute dataE\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+141,"SimTop core execute dataE\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+142,"SimTop core execute dataE\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+143,"SimTop core execute dataE\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+145,"SimTop core execute dataE\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+146,"SimTop core execute dataE\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+242,"SimTop core execute result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop core execute alu_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+246,"SimTop core execute alu_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop core execute alu a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+246,"SimTop core execute alu b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+118,"SimTop core execute alu alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declQuad(c+242,"SimTop core execute alu result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core reg_EM clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core reg_EM reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"SimTop core reg_EM stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"SimTop core reg_EM flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+130,"SimTop core reg_EM dataE_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core reg_EM dataE_in\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+134,"SimTop core reg_EM dataE_in\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+136,"SimTop core reg_EM dataE_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+137,"SimTop core reg_EM dataE_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+138,"SimTop core reg_EM dataE_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+139,"SimTop core reg_EM dataE_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+140,"SimTop core reg_EM dataE_in\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+141,"SimTop core reg_EM dataE_in\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+142,"SimTop core reg_EM dataE_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+143,"SimTop core reg_EM dataE_in\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+145,"SimTop core reg_EM dataE_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+146,"SimTop core reg_EM dataE_in\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+147,"SimTop core reg_EM dataE_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core reg_EM dataE_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+151,"SimTop core reg_EM dataE_out\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop core reg_EM dataE_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+154,"SimTop core reg_EM dataE_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+155,"SimTop core reg_EM dataE_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+156,"SimTop core reg_EM dataE_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+157,"SimTop core reg_EM dataE_out\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"SimTop core reg_EM dataE_out\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+159,"SimTop core reg_EM dataE_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+160,"SimTop core reg_EM dataE_out\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+162,"SimTop core reg_EM dataE_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+163,"SimTop core reg_EM dataE_out\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+147,"SimTop core reg_EM last_dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core reg_EM last_dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+151,"SimTop core reg_EM last_dataE\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop core reg_EM last_dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+154,"SimTop core reg_EM last_dataE\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+155,"SimTop core reg_EM last_dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+156,"SimTop core reg_EM last_dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+157,"SimTop core reg_EM last_dataE\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"SimTop core reg_EM last_dataE\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+159,"SimTop core reg_EM last_dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+160,"SimTop core reg_EM last_dataE\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+162,"SimTop core reg_EM last_dataE\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+163,"SimTop core reg_EM last_dataE\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+147,"SimTop core memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+151,"SimTop core memory dataE\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop core memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+154,"SimTop core memory dataE\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+155,"SimTop core memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+156,"SimTop core memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+157,"SimTop core memory dataE\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"SimTop core memory dataE\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+159,"SimTop core memory dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+160,"SimTop core memory dataE\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+162,"SimTop core memory dataE\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+163,"SimTop core memory dataE\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBit(c+32,"SimTop core memory dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"SimTop core memory dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+34,"SimTop core memory dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+25,"SimTop core memory dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+26,"SimTop core memory dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop core memory dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop core memory dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop core memory dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+164,"SimTop core memory dataM\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop core memory dataM\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+168,"SimTop core memory dataM\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+170,"SimTop core memory dataM\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+171,"SimTop core memory dataM\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+172,"SimTop core memory dataM\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+173,"SimTop core memory dataM\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+174,"SimTop core memory dataM\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+175,"SimTop core memory dataM\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+176,"SimTop core memory dataM\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core memory dataM\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core memory dataM\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+180,"SimTop core memory dataM\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+248,"SimTop core memory msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+249,"SimTop core memory strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+250,"SimTop core memory isunsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+251,"SimTop core memory sign_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+252,"SimTop core memory writedata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop core memory readdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core reg_MW clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core reg_MW reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"SimTop core reg_MW stalldata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"SimTop core reg_MW flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+164,"SimTop core reg_MW dataM_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop core reg_MW dataM_in\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+168,"SimTop core reg_MW dataM_in\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+170,"SimTop core reg_MW dataM_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+171,"SimTop core reg_MW dataM_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+172,"SimTop core reg_MW dataM_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+173,"SimTop core reg_MW dataM_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+174,"SimTop core reg_MW dataM_in\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+175,"SimTop core reg_MW dataM_in\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+176,"SimTop core reg_MW dataM_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core reg_MW dataM_in\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core reg_MW dataM_in\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+180,"SimTop core reg_MW dataM_in\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+181,"SimTop core reg_MW dataM_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+183,"SimTop core reg_MW dataM_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core reg_MW dataM_out\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+187,"SimTop core reg_MW dataM_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+188,"SimTop core reg_MW dataM_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+189,"SimTop core reg_MW dataM_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+190,"SimTop core reg_MW dataM_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+191,"SimTop core reg_MW dataM_out\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+192,"SimTop core reg_MW dataM_out\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core reg_MW dataM_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+194,"SimTop core reg_MW dataM_out\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core reg_MW dataM_out\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+197,"SimTop core reg_MW dataM_out\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+181,"SimTop core reg_MW last_dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+183,"SimTop core reg_MW last_dataM\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core reg_MW last_dataM\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+187,"SimTop core reg_MW last_dataM\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+188,"SimTop core reg_MW last_dataM\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+189,"SimTop core reg_MW last_dataM\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+190,"SimTop core reg_MW last_dataM\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+191,"SimTop core reg_MW last_dataM\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+192,"SimTop core reg_MW last_dataM\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core reg_MW last_dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+194,"SimTop core reg_MW last_dataM\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core reg_MW last_dataM\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+197,"SimTop core reg_MW last_dataM\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+181,"SimTop core writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+183,"SimTop core writeback dataM\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+185,"SimTop core writeback dataM\206 csr_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+187,"SimTop core writeback dataM\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+188,"SimTop core writeback dataM\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+189,"SimTop core writeback dataM\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+190,"SimTop core writeback dataM\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+191,"SimTop core writeback dataM\206 ctl\206 csr_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+192,"SimTop core writeback dataM\206 ctl\206 csr_read",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+194,"SimTop core writeback dataM\206 mem_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+196,"SimTop core writeback dataM\206 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+197,"SimTop core writeback dataM\206 csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+198,"SimTop core writeback dataW\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+200,"SimTop core writeback dataW\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+202,"SimTop core writeback dataW\206 csr_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+204,"SimTop core writeback dataW\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+205,"SimTop core writeback dataW\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+206,"SimTop core writeback dataW\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+207,"SimTop core writeback dataW\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+208,"SimTop core writeback dataW\206 ctl\206 csr_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+209,"SimTop core writeback dataW\206 ctl\206 csr_read",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+210,"SimTop core writeback dataW\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+211,"SimTop core writeback dataW\206 mem_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+213,"SimTop core writeback dataW\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+214,"SimTop core writeback dataW\206 csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBit(c+539,"SimTop core csr_regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core csr_regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+256,"SimTop core csr_regfile we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+214,"SimTop core csr_regfile wa",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+202,"SimTop core csr_regfile wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+221,"SimTop core csr_regfile ra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declQuad(c+553,"SimTop core csr_regfile rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1,"SimTop core csr_regfile unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+257,"SimTop core csr_regfile unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+539,"SimTop core regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop core regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+215,"SimTop core regfile ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+216,"SimTop core regfile ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+217,"SimTop core regfile rd1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+219,"SimTop core regfile rd2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+210,"SimTop core regfile wa",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+258,"SimTop core regfile WE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+200,"SimTop core regfile wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+259,"SimTop core regfile regs(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+261,"SimTop core regfile regs(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+263,"SimTop core regfile regs(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+265,"SimTop core regfile regs(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+267,"SimTop core regfile regs(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+269,"SimTop core regfile regs(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+271,"SimTop core regfile regs(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+273,"SimTop core regfile regs(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+275,"SimTop core regfile regs(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+277,"SimTop core regfile regs(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+279,"SimTop core regfile regs(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+281,"SimTop core regfile regs(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+283,"SimTop core regfile regs(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+285,"SimTop core regfile regs(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+287,"SimTop core regfile regs(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+289,"SimTop core regfile regs(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+291,"SimTop core regfile regs(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+293,"SimTop core regfile regs(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+295,"SimTop core regfile regs(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+297,"SimTop core regfile regs(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+299,"SimTop core regfile regs(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+301,"SimTop core regfile regs(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop core regfile regs(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+305,"SimTop core regfile regs(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+307,"SimTop core regfile regs(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+309,"SimTop core regfile regs(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop core regfile regs(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+313,"SimTop core regfile regs(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+315,"SimTop core regfile regs(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+317,"SimTop core regfile regs(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+319,"SimTop core regfile regs(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+321,"SimTop core regfile regs(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+323,"SimTop core regfile regs_nxt(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+325,"SimTop core regfile regs_nxt(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+327,"SimTop core regfile regs_nxt(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+329,"SimTop core regfile regs_nxt(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+331,"SimTop core regfile regs_nxt(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+333,"SimTop core regfile regs_nxt(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop core regfile regs_nxt(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+337,"SimTop core regfile regs_nxt(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+339,"SimTop core regfile regs_nxt(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+341,"SimTop core regfile regs_nxt(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop core regfile regs_nxt(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+345,"SimTop core regfile regs_nxt(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+347,"SimTop core regfile regs_nxt(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+349,"SimTop core regfile regs_nxt(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+351,"SimTop core regfile regs_nxt(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+353,"SimTop core regfile regs_nxt(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+355,"SimTop core regfile regs_nxt(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+357,"SimTop core regfile regs_nxt(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+359,"SimTop core regfile regs_nxt(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+361,"SimTop core regfile regs_nxt(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+363,"SimTop core regfile regs_nxt(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop core regfile regs_nxt(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop core regfile regs_nxt(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+369,"SimTop core regfile regs_nxt(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop core regfile regs_nxt(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+373,"SimTop core regfile regs_nxt(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+375,"SimTop core regfile regs_nxt(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+377,"SimTop core regfile regs_nxt(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+379,"SimTop core regfile regs_nxt(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+381,"SimTop core regfile regs_nxt(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+383,"SimTop core regfile regs_nxt(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+385,"SimTop core regfile regs_nxt(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+555,"SimTop core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+576,"SimTop core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+71,"SimTop core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+198,"SimTop core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+577,"SimTop core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+387,"SimTop core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+578,"SimTop core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+578,"SimTop core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+206,"SimTop core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+388,"SimTop core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+200,"SimTop core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+555,"SimTop core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+389,"SimTop core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+391,"SimTop core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+393,"SimTop core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+395,"SimTop core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+397,"SimTop core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+399,"SimTop core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+401,"SimTop core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+403,"SimTop core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+405,"SimTop core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+407,"SimTop core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+409,"SimTop core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+411,"SimTop core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+413,"SimTop core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+415,"SimTop core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+417,"SimTop core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+419,"SimTop core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+421,"SimTop core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+423,"SimTop core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+425,"SimTop core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+427,"SimTop core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+429,"SimTop core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+431,"SimTop core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+433,"SimTop core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+435,"SimTop core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+437,"SimTop core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+439,"SimTop core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+441,"SimTop core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+443,"SimTop core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+445,"SimTop core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+447,"SimTop core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+449,"SimTop core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+451,"SimTop core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+555,"SimTop core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+578,"SimTop core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+579,"SimTop core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+580,"SimTop core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+539,"SimTop core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+555,"SimTop core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+582,"SimTop core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+556,"SimTop core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+558,"SimTop core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+560,"SimTop core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+562,"SimTop core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+564,"SimTop core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+566,"SimTop core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+568,"SimTop core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+570,"SimTop core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+572,"SimTop core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+574,"SimTop core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+580,"SimTop core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+19,"SimTop icvt ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+20,"SimTop icvt ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop icvt iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"SimTop icvt iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+24,"SimTop icvt iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+36,"SimTop icvt icreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"SimTop icvt icreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+38,"SimTop icvt icreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+39,"SimTop icvt icreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+41,"SimTop icvt icreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+42,"SimTop icvt icreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+44,"SimTop icvt icreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+45,"SimTop icvt icreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+56,"SimTop icvt icresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"SimTop icvt icresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+58,"SimTop icvt icresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+453,"SimTop icvt dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+454,"SimTop icvt dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+455,"SimTop icvt dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+457,"SimTop icvt inst dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+458,"SimTop icvt inst dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+583,"SimTop icvt inst dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+584,"SimTop icvt inst dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+585,"SimTop icvt inst dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+453,"SimTop icvt inst dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+454,"SimTop icvt inst dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+455,"SimTop icvt inst dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+36,"SimTop icvt inst dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"SimTop icvt inst dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+38,"SimTop icvt inst dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+39,"SimTop icvt inst dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+41,"SimTop icvt inst dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+42,"SimTop icvt inst dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+44,"SimTop icvt inst dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+45,"SimTop icvt inst dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+56,"SimTop icvt inst dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"SimTop icvt inst dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+58,"SimTop icvt inst dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+460,"SimTop icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+25,"SimTop dcvt dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+26,"SimTop dcvt dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+28,"SimTop dcvt dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+29,"SimTop dcvt dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+30,"SimTop dcvt dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+32,"SimTop dcvt dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"SimTop dcvt dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+34,"SimTop dcvt dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+46,"SimTop dcvt dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"SimTop dcvt dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+48,"SimTop dcvt dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+49,"SimTop dcvt dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+51,"SimTop dcvt dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+52,"SimTop dcvt dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+54,"SimTop dcvt dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+55,"SimTop dcvt dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+60,"SimTop dcvt dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"SimTop dcvt dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+62,"SimTop dcvt dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+461,"SimTop dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+539,"SimTop mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+462,"SimTop mux ireqs(0)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+463,"SimTop mux ireqs(0)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+464,"SimTop mux ireqs(0)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+465,"SimTop mux ireqs(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+467,"SimTop mux ireqs(0)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+468,"SimTop mux ireqs(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+470,"SimTop mux ireqs(0)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+471,"SimTop mux ireqs(0)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+472,"SimTop mux ireqs(1)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+473,"SimTop mux ireqs(1)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+474,"SimTop mux ireqs(1)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+475,"SimTop mux ireqs(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+477,"SimTop mux ireqs(1)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+478,"SimTop mux ireqs(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+480,"SimTop mux ireqs(1)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+481,"SimTop mux ireqs(1)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+60,"SimTop mux iresps(0)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"SimTop mux iresps(0)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+62,"SimTop mux iresps(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+56,"SimTop mux iresps(1)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"SimTop mux iresps(1)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+58,"SimTop mux iresps(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+2,"SimTop mux oreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"SimTop mux oreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"SimTop mux oreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop mux oreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop mux oreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop mux oreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop mux oreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+11,"SimTop mux oreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop mux oresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"SimTop mux oresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+14,"SimTop mux oresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+482,"SimTop mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+483,"SimTop mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+484,"SimTop mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+485,"SimTop mux saved_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+486,"SimTop mux saved_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+487,"SimTop mux saved_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+488,"SimTop mux saved_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+490,"SimTop mux saved_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+491,"SimTop mux saved_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+493,"SimTop mux saved_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+494,"SimTop mux saved_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+495,"SimTop mux selected_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+496,"SimTop mux selected_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+497,"SimTop mux selected_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+498,"SimTop mux selected_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+500,"SimTop mux selected_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+501,"SimTop mux selected_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+503,"SimTop mux selected_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+504,"SimTop mux selected_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+505,"SimTop mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+506,"SimTop mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+539,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop ram oreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"SimTop ram oreq\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"SimTop ram oreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop ram oreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop ram oreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop ram oreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop ram oreq\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+11,"SimTop ram oreq\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop ram oresp\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"SimTop ram oresp\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+14,"SimTop ram oresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop ram trint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop ram swint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop ram exint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+507,"SimTop ram saved_oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+508,"SimTop ram saved_oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+509,"SimTop ram saved_oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+510,"SimTop ram saved_oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+512,"SimTop ram saved_oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+513,"SimTop ram saved_oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+515,"SimTop ram saved_oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+516,"SimTop ram saved_oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(7, "RAMHelper2.__typeimpenum22", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+517,"SimTop ram state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+518,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+519,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+520,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+522,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+524,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+526,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+528,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+530,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+532,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+534,"SimTop ram mtime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+536,"SimTop ram mtimecmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+538,"SimTop ram msip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+3,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x15U))));
        tracep->fullCData(oldp+4,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                         >> 0x12U))),3);
        tracep->fullQData(oldp+5,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U)))),64);
        tracep->fullCData(oldp+7,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                            >> 0xaU))),8);
        tracep->fullQData(oldp+8,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[1U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[0U])) 
                                                    >> 0xaU)))),64);
        tracep->fullCData(oldp+10,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+11,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
        tracep->fullBit(oldp+12,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+13,((1U & vlSelf->SimTop__DOT__oresp[2U])));
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__oresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__oresp[0U])))),64);
        tracep->fullBit(oldp+16,(vlSelf->SimTop__DOT__trint));
        tracep->fullBit(oldp+17,(vlSelf->SimTop__DOT__swint));
        tracep->fullBit(oldp+18,(vlSelf->SimTop__DOT__exint));
        tracep->fullBit(oldp+19,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+20,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__ireq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+22,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+23,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+24,((IData)(vlSelf->SimTop__DOT__iresp)),32);
        tracep->fullBit(oldp+25,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+26,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+28,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+29,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+30,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+32,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+33,((1U & vlSelf->SimTop__DOT__dresp[2U])));
        tracep->fullQData(oldp+34,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+36,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+37,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+38,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+39,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+41,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+42,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+44,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+45,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
        tracep->fullBit(oldp+46,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+47,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+48,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+49,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+51,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+52,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+54,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+55,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
        tracep->fullBit(oldp+56,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 3U))));
        tracep->fullBit(oldp+57,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 2U))));
        tracep->fullQData(oldp+58,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                     >> 2U)))),64);
        tracep->fullBit(oldp+60,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+61,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
        tracep->fullQData(oldp+62,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT__pc),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__core__DOT__pc_nxt),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__offset),64);
        tracep->fullIData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__raw_instr),32);
        tracep->fullBit(oldp+71,((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                           >> 0xcU)))));
        tracep->fullIData(oldp+72,(((vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+75,((1U & vlSelf->SimTop__DOT__core__DOT__dataF[0U])));
        tracep->fullIData(oldp+76,(((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF_nxt[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+79,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])));
        tracep->fullIData(oldp+80,(((vlSelf->SimTop__DOT__core__DOT__saved_dataF[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+81,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__saved_dataF[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+83,((1U & vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])));
        tracep->fullQData(oldp+84,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xfU])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0xeU])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xdU])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xdU])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+88,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+90,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                                     >> 4U)))),64);
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                                     >> 4U)))),64);
        tracep->fullCData(oldp+94,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                              << 3U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0x1dU)))),7);
        tracep->fullCData(oldp+95,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 0x16U))),7);
        tracep->fullBit(oldp+96,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+97,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+98,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+99,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+100,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+105,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+106,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),12);
        tracep->fullQData(oldp+107,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+109,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+111,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                      >> 4U)))),64);
        tracep->fullCData(oldp+117,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                                 >> 0x1dU)))),7);
        tracep->fullCData(oldp+118,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                              >> 0x16U))),7);
        tracep->fullBit(oldp+119,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+120,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+121,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+122,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+123,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                      >> 0xdU)))),64);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+128,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+129,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])),12);
        tracep->fullQData(oldp+130,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+132,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+134,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                                      >> 4U)))),64);
        tracep->fullCData(oldp+136,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 0x1dU)))),7);
        tracep->fullCData(oldp+137,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                              >> 0x16U))),7);
        tracep->fullBit(oldp+138,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+139,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+140,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+141,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+142,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+145,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+146,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),12);
        tracep->fullQData(oldp+147,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+149,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+151,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                                                      >> 4U)))),64);
        tracep->fullCData(oldp+153,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                 >> 0x1dU)))),7);
        tracep->fullCData(oldp+154,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                              >> 0x16U))),7);
        tracep->fullBit(oldp+155,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+156,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+157,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+158,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+159,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+160,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+162,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+163,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])),12);
        tracep->fullQData(oldp+164,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+166,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                                      >> 4U)))),64);
        tracep->fullCData(oldp+170,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 0x1dU)))),7);
        tracep->fullCData(oldp+171,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                              >> 0x16U))),7);
        tracep->fullBit(oldp+172,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+173,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+174,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+175,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+176,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+177,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+179,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+180,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U])),12);
        tracep->fullQData(oldp+181,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+183,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[6U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+185,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U])) 
                                                      >> 4U)))),64);
        tracep->fullCData(oldp+187,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                                 >> 0x1dU)))),7);
        tracep->fullCData(oldp+188,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                              >> 0x16U))),7);
        tracep->fullBit(oldp+189,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+190,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+191,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+192,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+193,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+194,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+196,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+197,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])),12);
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+200,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                      >> 4U)))),64);
        tracep->fullQData(oldp+202,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                      >> 4U)))),64);
        tracep->fullCData(oldp+204,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                               << 3U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0x1dU)))),7);
        tracep->fullCData(oldp+205,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0x16U))),7);
        tracep->fullBit(oldp+206,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+207,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+208,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+209,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+210,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0xdU))),5);
        tracep->fullQData(oldp+211,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                                      >> 0xdU)))),64);
        tracep->fullBit(oldp+213,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                         >> 0xcU))));
        tracep->fullSData(oldp+214,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataW[0U])),12);
        tracep->fullCData(oldp+215,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0x10U))),5);
        tracep->fullCData(oldp+216,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0x15U))),5);
        tracep->fullQData(oldp+217,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+219,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullSData(oldp+221,(vlSelf->SimTop__DOT__core__DOT__csr_ra),12);
        tracep->fullBit(oldp+222,(vlSelf->SimTop__DOT__core__DOT__stallpc));
        tracep->fullBit(oldp+223,(vlSelf->SimTop__DOT__core__DOT__stalldata));
        tracep->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__bubble));
        tracep->fullBit(oldp+225,(vlSelf->SimTop__DOT__core__DOT__csr_write));
        tracep->fullBit(oldp+226,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                       >> 0xcU)) & 
                                   ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                          >> 0xcU)) 
                                      & ((0x1fU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                >> 0xdU)))) 
                                     | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                            >> 0xcU)) 
                                        & ((0x1fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                  >> 0xdU))))) 
                                    | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                           >> 0xcU)) 
                                       & ((0x1fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))))))));
        tracep->fullBit(oldp+227,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                       >> 0xcU)) & 
                                   ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                          >> 0xcU)) 
                                      & ((0x1fU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x15U)) 
                                         == (0x1fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                >> 0xdU)))) 
                                     | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                            >> 0xcU)) 
                                        & ((0x1fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                             >> 0x15U)) 
                                           == (0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                  >> 0xdU))))) 
                                    | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                           >> 0xcU)) 
                                       & ((0x1fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                            >> 0x15U)) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))))))));
        tracep->fullBit(oldp+228,(vlSelf->SimTop__DOT__core__DOT__hazard_jalr));
        tracep->fullBit(oldp+229,(vlSelf->SimTop__DOT__core__DOT__hazard_csr));
        tracep->fullCData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__op_in),5);
        tracep->fullCData(oldp+231,(vlSelf->SimTop__DOT__core__DOT__op_out),5);
        tracep->fullCData(oldp+232,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0xbU))),7);
        tracep->fullCData(oldp+233,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                              >> 4U))),7);
        tracep->fullBit(oldp+234,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 3U))));
        tracep->fullBit(oldp+235,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 2U))));
        tracep->fullBit(oldp+236,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 1U))));
        tracep->fullBit(oldp+237,((1U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)));
        tracep->fullCData(oldp+238,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 1U))),7);
        tracep->fullCData(oldp+239,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                               << 6U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x1aU)))),7);
        tracep->fullCData(oldp+240,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                           >> 0xdU))),3);
        tracep->fullCData(oldp+241,((0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                               << 5U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x1bU)))),6);
        tracep->fullQData(oldp+242,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result),64);
        tracep->fullQData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
        tracep->fullQData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
        tracep->fullCData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize),3);
        tracep->fullCData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe),8);
        tracep->fullBit(oldp+250,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned));
        tracep->fullBit(oldp+251,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit));
        tracep->fullQData(oldp+252,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata),64);
        tracep->fullQData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata),64);
        tracep->fullBit(oldp+256,((((((((0x32U == (0x7fU 
                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                       << 3U) 
                                                      | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                         >> 0x1dU)))) 
                                        | (0x33U == 
                                           (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                              << 3U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                >> 0x1dU))))) 
                                       | (0x34U == 
                                          (0x7fU & 
                                           ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                             << 3U) 
                                            | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                               >> 0x1dU))))) 
                                      | (0x35U == (0x7fU 
                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                       << 3U) 
                                                      | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                         >> 0x1dU))))) 
                                     | (0x36U == (0x7fU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                      << 3U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                        >> 0x1dU))))) 
                                    | (0x37U == (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                     << 3U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                       >> 0x1dU))))) 
                                   & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                         >> 0xcU)))));
        tracep->fullIData(oldp+257,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+258,(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE));
        tracep->fullQData(oldp+259,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
        tracep->fullQData(oldp+261,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
        tracep->fullQData(oldp+263,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
        tracep->fullQData(oldp+265,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
        tracep->fullQData(oldp+267,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
        tracep->fullQData(oldp+269,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
        tracep->fullQData(oldp+271,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
        tracep->fullQData(oldp+273,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
        tracep->fullQData(oldp+275,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
        tracep->fullQData(oldp+277,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
        tracep->fullQData(oldp+279,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
        tracep->fullQData(oldp+281,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
        tracep->fullQData(oldp+283,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
        tracep->fullQData(oldp+287,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
        tracep->fullQData(oldp+291,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
        tracep->fullQData(oldp+293,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
        tracep->fullQData(oldp+295,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
        tracep->fullQData(oldp+297,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
        tracep->fullQData(oldp+299,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
        tracep->fullQData(oldp+301,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
        tracep->fullQData(oldp+303,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
        tracep->fullQData(oldp+305,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
        tracep->fullQData(oldp+307,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
        tracep->fullQData(oldp+309,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
        tracep->fullQData(oldp+311,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
        tracep->fullQData(oldp+313,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
        tracep->fullQData(oldp+315,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
        tracep->fullQData(oldp+317,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
        tracep->fullQData(oldp+321,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+327,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+331,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+333,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+335,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+337,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+339,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+341,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+343,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+345,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+347,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+349,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+351,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+353,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+355,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+357,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+359,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+361,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+363,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+365,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+367,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+369,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+371,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+373,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+375,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+377,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+379,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+381,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+385,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+387,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                          >> 0x14U) 
                                         & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[1U] 
                                               >> 0xcU))))));
        tracep->fullCData(oldp+388,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0xdU))),8);
        tracep->fullQData(oldp+389,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+391,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+393,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+395,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+397,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+399,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+401,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+403,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+405,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+407,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+409,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+411,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+413,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+415,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+417,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+419,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+421,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+423,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+425,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+427,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+429,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+431,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+433,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+435,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+437,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+439,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+441,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+443,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+445,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+447,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+449,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+451,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+453,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+454,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+455,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+457,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+458,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ireq[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+460,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 3U) & 
                                         (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 2U)))));
        tracep->fullBit(oldp+461,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                          >> 1U) & 
                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
        tracep->fullBit(oldp+462,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+463,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+464,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+465,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+467,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+468,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+470,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+471,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+472,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+473,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+474,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+475,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+477,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+478,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+480,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+481,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+482,(vlSelf->SimTop__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+483,(vlSelf->SimTop__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+484,(vlSelf->SimTop__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+485,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+486,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+487,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+488,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+490,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+491,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+493,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+494,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+495,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+496,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+497,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+498,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+500,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+501,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+503,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+504,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+505,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+506,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+507,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+508,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+509,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+510,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+512,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+513,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+515,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+516,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+517,(vlSelf->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+518,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+519,(vlSelf->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+520,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+522,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+524,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+526,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+528,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+530,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+532,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+534,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
        tracep->fullQData(oldp+536,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
        tracep->fullBit(oldp+538,(vlSelf->SimTop__DOT__ram__DOT__msip));
        tracep->fullBit(oldp+539,(vlSelf->clock));
        tracep->fullBit(oldp+540,(vlSelf->reset));
        tracep->fullQData(oldp+541,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+543,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+545,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+547,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+548,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+549,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+550,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+551,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+552,(vlSelf->io_uart_in_ch),8);
        tracep->fullQData(oldp+553,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                    [vlSelf->SimTop__DOT__core__DOT__csr_ra]),64);
        tracep->fullCData(oldp+555,((0xffU & (IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                                     [0xf14U]))),8);
        tracep->fullQData(oldp+556,((0x7e79bbULL & 
                                     vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x300U])),64);
        tracep->fullQData(oldp+558,((0x800000030001e000ULL 
                                     & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x100U])),64);
        tracep->fullQData(oldp+560,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x341U]),64);
        tracep->fullQData(oldp+562,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x343U]),64);
        tracep->fullQData(oldp+564,((0xfffffffffffffffdULL 
                                     & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x305U])),64);
        tracep->fullQData(oldp+566,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x342U]),64);
        tracep->fullQData(oldp+568,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x180U]),64);
        tracep->fullQData(oldp+570,((0x333ULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                     [0x344U])),64);
        tracep->fullQData(oldp+572,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x304U]),64);
        tracep->fullQData(oldp+574,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x340U]),64);
        tracep->fullCData(oldp+576,(0U),8);
        tracep->fullIData(oldp+577,(0U),32);
        tracep->fullBit(oldp+578,(0U));
        tracep->fullCData(oldp+579,(0U),3);
        tracep->fullQData(oldp+580,(0ULL),64);
        tracep->fullCData(oldp+582,(3U),2);
        tracep->fullCData(oldp+583,(2U),3);
        tracep->fullCData(oldp+584,(0U),8);
        tracep->fullQData(oldp+585,(0ULL),64);
    }
}
