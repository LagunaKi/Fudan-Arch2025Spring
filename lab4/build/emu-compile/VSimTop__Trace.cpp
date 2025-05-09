// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+3,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+4,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[2U])) 
                                        >> 0x12U)))),64);
            tracep->chgCData(oldp+6,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                               >> 0xaU))),8);
            tracep->chgQData(oldp+7,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[2U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[1U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[0U])) 
                                        >> 0xaU)))),64);
            tracep->chgCData(oldp+9,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U))),8);
            tracep->chgCData(oldp+10,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+11,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+12,((1U & vlSelf->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+15,(vlSelf->SimTop__DOT__trint));
            tracep->chgBit(oldp+16,(vlSelf->SimTop__DOT__swint));
            tracep->chgBit(oldp+17,(vlSelf->SimTop__DOT__exint));
            tracep->chgBit(oldp+18,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+19,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__ireq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+21,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+22,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+23,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+24,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+25,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+27,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+28,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+29,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+31,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+32,((1U & vlSelf->SimTop__DOT__dresp[2U])));
            tracep->chgQData(oldp+33,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+35,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+36,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+37,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+38,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+40,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+41,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+43,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+44,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+45,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+46,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+47,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+48,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+50,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+51,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+53,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+54,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
            tracep->chgBit(oldp+55,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+56,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+57,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+59,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+60,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+61,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT__pc_nxt),64);
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__offset),64);
            tracep->chgIData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__raw_instr),32);
            tracep->chgBit(oldp+70,((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                              >> 0xcU)))));
            tracep->chgIData(oldp+71,(((vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+72,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+74,((1U & vlSelf->SimTop__DOT__core__DOT__dataF[0U])));
            tracep->chgIData(oldp+75,(((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF_nxt[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+78,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U])));
            tracep->chgIData(oldp+79,(((vlSelf->SimTop__DOT__core__DOT__saved_dataF[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+80,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__saved_dataF[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+82,((1U & vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U])));
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0xdU])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+85,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xdU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                           >> 4U)))),64);
            tracep->chgCData(oldp+93,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                 << 3U) 
                                                | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                   >> 0x1dU)))),7);
            tracep->chgCData(oldp+94,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0x16U))),7);
            tracep->chgBit(oldp+95,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+97,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+98,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0x12U))));
            tracep->chgCData(oldp+99,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0xdU))),5);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+104,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+105,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),12);
            tracep->chgQData(oldp+106,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+108,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                              >> 4U)))),64);
            tracep->chgCData(oldp+116,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                                    >> 0x1dU)))),7);
            tracep->chgCData(oldp+117,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                                 >> 0x16U))),7);
            tracep->chgBit(oldp+118,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+120,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+122,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+123,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[3U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                              >> 0xdU)))),64);
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+127,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+128,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])),12);
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[9U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+131,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                              >> 4U)))),64);
            tracep->chgCData(oldp+135,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                    >> 0x1dU)))),7);
            tracep->chgCData(oldp+136,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 0x16U))),7);
            tracep->chgBit(oldp+137,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+138,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+141,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+144,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+145,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),12);
            tracep->chgQData(oldp+146,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+148,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+150,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                                              >> 4U)))),64);
            tracep->chgCData(oldp+152,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                    >> 0x1dU)))),7);
            tracep->chgCData(oldp+153,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                 >> 0x16U))),7);
            tracep->chgBit(oldp+154,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+156,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+158,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+159,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+161,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+162,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])),12);
            tracep->chgQData(oldp+163,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[9U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+165,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[7U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                              >> 4U)))),64);
            tracep->chgCData(oldp+169,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                    >> 0x1dU)))),7);
            tracep->chgCData(oldp+170,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 0x16U))),7);
            tracep->chgBit(oldp+171,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+172,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+175,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+176,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+178,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+179,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U])),12);
            tracep->chgQData(oldp+180,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+182,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[6U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+184,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U])) 
                                              >> 4U)))),64);
            tracep->chgCData(oldp+186,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                                    >> 0x1dU)))),7);
            tracep->chgCData(oldp+187,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                                 >> 0x16U))),7);
            tracep->chgBit(oldp+188,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+191,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+192,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+193,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+195,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+196,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])),12);
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[9U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+199,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                              >> 4U)))),64);
            tracep->chgQData(oldp+201,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                              >> 4U)))),64);
            tracep->chgCData(oldp+203,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                  << 3U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                    >> 0x1dU)))),7);
            tracep->chgCData(oldp+204,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0x16U))),7);
            tracep->chgBit(oldp+205,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+206,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+207,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+208,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+209,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))),5);
            tracep->chgQData(oldp+210,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                              >> 0xdU)))),64);
            tracep->chgBit(oldp+212,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                            >> 0xcU))));
            tracep->chgSData(oldp+213,((0xfffU & vlSelf->SimTop__DOT__core__DOT__dataW[0U])),12);
            tracep->chgCData(oldp+214,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+215,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0x15U))),5);
            tracep->chgQData(oldp+216,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+218,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgSData(oldp+220,(vlSelf->SimTop__DOT__core__DOT__csr_ra),12);
            tracep->chgBit(oldp+221,(vlSelf->SimTop__DOT__core__DOT__stallpc));
            tracep->chgBit(oldp+222,(vlSelf->SimTop__DOT__core__DOT__stalldata));
            tracep->chgBit(oldp+223,(vlSelf->SimTop__DOT__core__DOT__bubble));
            tracep->chgBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__csr_write));
            tracep->chgBit(oldp+225,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                          >> 0xcU)) 
                                      & ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                               >> 0xcU)) 
                                           & ((0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                     >> 0xdU)))) 
                                          | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                 >> 0xcU)) 
                                             & ((0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x10U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                    >> 0xdU))))) 
                                         | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                >> 0xcU)) 
                                            & ((0x1fU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x10U)) 
                                               == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+226,(((~ (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                          >> 0xcU)) 
                                      & ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                               >> 0xcU)) 
                                           & ((0x1fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                  >> 0x15U)) 
                                              == (0x1fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                     >> 0xdU)))) 
                                          | ((~ (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                 >> 0xcU)) 
                                             & ((0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x15U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                    >> 0xdU))))) 
                                         | ((~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                >> 0xcU)) 
                                            & ((0x1fU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x15U)) 
                                               == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+227,(vlSelf->SimTop__DOT__core__DOT__hazard_jalr));
            tracep->chgBit(oldp+228,(vlSelf->SimTop__DOT__core__DOT__hazard_csr));
            tracep->chgCData(oldp+229,(vlSelf->SimTop__DOT__core__DOT__op_in),5);
            tracep->chgCData(oldp+230,(vlSelf->SimTop__DOT__core__DOT__op_out),5);
            tracep->chgCData(oldp+231,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0xbU))),7);
            tracep->chgCData(oldp+232,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 4U))),7);
            tracep->chgBit(oldp+233,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 3U))));
            tracep->chgBit(oldp+234,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 2U))));
            tracep->chgBit(oldp+235,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 1U))));
            tracep->chgBit(oldp+236,((1U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)));
            tracep->chgCData(oldp+237,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 1U))),7);
            tracep->chgCData(oldp+238,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1aU)))),7);
            tracep->chgCData(oldp+239,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0xdU))),3);
            tracep->chgCData(oldp+240,((0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1bU)))),6);
            tracep->chgQData(oldp+241,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result),64);
            tracep->chgQData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
            tracep->chgQData(oldp+245,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
            tracep->chgCData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize),3);
            tracep->chgCData(oldp+248,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe),8);
            tracep->chgBit(oldp+249,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned));
            tracep->chgBit(oldp+250,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit));
            tracep->chgQData(oldp+251,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata),64);
            tracep->chgQData(oldp+253,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata),64);
            tracep->chgBit(oldp+255,((((((((0x32U == 
                                            (0x7fU 
                                             & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                 << 3U) 
                                                | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                   >> 0x1dU)))) 
                                           | (0x33U 
                                              == (0x7fU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                      << 3U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                        >> 0x1dU))))) 
                                          | (0x34U 
                                             == (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                     << 3U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                       >> 0x1dU))))) 
                                         | (0x35U == 
                                            (0x7fU 
                                             & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                 << 3U) 
                                                | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                   >> 0x1dU))))) 
                                        | (0x36U == 
                                           (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                              << 3U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                >> 0x1dU))))) 
                                       | (0x37U == 
                                          (0x7fU & 
                                           ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                             << 3U) 
                                            | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                               >> 0x1dU))))) 
                                      & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                            >> 0xcU)))));
            tracep->chgIData(oldp+256,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+257,(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE));
            tracep->chgQData(oldp+258,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+260,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+262,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+264,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+266,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+270,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+272,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+274,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+276,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+278,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+286,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+290,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+296,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+298,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+302,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+306,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+320,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+332,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+334,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+336,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+340,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+346,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+350,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+352,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+354,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+356,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+358,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+360,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+362,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+364,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+366,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+368,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+370,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+372,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+374,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+376,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+378,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+380,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+382,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+384,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+386,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                             >> 0x14U) 
                                            & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[1U] 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+387,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xdU))),8);
            tracep->chgQData(oldp+388,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+390,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+392,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+394,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+396,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+398,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+400,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+402,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+404,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+406,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+408,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+410,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+412,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+414,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+416,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+418,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+420,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+422,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+424,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+426,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+428,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+430,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+432,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+434,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+436,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+438,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+440,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+442,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+444,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+446,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+448,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+450,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+452,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+453,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+454,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+456,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+457,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ireq[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+459,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+460,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                             >> 1U) 
                                            & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+463,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+464,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+466,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+467,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+469,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+470,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+471,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+473,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+474,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+476,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+477,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+479,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+480,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+481,(vlSelf->SimTop__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+482,(vlSelf->SimTop__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+483,(vlSelf->SimTop__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+484,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+485,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+486,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+487,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+489,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+490,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+492,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+493,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+494,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+495,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+496,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+497,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+499,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+500,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+502,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+503,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+504,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+505,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+506,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+508,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+509,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+511,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+512,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+514,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+515,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+516,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+517,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+518,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+519,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+521,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+523,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+525,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+527,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+529,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+531,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+533,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
            tracep->chgQData(oldp+535,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
            tracep->chgBit(oldp+537,(vlSelf->SimTop__DOT__ram__DOT__msip));
        }
        tracep->chgBit(oldp+538,(vlSelf->clock));
        tracep->chgBit(oldp+539,(vlSelf->reset));
        tracep->chgQData(oldp+540,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+542,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+544,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+546,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+547,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+548,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+549,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+550,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+551,(vlSelf->io_uart_in_ch),8);
        tracep->chgQData(oldp+552,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                   [vlSelf->SimTop__DOT__core__DOT__csr_ra]),64);
        tracep->chgCData(oldp+554,((0xffU & (IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                                    [0xf14U]))),8);
        tracep->chgQData(oldp+555,((0x7e79bbULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x300U])),64);
        tracep->chgQData(oldp+557,((0x800000030001e000ULL 
                                    & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x100U])),64);
        tracep->chgQData(oldp+559,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x341U]),64);
        tracep->chgQData(oldp+561,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x343U]),64);
        tracep->chgQData(oldp+563,((0xfffffffffffffffdULL 
                                    & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x305U])),64);
        tracep->chgQData(oldp+565,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x342U]),64);
        tracep->chgQData(oldp+567,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x180U]),64);
        tracep->chgQData(oldp+569,((0x333ULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                    [0x344U])),64);
        tracep->chgQData(oldp+571,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x304U]),64);
        tracep->chgQData(oldp+573,(vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt
                                   [0x340U]),64);
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
