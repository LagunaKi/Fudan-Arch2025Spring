// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

void VSimTop___024root___initial__TOP__1(VSimTop___024root* vlSelf) VL_ATTR_COLD;

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___settle__TOP__5(VSimTop___024root* vlSelf) VL_ATTR_COLD;

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__oreq);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__oresp);
    vlSelf->SimTop__DOT__trint = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__swint = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__exint = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT__ireq);
    vlSelf->SimTop__DOT__iresp = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(140, vlSelf->SimTop__DOT__dreq);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__dresp);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__icreq);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__dcreq);
    VL_RAND_RESET_W(132, vlSelf->SimTop__DOT____Vcellout__mux__iresps);
    VL_RAND_RESET_W(302, vlSelf->SimTop__DOT____Vcellinp__mux__ireqs);
    vlSelf->SimTop__DOT__core__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__pc_nxt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__offset = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__raw_instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(97, vlSelf->SimTop__DOT__core__DOT__dataF);
    VL_RAND_RESET_W(97, vlSelf->SimTop__DOT__core__DOT__dataF_nxt);
    VL_RAND_RESET_W(97, vlSelf->SimTop__DOT__core__DOT__saved_dataF);
    VL_RAND_RESET_W(715, vlSelf->SimTop__DOT__core__DOT__dataD);
    VL_RAND_RESET_W(715, vlSelf->SimTop__DOT__core__DOT__dataD_nxt);
    VL_RAND_RESET_W(523, vlSelf->SimTop__DOT__core__DOT__dataE);
    VL_RAND_RESET_W(523, vlSelf->SimTop__DOT__core__DOT__dataE_nxt);
    VL_RAND_RESET_W(523, vlSelf->SimTop__DOT__core__DOT__dataM);
    VL_RAND_RESET_W(523, vlSelf->SimTop__DOT__core__DOT__dataM_nxt);
    VL_RAND_RESET_W(523, vlSelf->SimTop__DOT__core__DOT__dataW);
    vlSelf->SimTop__DOT__core__DOT__csr_ra = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__core__DOT__stallpc = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__stalldata = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__bubble = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__hazard_jalr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__hazard_csr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__op_in = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__core__DOT__op_out = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__core__DOT__csr_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__core__DOT__csr_state_next = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(249, vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl);
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs);
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__icvt__DOT__dresp);
    vlSelf->SimTop__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand2);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand1);
    vlSelf->SimTop__DOT__mux__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mux__DOT__index = 0;
    vlSelf->SimTop__DOT__mux__DOT__select = 0;
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT__saved_req);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT__selected_req);
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__mux__DOT____Vlvbound4);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__ram__DOT__saved_oreq);
    vlSelf->SimTop__DOT__ram__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__ram__DOT__count_down = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__ram__DOT__size = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__ram__DOT__addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__idx = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__wrap1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__wrap2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__cyc_cnt = 0;
    vlSelf->SimTop__DOT__ram__DOT__ms_cnt = 0;
    vlSelf->SimTop__DOT__ram__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__msip = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_get_switch__9__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__10__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
