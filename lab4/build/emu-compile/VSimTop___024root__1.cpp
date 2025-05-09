// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<9>/*287:0*/ VSimTop__ConstPool__CONST_10624e40_0;
void VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(IData/*31:0*/ &get_switch__Vfuncrtn);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);
extern const VlWide<9>/*287:0*/ VSimTop__ConstPool__CONST_4d051b67_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__4\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp98;
    // Body
    vlSelf->SimTop__DOT__core__DOT__dataE[7U] = ((0xfU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataE[8U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x1cU) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataE[9U] = ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                                 >> 0xdU))) 
                                                          >> 0x20U)) 
                                                 >> 0x1cU);
    vlSelf->SimTop__DOT__core__DOT__dataE[0U] = ((0xffffe000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U]) 
                                                 | (0x1fffU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U]));
    vlSelf->SimTop__DOT__core__DOT__dataE[1U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[3U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[3U]));
    vlSelf->SimTop__DOT__core__DOT__dataE[2U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U]));
    vlSelf->SimTop__DOT__core__DOT__dataE[3U] = ((0xfffffff0U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[3U]) 
                                                 | (0xfU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U]));
    if ((8U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) {
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b = 0ULL;
    } else {
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
            = ((4U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                ? ((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                    ? ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                        ? 0ULL : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                   >> 0x1fU) ? ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                        >> 4U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                        >> 4U)))))
                                   : ((0x40000000U 
                                       & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                       ? ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                    >> 4U)))
                                           : (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                    >> 4U))))
                                       : ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                    >> 0xdU)))
                                           : (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                    >> 0xdU)))))))
                    : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                        ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                            >> 0x1fU) ? ((0x40000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[2U])) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[1U])) 
                                                     << 0x13U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0U])) 
                                                       >> 0xdU)))
                                              : (QData)((IData)(
                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU] 
                                                                  << 0x1cU) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU] 
                                                                    >> 4U)))))
                                          : ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (QData)((IData)(
                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU] 
                                                                  << 0x1cU) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU] 
                                                                    >> 4U))))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                       >> 4U)))))
                            : ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                ? ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                    ? (QData)((IData)(
                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU] 
                                                        << 0x1cU) 
                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU] 
                                                          >> 4U))))
                                    : (QData)((IData)(
                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU] 
                                                        << 0x1cU) 
                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU] 
                                                          >> 4U)))))
                                : ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                           >> 4U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                           >> 4U))))))
                        : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                            >> 0x1fU) ? ((0x40000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                       >> 4U)))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                       >> 4U))))
                                          : ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                       >> 4U)))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                       >> 4U)))))
                            : ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                ? ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                           >> 4U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                           >> 4U))))
                                : ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                           >> 4U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                           >> 4U))))))))
                : ((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                    ? ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                        ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                            >> 0x1fU) ? ((0x40000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                       >> 4U)))
                                              : 0ULL)
                                          : 0ULL) : 
                           ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                             ? 0ULL : ((0x20000000U 
                                        & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                        >> 4U))))))
                        : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                            >> 0x1fU) ? ((0x40000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                       >> 4U)))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                       >> 4U))))
                                          : ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                       >> 4U)))
                                              : 0ULL))
                            : 0ULL)) : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                         ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                             >> 0x1fU)
                                             ? ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                        >> 4U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))))
                                             : ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U))))))
                                         : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                             >> 0x1fU)
                                             ? ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))))
                                             : ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                        >> 4U)))
                                                  : 0ULL))))));
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b 
            = ((4U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                ? ((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                    ? ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                        ? 0ULL : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                   >> 0x1fU) ? ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                         >> 4U))))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                        >> 4U))))
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                        >> 4U)))
                                                  : 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                         >> 4U))))))
                                   : ((0x40000000U 
                                       & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                       ? ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xfU])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xeU])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                    >> 4U)))
                                           : (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                    >> 4U))))
                                       : 4ULL))) : 
                   ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                     ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                         >> 0x1fU) ? ((0x40000000U 
                                       & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                       ? ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                    >> 4U)))
                                           : (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                                 >> 4U)))))
                                       : ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                                 >> 4U))))
                                           : (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                                 >> 4U))))))
                         : ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                             ? ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                     >> 4U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                     >> 4U))))
                             : ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                     >> 4U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                     >> 4U))))))
                     : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                         >> 0x1fU) ? ((0x40000000U 
                                       & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                       ? ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU] 
                                                                 >> 4U))))
                                           : (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    >> 4U))))
                                       : ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    >> 4U)))
                                           : (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    >> 4U)))))
                         : ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                             ? ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                     >> 4U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                     >> 4U))))
                             : ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                     >> 4U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                     >> 4U))))))))
                : ((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                    ? ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                        ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                            >> 0x1fU) ? ((0x40000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? ((0x20000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                       >> 4U)))
                                              : 0ULL)
                                          : 0ULL) : 0ULL)
                        : 0ULL) : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                    ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                        >> 0x1fU) ? 
                                       ((0x40000000U 
                                         & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                         ? 0ULL : (
                                                   (0x20000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                          >> 4U)))))
                                        : ((0x40000000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                            ? ((0x20000000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                         >> 4U)))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                         >> 4U))))
                                            : ((0x20000000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                         >> 4U)))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                         >> 4U))))))
                                    : ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                        >> 0x1fU) ? 
                                       ((0x40000000U 
                                         & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                         ? ((0x20000000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                      >> 4U)))
                                             : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                      >> 4U))))
                                         : ((0x20000000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xdU])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xcU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                      >> 4U)))
                                             : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                      >> 4U)))))
                                        : ((0x40000000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                            ? ((0x20000000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                         >> 4U)))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                         >> 4U))))
                                            : ((0x20000000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xbU])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataD_nxt[0xaU])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataD_nxt[9U])) 
                                                         >> 4U)))
                                                : 0ULL))))));
    }
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = ((0xffffefffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 | (0x1000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[0U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[1U] = ((VSimTop__ConstPool__CONST_10624e40_0[0U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[1U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[2U] = ((VSimTop__ConstPool__CONST_10624e40_0[1U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[2U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[3U] = ((VSimTop__ConstPool__CONST_10624e40_0[2U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[3U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[4U] = ((VSimTop__ConstPool__CONST_10624e40_0[3U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[4U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[5U] = ((VSimTop__ConstPool__CONST_10624e40_0[4U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[5U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[6U] = ((VSimTop__ConstPool__CONST_10624e40_0[5U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[6U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[7U] = ((VSimTop__ConstPool__CONST_10624e40_0[6U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[7U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[8U] = ((VSimTop__ConstPool__CONST_10624e40_0[7U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[8U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[9U] = (0xfU 
                                                 & (VSimTop__ConstPool__CONST_10624e40_0[8U] 
                                                    >> 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = (0xfffff000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataW[0U]);
    vlSelf->SimTop__DOT__core__DOT__dataW[2U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[2U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[3U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[3U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[4U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[4U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[5U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[5U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[6U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[6U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[6U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[7U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[7U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[8U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[8U]) 
                                                 | (0xffffe000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[8U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[9U] = (0xfU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[9U]);
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = ((0xfffff000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 | (0xfffU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[1U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x13U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataW[2U] = ((0xffffe000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[2U]) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataM_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataM_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    >> 0x13U));
    vlSelf->SimTop__DOT__core__DOT__saved_dataF[0U] 
        = vlSelf->SimTop__DOT__core__DOT__dataF[0U];
    vlSelf->SimTop__DOT__core__DOT__saved_dataF[1U] 
        = vlSelf->SimTop__DOT__core__DOT__dataF[1U];
    vlSelf->SimTop__DOT__core__DOT__saved_dataF[2U] 
        = vlSelf->SimTop__DOT__core__DOT__dataF[2U];
    vlSelf->SimTop__DOT__core__DOT__saved_dataF[3U] 
        = vlSelf->SimTop__DOT__core__DOT__dataF[3U];
    vlSelf->SimTop__DOT__core__DOT__dataD[0U] = ((0xfffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U] 
                                                    << 0xcU));
    vlSelf->SimTop__DOT__core__DOT__dataD[1U] = ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[0U] 
                                                  >> 0x14U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[1U] 
                                                    << 0xcU));
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = ((0xffffe000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                                                 | ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[1U] 
                                                     >> 0x14U) 
                                                    | (0x1000U 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                          << 0xcU))));
    vlSelf->SimTop__DOT__core__DOT__dataD[7U] = ((0xfU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[7U]) 
                                                 | ((IData)((QData)((IData)(
                                                                            (0x3fU 
                                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[8U] = (((IData)((QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                              >> 0x15U))))) 
                                                  >> 0x1cU) 
                                                 | ((IData)(
                                                            ((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                             >> 0x20U)) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[9U] = ((0xfffffff0U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[9U]) 
                                                 | ((IData)(
                                                            ((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                             >> 0x20U)) 
                                                    >> 0x1cU));
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 
        = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0xfU))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                       >> 0x14U))])));
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
        = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0xaU))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                       >> 0xfU))])));
    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0U;
    if ((0x80U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
        if ((0x40U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
            if ((0x20U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                  >> 3U)))) {
                        if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                    if ((0x4000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                        if ((0x2000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                = (0x1b838U 
                                                   | (3U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                = (
                                                   (0x3fffcU 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                   | (1U 
                                                      | ((0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                              >> 0x10U))) 
                                                         << 1U)));
                                        } else {
                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                = (0x1b048U 
                                                   | (3U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                = (
                                                   (0x3fffcU 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                   | (1U 
                                                      | ((0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                              >> 0x10U))) 
                                                         << 1U)));
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = (0x1a800U 
                                               | (0x7ffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = ((0x3f807U 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                               | (0x60U 
                                                  | ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                          >> 8U))) 
                                                     << 3U)));
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = (3U | 
                                               (0x3fff8U 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                    }
                                } else if ((0x4000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                    if ((0x2000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = (0x1a038U 
                                               | (3U 
                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = ((0x3fffcU 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                               | (1U 
                                                  | ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                          >> 0x10U))) 
                                                     << 1U)));
                                    } else {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = (0x19848U 
                                               | (3U 
                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            = ((0x3fffcU 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                               | (1U 
                                                  | ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                          >> 0x10U))) 
                                                     << 1U)));
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x19000U 
                                           | (0x7ffU 
                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = ((0x3f807U 
                                            & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           | (0x60U 
                                              | ((0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                      >> 8U))) 
                                                 << 3U)));
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (3U | (0x3fff8U 
                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x18818U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    }
                }
            } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((0U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                          >> 0xdU)))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x18018U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    }
                }
            } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                    ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                        ? 0x3c1cU : 0x3a1cU)
                                    : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                        ? 0x381cU : 0x361cU)) 
                                  << 2U));
                    } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                         >> 0xeU)))) {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                    ? 0x321cU : 0x341cU) 
                                  << 2U));
                    }
                }
            }
        }
    } else if ((0x40U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
        if ((0x20U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
            if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                              >> 3U)))) {
                    if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            if ((0U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                              >> 0xdU)))) {
                                if ((0U == (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x5818U 
                                           | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                 << 6U) 
                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x6028U 
                                           | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                }
                                if ((1U & (~ VL_ONEHOT0_I(
                                                          (((0x20U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                  << 6U) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                    >> 0x1aU)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                   << 6U) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                     >> 0x1aU))))))))) {
                                    if (VL_UNLIKELY(
                                                    vlSymsp->_vm_contextp__->assertOn())) {
                                        VL_WRITEF("[%0t] %%Error: decoder.sv:247: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                                  64,
                                                  VL_TIME_UNITED_Q(1),
                                                  -12,
                                                  vlSymsp->name());
                                        VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 247, "");
                                    }
                                }
                            } else if ((1U == (7U & 
                                               (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0xdU)))) {
                                if ((0U == (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x160a8U 
                                           | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                }
                            } else if ((5U == (7U & 
                                               (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0xdU)))) {
                                if ((1U & (~ VL_ONEHOT0_I(
                                                          (((0x20U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                  << 6U) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                    >> 0x1aU)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                   << 6U) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                     >> 0x1aU))))))))) {
                                    if (VL_UNLIKELY(
                                                    vlSymsp->_vm_contextp__->assertOn())) {
                                        VL_WRITEF("[%0t] %%Error: decoder.sv:277: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                                  64,
                                                  VL_TIME_UNITED_Q(1),
                                                  -12,
                                                  vlSymsp->name());
                                        VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 277, "");
                                    }
                                }
                                if ((0U == (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x168d8U 
                                           | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                 << 6U) 
                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                   >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x170e8U 
                                           | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                }
                            }
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                             >> 0xdU))) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                >> 0xdU))) 
                                                           << 1U) 
                                                          | (0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                 >> 0xdU))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: decoder.sv:245: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 245, "");
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = (0xc068U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                    }
                }
            } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                                if ((0U == (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                        = (0x3838U 
                                           | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                                }
                            } else if ((0U == (0x7fU 
                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                   << 6U) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                     >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x4048U | (3U 
                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                              << 6U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                >> 0x1aU)))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                               << 6U) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                 >> 0x1aU))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: decoder.sv:180: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 180, "");
                                }
                            }
                            if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x138b8U | (3U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            } else if ((0x20U == (0x7fU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                      << 6U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                        >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x140c8U | (3U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((0U == (0x7fU & 
                                           ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                             << 6U) 
                                            | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                               >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x4858U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x13098U | (3U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((0U == (0x7fU & 
                                           ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                             << 6U) 
                                            | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                               >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x12888U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x120a8U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else {
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                          << 6U) 
                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                            >> 0x1aU)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                           << 6U) 
                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                             >> 0x1aU))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: decoder.sv:91: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 91, "");
                            }
                        }
                        if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x2818U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        } else if ((0x20U == (0x7fU 
                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x3028U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                          >> 3U)))) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                      >> 0xfU)))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                   | (((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                        ? ((0x2000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                            ? 0x1c19U
                                            : 0x2e19U)
                                        : ((0x2000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                            ? 0x2c19U
                                            : 0x2a19U)) 
                                      << 2U));
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
        if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                          >> 3U)))) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((0U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                          >> 0xdU)))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x5018U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        } else if ((1U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0xdU)))) {
                            if ((0U == (0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1bU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x148a8U | (3U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((5U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                 >> 0xdU)))) {
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                              << 5U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                >> 0x1bU)))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                               << 5U) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                 >> 0x1bU))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: decoder.sv:223: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 223, "");
                                }
                            }
                            if ((0U == (0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1bU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x150d8U | (3U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            } else if ((0x10U == (0x3fU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                      << 5U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                        >> 0x1bU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x158e8U | (3U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            }
                        }
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                         >> 0xdU))) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                            >> 0xdU))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                             >> 0xdU))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: decoder.sv:202: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 202, "");
                            }
                        }
                    }
                }
            }
        } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
            if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                        = (0x17818U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                }
            }
        } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
            if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                    ? 0x80eU : 0x612U) 
                                  << 2U));
                    } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((0x10U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                          << 5U) 
                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                            >> 0x1bU)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                           << 5U) 
                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                             >> 0x1bU))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: decoder.sv:66: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/decode/decoder.sv", 66, "");
                            }
                        }
                        if ((0U == (0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                              << 5U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                >> 0x1bU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x110b8U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        } else if ((0x10U == (0x3fU 
                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                    >> 0x1bU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = (0x118c8U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = (0x1058U | (3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                    }
                } else {
                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                        = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                           | (((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                    ? 0x4026U : 0x3e22U)
                                : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                    ? 0x422aU : 0x206U)) 
                              << 2U));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                         >> 4U)))) {
        if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                      >> 3U)))) {
            if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                        if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])) {
                            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                          >> 0xdU)))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xa07cU | (3U 
                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                   | (((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                        ? 0x261fU : 0x241fU) 
                                      << 2U));
                        }
                    } else {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = ((3U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                    ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                        ? 0x1a1fU : 0x221fU)
                                    : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U])
                                        ? 0x201fU : 0x1e1fU)) 
                                  << 2U));
                    }
                }
            }
        }
    }
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlSelf->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlSelf->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlSelf->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
    vlSelf->SimTop__DOT__icreq[0U] = 0U;
    vlSelf->SimTop__DOT__icreq[1U] = 0U;
    vlSelf->SimTop__DOT__icreq[2U] = ((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ireq[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[0U])))) 
                                      << 0x12U);
    vlSelf->SimTop__DOT__icreq[3U] = (((IData)((((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ireq[0U])))) 
                                       >> 0xeU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__ireq[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__ireq[0U]))) 
                                                            >> 0x20U)) 
                                                   << 0x12U));
    vlSelf->SimTop__DOT__icreq[4U] = (0x80000U | ((0x400000U 
                                                   & (vlSelf->SimTop__DOT__ireq[2U] 
                                                      << 0x16U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__ireq[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__ireq[0U]))) 
                                                              >> 0x20U)) 
                                                     >> 0xeU)));
    vlSelf->SimTop__DOT__core__DOT__dataM[0U] = ((0xffffe000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                 | (0x1fffU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned 
        = (1U & ((~ (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U] 
                     >> 3U)) & ((~ (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U] 
                                    >> 2U)) & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U] 
                                                >> 1U) 
                                               & ((~ 
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]) 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     ((~ 
                                                       (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                        >> 0x1eU)) 
                                                      & (~ 
                                                         (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                          >> 0x1dU)))
                                                      : 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                                      >> 0x1eU)))))));
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize 
        = ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])
            ? 3U : ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])
                     ? 3U : ((2U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])
                              ? ((1U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])
                                  ? 3U : ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                           >> 0x1fU)
                                           ? ((0x40000000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                               ? ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                                   ? 2U
                                                   : 1U)
                                               : ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                                   ? 0U
                                                   : 2U))
                                           : ((0x40000000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                               ? ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                                   ? 1U
                                                   : 0U)
                                               : ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                                   ? 2U
                                                   : 1U))))
                              : ((1U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])
                                  ? ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                                      >> 0x1fU) ? (
                                                   (0x40000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])
                                                     ? 0U
                                                     : 3U)
                                                    : 3U)
                                      : 3U) : 3U))));
    vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
        = ((0x10000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
            ? 0ULL : ((0x8000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                       ? 0ULL : ((0x4000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                  ? 0ULL : ((0x2000000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                             ? ((0x1000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x800000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 0ULL
                                                   : 
                                                  ((((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a))) 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? (QData)((IData)(
                                                                     ((0x1fU 
                                                                       >= 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                       ? 
                                                                      ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a) 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                       : 0U)))
                                                   : 
                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))))
                                                 : 
                                                ((0x800000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                   : 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                                      < vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                   : (QData)((IData)(
                                                                     VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))))))
                                             : ((0x1000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? 
                                                ((0x800000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 0ULL
                                                   : vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a)
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   ^ vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                                   : 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   | vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                 : 
                                                ((0x800000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   & vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                                   : 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   - vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))
                                                  : 
                                                 ((0x400000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                   + vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                                   : 0ULL)))))));
    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x1000U, vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i)) {
        vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt[(0xfffU 
                                                                   & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i)] 
            = vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
            [(0xfffU & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i)];
        vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__unnamedblk2__DOT__i);
    }
    if ((((((((0x32U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                   << 3U) | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                             >> 0x1dU)))) 
              | (0x33U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                     << 3U) | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                               >> 0x1dU))))) 
             | (0x34U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                    << 3U) | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0x1dU))))) 
            | (0x35U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                   << 3U) | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                             >> 0x1dU))))) 
           | (0x36U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                  << 3U) | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 0x1dU))))) 
          | (0x37U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                 << 3U) | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                           >> 0x1dU))))) 
         & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
               >> 0xcU)))) {
        vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt[(0xfffU 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataW[0U])] 
            = ((0x300U == (0xfffU & vlSelf->SimTop__DOT__core__DOT__dataW[0U]))
                ? ((0xffffffffff818644ULL & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                    [(0xfffU & vlSelf->SimTop__DOT__core__DOT__dataW[0U])]) 
                   | (0x7e79bbULL & ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                     >> 4U))) : ((0x100U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataW[0U]))
                                                  ? 
                                                 ((0x7ffffffcfffe1fffULL 
                                                   & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                   [
                                                   (0xfffU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataW[0U])]) 
                                                  | (0x800000030001e000ULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                              >> 4U)))))
                                                  : 
                                                 ((0x344U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataW[0U]))
                                                   ? 
                                                  ((0xfffffffffffffcccULL 
                                                    & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                    [
                                                    (0xfffU 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataW[0U])]) 
                                                   | (0x333ULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                         >> 4U)))
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataW[0U]))
                                                    ? 
                                                   ((2ULL 
                                                     & vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                     [
                                                     (0xfffU 
                                                      & vlSelf->SimTop__DOT__core__DOT__dataW[0U])]) 
                                                    | (0xfffffffffffffffdULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                           << 0x3cU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                                >> 4U)))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                          >> 4U)))))));
    }
    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt[0xb00U] 
        = (1ULL + vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
           [0xb00U]);
    vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr_nxt[0xf14U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__csr_write = (((
                                                   ((((0x32U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                            << 3U) 
                                                           | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                              >> 0x1dU)))) 
                                                      | (0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                              << 3U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                >> 0x1dU))))) 
                                                     | (0x34U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                             << 3U) 
                                                            | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                               >> 0x1dU))))) 
                                                    | (0x35U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                            << 3U) 
                                                           | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                              >> 0x1dU))))) 
                                                   | (0x36U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                           << 3U) 
                                                          | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                             >> 0x1dU))))) 
                                                  | (0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                          << 3U) 
                                                         | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                            >> 0x1dU))))) 
                                                 & (~ 
                                                    (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                     >> 0xcU)));
    vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE 
        = (1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                  >> 0x15U) & (~ (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                  >> 0xcU))));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] = (
                                                   (0xfU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD[0xbU]) 
                                                   | ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2) 
                                                      << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xcU] = (
                                                   ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 
                                                               >> 0x20U)) 
                                                      << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xdU] = (
                                                   ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 
                                                             >> 0x20U)) 
                                                    >> 0x1cU) 
                                                   | ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1) 
                                                      << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xeU] = (
                                                   ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                               >> 0x20U)) 
                                                      << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xfU] = ((IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                            >> 0x20U)) 
                                                   >> 0x1cU);
    if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__core__DOT__offset = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__op_in = 1U;
    } else {
        vlSelf->SimTop__DOT__core__DOT__offset = ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                     ? 0ULL
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 0ULL
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 0ULL
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0x14U) 
                                                        | (QData)((IData)(
                                                                          ((0xff000U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 1U)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0xaU)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                        : 
                                                       (0xfffffffffffffffeULL 
                                                        & (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                           + 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (0xfffU 
                                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))))))
                                                    : 0ULL)
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 
                                                      ((0x800U 
                                                        & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                        ? 0ULL
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U))))))))
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 
                                                      ((0x800U 
                                                        & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U))))))))
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))
                                                        : 0ULL)))
                                                     : 0ULL)
                                                    : 0ULL));
        vlSelf->SimTop__DOT__core__DOT__op_in = ((0x10000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                  ? 
                                                 ((0x8000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                    ? 1U
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                     ? 1U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 1U
                                                      : 
                                                     ((0x800U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 4U
                                                       : 1U))))
                                                   : 1U)
                                                  : 
                                                 ((0x8000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     ((0x800U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 1U
                                                       : 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        >= vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U))
                                                      : 
                                                     ((0x800U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        < vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 
                                                      (VL_GTES_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     ((0x800U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 
                                                      (VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        == vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U))
                                                      : 
                                                     ((0x800U 
                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                       ? 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        != vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 1U)))
                                                    : 1U)
                                                   : 1U));
    }
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                                                 | (0xffffe000U 
                                                    & ((vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                        << 0x12U) 
                                                       | (0x3e000U 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                             << 5U)))));
    vlSelf->SimTop__DOT__core__DOT__dataD[5U] = ((0xfffffff0U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[5U]) 
                                                 | (0x1fffU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                       >> 0xeU)));
    vlSelf->SimTop__DOT__core__DOT__dataD[9U] = (0xfU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[9U]);
    vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] = (0xfffffff0U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD[0xbU]);
    vlSelf->SimTop__DOT__core__DOT__dataD[9U] = ((0xfU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[9U]) 
                                                 | ((IData)(
                                                            ((0x20000U 
                                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                              ? 
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                               << 0xcU) 
                                                              | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                              : 
                                                             ((0x10000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                               ? 
                                                              ((0x8000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                ? 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                   : 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                : 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                 : 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))))
                                                               : 
                                                              ((0x8000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                ? 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U))))))))))
                                                                 : 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                : 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                 : 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))))) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] = (
                                                   ((IData)(
                                                            ((0x20000U 
                                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                              ? 
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                               << 0xcU) 
                                                              | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                              : 
                                                             ((0x10000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                               ? 
                                                              ((0x8000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                ? 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                   : 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                : 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                 : 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))))
                                                               : 
                                                              ((0x8000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                ? 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U))))))))))
                                                                 : 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                : 
                                                               ((0x4000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x1000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x800U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                 : 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))))) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (((0x20000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x10000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x8000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                      : 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                   : 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U)))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                      : 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                      : 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))))
                                                                  : 
                                                                 ((0x8000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                      : 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                      : 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U))))))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                      : 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))) 
                                                               >> 0x20U)) 
                                                      << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] = (
                                                   (0xfffffff0U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD[0xbU]) 
                                                   | ((IData)(
                                                              (((0x20000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x10000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                  ? 
                                                                 ((0x8000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                      : 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x10U))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                   : 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U)))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                      : 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                      : 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))))
                                                                  : 
                                                                 ((0x8000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                   ? 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                      : 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                      : 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U]))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 1U))))))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  ((0x4000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    ((0x1000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                      ? 
                                                                     ((0x800U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                                       ? 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))
                                                                       : 
                                                                      (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                        << 0xcU) 
                                                                       | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                                      : 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))) 
                                                               >> 0x20U)) 
                                                      >> 0x1cU));
    vlSelf->SimTop__DOT__core__DOT__dataD[0U] = ((0xfffff000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                                                 | (((((((0x32U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                              >> 0xbU))) 
                                                         | (0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                                >> 0xbU)))) 
                                                        | (0x34U 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                               >> 0xbU)))) 
                                                       | (0x35U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                              >> 0xbU)))) 
                                                      | (0x36U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                             >> 0xbU)))) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                            >> 0xbU))))
                                                     ? 
                                                    (0xfffU 
                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                         << 0xbU) 
                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                           >> 0x15U)))
                                                     : 0U));
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = (0x1fffU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[2U]);
    vlSelf->SimTop__DOT__core__DOT__dataD[3U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = (0xffffe000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[4U]);
    if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                  >> 0x11U)))) {
        if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                      >> 0x10U)))) {
            if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) {
                if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                              >> 0xeU)))) {
                    vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                           | ((IData)(((0x2000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                        ? ((0x1000U 
                                            & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                            ? ((0x800U 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                            << 0xbU) 
                                                                           | (0x7e0U 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 8U)))))))
                                                : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                            << 0xbU) 
                                                                           | (0x7e0U 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 8U))))))))
                                            : ((0x800U 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                            << 0xbU) 
                                                                           | (0x7e0U 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 8U)))))))
                                                : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                           << 0xbU) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 0x15U)))))))))
                                        : ((0x1000U 
                                            & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                            ? ((0x800U 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                           << 0xbU) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 0x15U)))))))
                                                : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                           << 0xbU) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 0x15U))))))))
                                            : ((0x800U 
                                                & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                           << 0xbU) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 0x15U)))))))
                                                : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                           << 0xbU) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 0x15U))))))))))) 
                              << 0xdU));
                    vlSelf->SimTop__DOT__core__DOT__dataD[3U] 
                        = (((IData)(((0x2000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                      ? ((0x1000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                          ? ((0x800U 
                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                              ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U)))))))
                                              : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U))))))))
                                          : ((0x800U 
                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                              ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U)))))))
                                              : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))))
                                      : ((0x1000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                          ? ((0x800U 
                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                              ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))
                                              : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U))))))))
                                          : ((0x800U 
                                              & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                              ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))
                                              : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U))))))))))) 
                            >> 0x13U) | ((IData)(((
                                                   (0x2000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                     ? 
                                                    ((0x800U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                               << 0xbU) 
                                                                              | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))
                                                      : 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                               << 0xbU) 
                                                                              | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U))))))))
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                               << 0xbU) 
                                                                              | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))
                                                      : 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                              << 0xbU) 
                                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                     ? 
                                                    ((0x800U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                              << 0xbU) 
                                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                      : 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                              << 0xbU) 
                                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))))
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                      ? 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                              << 0xbU) 
                                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                      : 
                                                     (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                      + 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (0xfffU 
                                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                              << 0xbU) 
                                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))))) 
                                                  >> 0x20U)) 
                                         << 0xdU));
                    vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                        = ((0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                           | ((IData)((((0x2000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                         ? ((0x1000U 
                                             & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                             ? ((0x800U 
                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                 ? 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U)))))))
                                                 : 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U))))))))
                                             : ((0x800U 
                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                 ? 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U)))))))
                                                 : 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))))
                                         : ((0x1000U 
                                             & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                             ? ((0x800U 
                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                 ? 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))
                                                 : 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U))))))))
                                             : ((0x800U 
                                                 & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                 ? 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))
                                                 : 
                                                (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))))) 
                                       >> 0x20U)) >> 0x13U));
                }
            } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) {
                if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) {
                    if ((0x1000U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) {
                        vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                               | ((IData)(((0x800U 
                                            & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                            ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                               + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 0x15U)))))))
                                            : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                               + ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (0x7e0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                               >> 0x15U)))) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                           >> 8U))))))))) 
                                  << 0xdU));
                        vlSelf->SimTop__DOT__core__DOT__dataD[3U] 
                            = (((IData)(((0x800U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                          ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                             + (((- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                       << 0xbU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                         >> 0x15U)))))))
                                          : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                             + (((- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                        << 0xbU) 
                                                                       | (0x7e0U 
                                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                             >> 0x15U)))) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                         >> 8U))))))))) 
                                >> 0x13U) | ((IData)(
                                                     (((0x800U 
                                                        & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                                        ? 
                                                       (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        + 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (0xfffU 
                                                                            & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                               | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))))))
                                                        : 
                                                       (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        + 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0xfe0U 
                                                                             & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                            | (0x1fU 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 8U)))))))) 
                                                      >> 0x20U)) 
                                             << 0xdU));
                        vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                            = ((0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                               | ((IData)((((0x800U 
                                             & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)
                                             ? (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                          << 0xbU) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                            >> 0x15U)))))))
                                             : (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                + (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                           << 0xbU) 
                                                                          | (0x7e0U 
                                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U)))) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                            >> 8U)))))))) 
                                           >> 0x20U)) 
                                  >> 0x13U));
                    } else if ((0x800U & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) {
                        vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                               | ((IData)((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                           + (((- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (0xfffU 
                                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                     << 0xbU) 
                                                                    | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                       >> 0x15U)))))))) 
                                  << 0xdU));
                        vlSelf->SimTop__DOT__core__DOT__dataD[3U] 
                            = (((IData)((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                         + (((- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (0xfffU 
                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                   << 0xbU) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                     >> 0x15U)))))))) 
                                >> 0x13U) | ((IData)(
                                                     ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                       + 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                               << 0xbU) 
                                                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                                >> 0x15U))))))) 
                                                      >> 0x20U)) 
                                             << 0xdU));
                        vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                            = ((0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                               | ((IData)(((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                            + (((- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U])))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (0xfffU 
                                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                                      << 0xbU) 
                                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                        >> 0x15U))))))) 
                                           >> 0x20U)) 
                                  >> 0x13U));
                    }
                }
            }
        }
    }
    vlSelf->SimTop__DOT__core__DOT__csr_ra = ((((((
                                                   (0x32U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                        >> 0xbU))) 
                                                   | (0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                          >> 0xbU)))) 
                                                  | (0x34U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                         >> 0xbU)))) 
                                                 | (0x35U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                        >> 0xbU)))) 
                                                | (0x36U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                       >> 0xbU)))) 
                                               | (0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                      >> 0xbU))))
                                               ? (0xfffU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_nxt[3U] 
                                                      << 0xbU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                        >> 0x15U)))
                                               : 0U);
    vlSelf->SimTop__DOT__dreq[2U] = ((0xfffff8ffU & 
                                      vlSelf->SimTop__DOT__dreq[2U]) 
                                     | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize) 
                                        << 8U));
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0U;
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                                                   >> 4U)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xffU;
            } else {
                if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                            = ((0xffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                               | ((QData)((IData)((
                                                   (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U] 
                                                    << 0x1cU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                      >> 4U)))) 
                                  << 0x20U));
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xf0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                        = ((0xffffffff00000000ULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                           | (IData)((IData)(((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U] 
                                               << 0x1cU) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                 >> 4U)))));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xfU;
                }
                if ((1U & (~ VL_ONEHOT0_I(((2U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                  >> 0xeU)) 
                                           | (1U & 
                                              (~ (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                  >> 0xfU)))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: memory.sv:364: Assertion failed in %NSimTop.core.memory: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/memory/memory.sv", 364, "");
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                        = ((0xffffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                           | ((QData)((IData)((0xffffU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                  >> 4U)))) 
                              << 0x30U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xc0U;
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                        = ((0xffff0000ffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                           | ((QData)((IData)((0xffffU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                  >> 4U)))) 
                              << 0x20U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x30U;
                }
            } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = ((0xffffffff0000ffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                       | ((QData)((IData)((0xffffU 
                                           & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                              >> 4U)))) 
                          << 0x10U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xcU;
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = ((0xffffffffffff0000ULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                       | (IData)((IData)((0xffffU & 
                                          (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                           >> 4U)))));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 3U;
            }
        } else if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
            if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                        = ((0xffffffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                  >> 4U)))) 
                              << 0x38U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x80U;
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                        = ((0xff00ffffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                  >> 4U)))) 
                              << 0x30U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x40U;
                }
            } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = ((0xffff00ffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                            >> 4U)))) 
                          << 0x28U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x20U;
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = ((0xffffff00ffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                            >> 4U)))) 
                          << 0x20U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x10U;
            }
        } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
            if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = ((0xffffffff00ffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                            >> 4U)))) 
                          << 0x18U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 8U;
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                    = ((0xffffffffff00ffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                            >> 4U)))) 
                          << 0x10U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 4U;
            }
        } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                = ((0xffffffffffff00ffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                   | ((QData)((IData)((0xffU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                                >> 4U)))) 
                      << 8U));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 2U;
        } else {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                = ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata) 
                   | (IData)((IData)((0xffU & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U] 
                                               >> 4U)))));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 1U;
        }
    }
    vlSelf->SimTop__DOT__core__DOT__dataE[3U] = (0xfU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataE[3U]);
    vlSelf->SimTop__DOT__core__DOT__dataE[4U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataE[5U] = (0xfffffff0U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataE[5U]);
    if ((8U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) {
        vlSelf->SimTop__DOT__core__DOT__dataE[5U] = 
            ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[5U]) 
             | ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                << 4U));
        vlSelf->SimTop__DOT__core__DOT__dataE[6U] = 
            (((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
              >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                    >> 0x20U)) << 4U));
        vlSelf->SimTop__DOT__core__DOT__dataE[7U] = 
            ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
             | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                         >> 0x20U)) >> 0x1cU));
    } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) {
        if ((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) {
            if ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) {
                vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[5U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[6U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
                       | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                   >> 0x20U)) >> 0x1cU));
            } else if ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                        >> 0x1fU)) {
                vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[3U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[4U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                    = (((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                    >> 4U)))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[6U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                  >> 4U)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
                       | ((IData)(((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                     >> 4U))) 
                                   >> 0x20U)) >> 0x1cU));
            } else if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])) {
                vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[3U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[4U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                    = (((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                    >> 4U)))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[6U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                  >> 4U)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
                       | ((IData)(((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[7U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_nxt[6U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])) 
                                                     >> 4U))) 
                                   >> 0x20U)) >> 0x1cU));
            } else {
                vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[5U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[6U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
                       | ((IData)((vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                   >> 0x20U)) >> 0x1cU));
            }
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataE[5U] 
                = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[5U]) 
                   | ((IData)(((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                    >> 0x1fU) ? ((0x40000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                                  : 
                                                 ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                    : ((0x40000000U 
                                        & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                        ? ((0x20000000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                            : (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                        : ((0x20000000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                            : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)) 
                      << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataE[6U] 
                = (((IData)(((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                              ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                  >> 0x1fU) ? ((0x40000000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                ? (
                                                   (0x20000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                                : (
                                                   (0x20000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                  : ((0x40000000U & 
                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                      ? ((0x20000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                          : (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                      : ((0x20000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                          : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                              : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)) 
                    >> 0x1cU) | ((IData)((((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                            ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                                >> 0x1fU)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                     ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                                : (
                                                   (0x40000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                     : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                            : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataE[7U] 
                = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
                   | ((IData)((((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                 ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                     >> 0x1fU) ? ((0x40000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  ((0x20000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                                   : 
                                                  ((0x20000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                     : ((0x40000000U 
                                         & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                         ? ((0x20000000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                             : (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                         : ((0x20000000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                             : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                 : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result) 
                               >> 0x20U)) >> 0x1cU));
        }
    } else {
        vlSelf->SimTop__DOT__core__DOT__dataE[5U] = 
            ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE[5U]) 
             | ((IData)(((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                          ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                          : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                              ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                  >> 0x1fU) ? ((0x40000000U 
                                                & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                : (
                                                   (0x20000000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                    ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                  : ((0x40000000U & 
                                      vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                      ? ((0x20000000U 
                                          & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                          : (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                      : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))
                              : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))) 
                << 4U));
        vlSelf->SimTop__DOT__core__DOT__dataE[6U] = 
            (((IData)(((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                        ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                        : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                            ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                >> 0x1fU) ? ((0x40000000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                              ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                              : ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                : ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                    ? ((0x20000000U 
                                        & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                        : (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                    : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))
                            : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))) 
              >> 0x1cU) | ((IData)((((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                      ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                      : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                                          ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                              >> 0x1fU)
                                              ? ((0x40000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                  : 
                                                 ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                              : ((0x40000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? 
                                                 ((0x20000000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                                  : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))
                                          : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)) 
                                    >> 0x20U)) << 4U));
        vlSelf->SimTop__DOT__core__DOT__dataE[7U] = 
            ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE[7U]) 
             | ((IData)((((2U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                           ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                           : ((1U & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[5U])
                               ? ((vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U] 
                                   >> 0x1fU) ? ((0x40000000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                 ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                 : 
                                                ((0x20000000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                                  ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))))
                                   : ((0x40000000U 
                                       & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                       ? ((0x20000000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_nxt[4U])
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)))
                                           : (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))))
                                       : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result))
                               : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__result)) 
                         >> 0x20U)) >> 0x1cU));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U]))) 
                   >> 0x20U));
    if (((1U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U]))) 
                   >> 0x20U));
    if (((2U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U]))) 
                   >> 0x20U));
    if (((3U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U]))) 
                   >> 0x20U));
    if (((4U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU]))) 
                   >> 0x20U));
    if (((5U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU]))) 
                   >> 0x20U));
    if (((6U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU]))) 
                   >> 0x20U));
    if (((7U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U]))) 
                   >> 0x20U));
    if (((8U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U]))) 
                   >> 0x20U));
    if (((9U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U]))) 
                   >> 0x20U));
    if (((0xaU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U]))) 
                   >> 0x20U));
    if (((0xbU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U]))) 
                   >> 0x20U));
    if (((0xcU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU]))) 
                   >> 0x20U));
    if (((0xdU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU]))) 
                   >> 0x20U));
    if (((0xeU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU]))) 
                   >> 0x20U));
    if (((0xfU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U]))) 
                   >> 0x20U));
    if (((0x10U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U]))) 
                   >> 0x20U));
    if (((0x11U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U]))) 
                   >> 0x20U));
    if (((0x12U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U]))) 
                   >> 0x20U));
    if (((0x13U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U]))) 
                   >> 0x20U));
    if (((0x14U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU]))) 
                   >> 0x20U));
    if (((0x15U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU]))) 
                   >> 0x20U));
    if (((0x16U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU]))) 
                   >> 0x20U));
    if (((0x17U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U]))) 
                   >> 0x20U));
    if (((0x18U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U]))) 
                   >> 0x20U));
    if (((0x19U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U]))) 
                   >> 0x20U));
    if (((0x1aU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U]))) 
                   >> 0x20U));
    if (((0x1bU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U]))) 
                   >> 0x20U));
    if (((0x1cU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU]))) 
                   >> 0x20U));
    if (((0x1dU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU]))) 
                   >> 0x20U));
    if (((0x1eU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU]))) 
                   >> 0x20U));
    if (((0x1fU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 0xdU))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                   >> 4U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[7U])) 
                         << 0x3cU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                       << 0x1cU) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                       >> 4U))) >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__dataD[5U] = ((0xfU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[5U]) 
                                                 | ((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                            [vlSelf->SimTop__DOT__core__DOT__csr_ra]) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[6U] = (((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                          [vlSelf->SimTop__DOT__core__DOT__csr_ra]) 
                                                  >> 0x1cU) 
                                                 | ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                             [vlSelf->SimTop__DOT__core__DOT__csr_ra] 
                                                             >> 0x20U)) 
                                                    << 4U));
    vlSelf->SimTop__DOT__core__DOT__dataD[7U] = ((0xfffffff0U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[7U]) 
                                                 | ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__csr_regfile__DOT__csr
                                                             [vlSelf->SimTop__DOT__core__DOT__csr_ra] 
                                                             >> 0x20U)) 
                                                    >> 0x1cU));
    if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU & vlSelf->SimTop__DOT__dreq[2U]);
        vlSelf->SimTop__DOT__dreq[3U] = 0U;
        vlSelf->SimTop__DOT__dreq[4U] = 0U;
        vlSelf->SimTop__DOT__dreq[0U] = 0U;
        vlSelf->SimTop__DOT__dreq[1U] = 0U;
        vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                         & vlSelf->SimTop__DOT__dreq[2U]);
    } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU & vlSelf->SimTop__DOT__dreq[2U]);
        vlSelf->SimTop__DOT__dreq[3U] = 0U;
        vlSelf->SimTop__DOT__dreq[4U] = 0U;
        vlSelf->SimTop__DOT__dreq[0U] = 0U;
        vlSelf->SimTop__DOT__dreq[1U] = 0U;
        vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                         & vlSelf->SimTop__DOT__dreq[2U]);
    } else if ((2U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        if ((1U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
            vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
            vlSelf->SimTop__DOT__dreq[3U] = 0U;
            vlSelf->SimTop__DOT__dreq[4U] = 0U;
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        } else if ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                    >> 0x1fU)) {
            if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                      >> 0xdU)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                    << 0x33U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                     << 0x13U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                       >> 0xdU))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                      >> 0xcU)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata);
                    vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                                                             >> 0x20U));
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]) 
                         | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
                } else {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                      >> 0xdU)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                    << 0x33U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                     << 0x13U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                       >> 0xdU))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                      >> 0xcU)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata);
                    vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                                                             >> 0x20U));
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]) 
                         | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
                }
            } else if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                                << 0x33U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                   << 0x13U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                     >> 0xdU))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                            >> 0xcU)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata);
                vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                                                         >> 0x20U));
                vlSelf->SimTop__DOT__dreq[2U] = ((0xffffff00U 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
            } else {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                                << 0x33U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                   << 0x13U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                     >> 0xdU))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                            >> 0xcU)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            }
        } else if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
            if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                                << 0x33U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                   << 0x13U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                     >> 0xdU))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                            >> 0xcU)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            } else {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                                << 0x33U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                   << 0x13U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                     >> 0xdU))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                            >> 0xcU)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            }
        } else if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
            vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                              & vlSelf->SimTop__DOT__dreq[2U]) 
                                             | ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                               >> 0xdU)))) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x15U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                             & (((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU))) 
                                                          >> 0x20U)) 
                                                 >> 0x15U) 
                                                | (0x800U 
                                                   & ((~ 
                                                       (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                        >> 0xcU)) 
                                                      << 0xbU))));
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        } else {
            vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                              & vlSelf->SimTop__DOT__dreq[2U]) 
                                             | ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                               >> 0xdU)))) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x15U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                             & (((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU))) 
                                                          >> 0x20U)) 
                                                 >> 0x15U) 
                                                | (0x800U 
                                                   & ((~ 
                                                       (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                        >> 0xcU)) 
                                                      << 0xbU))));
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        }
    } else if ((1U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        if ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                      >> 0xdU)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                    << 0x33U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                     << 0x13U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                       >> 0xdU))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                      >> 0xcU)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = 0U;
                    vlSelf->SimTop__DOT__dreq[1U] = 0U;
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        (0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]);
                } else {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                      >> 0xdU)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                    << 0x33U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                     << 0x13U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                       >> 0xdU))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                    >> 0xdU))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                      >> 0xcU)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata);
                    vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__memory__DOT__writedata 
                                                             >> 0x20U));
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]) 
                         | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
                }
            } else if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                 << 0x13U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                   >> 0xdU)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                            << 0x33U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                               << 0x13U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                 >> 0xdU)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                  << 0x13U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                    >> 0xdU))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                                                                << 0x33U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                                                                   << 0x13U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) 
                                                                     >> 0xdU))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                            >> 0xcU)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            } else {
                vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
                vlSelf->SimTop__DOT__dreq[3U] = 0U;
                vlSelf->SimTop__DOT__dreq[4U] = 0U;
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            }
        } else {
            vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
            vlSelf->SimTop__DOT__dreq[3U] = 0U;
            vlSelf->SimTop__DOT__dreq[4U] = 0U;
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        }
    } else {
        vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU & vlSelf->SimTop__DOT__dreq[2U]);
        vlSelf->SimTop__DOT__dreq[3U] = 0U;
        vlSelf->SimTop__DOT__dreq[4U] = 0U;
        vlSelf->SimTop__DOT__dreq[0U] = 0U;
        vlSelf->SimTop__DOT__dreq[1U] = 0U;
        vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                         & vlSelf->SimTop__DOT__dreq[2U]);
    }
    __Vtemp98[3U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__dreq[4U])) 
                                          << 0x35U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__dreq[3U])) 
                                             << 0x15U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__dreq[2U])) 
                                               >> 0xbU)))) 
                                >> 0xeU)) | ((0x3fc00U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                >> 0xbU)))) 
                                                 >> 0xeU)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                >> 0xbU))) 
                                                         >> 0x20U)) 
                                                << 0x12U)));
    __Vtemp98[4U] = ((0x3ffU & ((IData)(((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                           << 0x35U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                >> 0xbU))) 
                                         >> 0x20U)) 
                                >> 0xeU)) | ((((2U 
                                                & (vlSelf->SimTop__DOT__dreq[4U] 
                                                   >> 0xaU)) 
                                               | (0U 
                                                  != 
                                                  (0xffU 
                                                   & vlSelf->SimTop__DOT__dreq[2U]))) 
                                              << 0x15U) 
                                             | ((0x1c0000U 
                                                 & (vlSelf->SimTop__DOT__dreq[2U] 
                                                    << 0xaU)) 
                                                | (0x3fc00U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[4U])) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[3U])) 
                                                                    << 0x15U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                      >> 0xbU))) 
                                                               >> 0x20U)) 
                                                      >> 0xeU)))));
    vlSelf->SimTop__DOT__dcreq[0U] = ((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dreq[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))) 
                                      << 0xaU);
    vlSelf->SimTop__DOT__dcreq[1U] = (((IData)((((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[0U])))) 
                                       >> 0x16U) | 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[0U]))) 
                                                >> 0x20U)) 
                                       << 0xaU));
    vlSelf->SimTop__DOT__dcreq[2U] = ((((IData)((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[4U])) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[3U])) 
                                                     << 0x15U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__dreq[2U])) 
                                                       >> 0xbU)))) 
                                        << 0x12U) | 
                                       (0x3fc00U & 
                                        (vlSelf->SimTop__DOT__dreq[2U] 
                                         << 0xaU))) 
                                      | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[0U]))) 
                                                  >> 0x20U)) 
                                         >> 0x16U));
    vlSelf->SimTop__DOT__dcreq[3U] = __Vtemp98[3U];
    vlSelf->SimTop__DOT__dcreq[4U] = __Vtemp98[4U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
        = vlSelf->SimTop__DOT__dcreq[0U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U] 
        = vlSelf->SimTop__DOT__dcreq[1U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
        = vlSelf->SimTop__DOT__dcreq[2U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U] 
        = vlSelf->SimTop__DOT__dcreq[3U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
        = ((vlSelf->SimTop__DOT__icreq[0U] << 0x17U) 
           | vlSelf->SimTop__DOT__dcreq[4U]);
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
        = ((vlSelf->SimTop__DOT__icreq[0U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[1U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U] 
        = ((vlSelf->SimTop__DOT__icreq[1U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[2U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
        = ((vlSelf->SimTop__DOT__icreq[2U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[3U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U] 
        = ((vlSelf->SimTop__DOT__icreq[3U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[4U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
        = (vlSelf->SimTop__DOT__icreq[4U] >> 9U);
    vlSelf->SimTop__DOT__mux__DOT__select = 0U;
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((0x12dU >= (0x1ffU & ((IData)(0x96U) 
                                             + ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        ? (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                           (0xfU & (((IData)(0x96U) 
                                     + ((IData)(0x97U) 
                                        * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x96U) 
                                                    + 
                                                    ((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        : (IData)(vlSelf->SimTop__DOT__mux__DOT____Vxrand3)))) {
                vlSelf->SimTop__DOT__mux__DOT__select 
                    = vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i;
                goto __Vlabel1;
            }
            vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__oreq[0U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                (0xfU 
                                                 & (((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[0U]);
        vlSelf->SimTop__DOT__oreq[1U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(1U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[1U]);
        vlSelf->SimTop__DOT__oreq[2U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[2U]);
        vlSelf->SimTop__DOT__oreq[3U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(3U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[3U]);
        vlSelf->SimTop__DOT__oreq[4U] = (0x7fffffU 
                                         & ((0x12dU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                                | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x97U) 
                                                         * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))
                                             : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[4U]));
    } else {
        vlSelf->SimTop__DOT__oreq[0U] = 0U;
        vlSelf->SimTop__DOT__oreq[1U] = 0U;
        vlSelf->SimTop__DOT__oreq[2U] = 0U;
        vlSelf->SimTop__DOT__oreq[3U] = 0U;
        vlSelf->SimTop__DOT__oreq[4U] = 0U;
    }
    if ((0x12dU >= (0x1ffU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))) {
        vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  (0xfU & (((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select) 
                           >> 5U))] >> (0x1fU & ((IData)(0x97U) 
                                                 * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[3U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(4U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x97U) 
                                              * vlSelf->SimTop__DOT__mux__DOT__select)))
                              ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                      ((IData)(5U) 
                                       + (0xfU & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__mux__DOT__select))))) 
                            | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                               ((IData)(4U) + (0xfU 
                                               & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__select)))));
    } else {
        vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[0U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[1U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[1U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[2U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[3U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[3U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & vlSelf->SimTop__DOT__mux__DOT____Vxrand2[4U]);
    }
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffff0000ULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | (IData)((IData)(
                                                              ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xbU)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xaU)))))))));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffff0000ffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xdU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xcU)))))))) 
                                               << 0x10U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffff0000ffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xfU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xeU)))))))) 
                                               << 0x20U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x11U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x10U)))))))) 
                                               << 0x30U));
    vlSelf->SimTop__DOT__oresp[0U] = 0U;
    vlSelf->SimTop__DOT__oresp[1U] = 0U;
    vlSelf->SimTop__DOT__oresp[2U] = 0U;
    if (VL_ONEHOT0_I(((((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                        << 1U) | (0x7feU & (((((0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                                               << 1U) 
                                              & (vlSelf->SimTop__DOT__oreq[4U] 
                                                 >> 0x15U)) 
                                             & ((0U 
                                                 == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down)) 
                                                << 1U)) 
                                            & (vlSelf->SimTop__DOT__oreq[4U] 
                                               >> 0x14U)))) 
                      | ((2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                         | ((((0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                              & (vlSelf->SimTop__DOT__oreq[4U] 
                                 >> 0x16U)) & (0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))) 
                            & (~ (vlSelf->SimTop__DOT__oreq[4U] 
                                  >> 0x15U))))))) {
        if (((2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
             | ((((0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                  & (vlSelf->SimTop__DOT__oreq[4U] 
                     >> 0x16U)) & (0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))) 
                & (~ (vlSelf->SimTop__DOT__oreq[4U] 
                      >> 0x15U))))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
            if ((0x40600008ULL == (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U))))) {
                vlSelf->SimTop__DOT__oresp[0U] = 0U;
                vlSelf->SimTop__DOT__oresp[1U] = 0U;
            } else if ((0x38000000ULL == (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                >> 0x12U))))) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__msip)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__msip)) 
                                                          >> 0x20U));
            } else if ((0x38004000ULL == (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                >> 0x12U))))) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__mtimecmp);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__mtimecmp 
                                                          >> 0x20U));
            } else if ((0x3800bff8ULL == (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                >> 0x12U))))) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__mtime);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__mtime 
                                                          >> 0x20U));
            } else if ((0x20003000ULL == (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                >> 0x12U))))) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__ms_cnt 
                                                          >> 0x20U));
            } else if ((0x23333008ULL == (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                >> 0x12U))))) {
                VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(vlSelf->__Vfunc_get_switch__9__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->__Vfunc_get_switch__9__Vfuncout)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->__Vfunc_get_switch__9__Vfuncout)) 
                                                          >> 0x20U));
            } else {
                VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                               ((0x80000000ULL 
                                                                                < 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[4U])) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[3U])) 
                                                                                << 0xeU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                                >> 0x12U))))
                                                                                 ? 
                                                                                (((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[4U])) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[3U])) 
                                                                                << 0xeU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                                >> 0x12U))) 
                                                                                - 0x80000000ULL) 
                                                                                >> 3U)
                                                                                 : 0ULL), vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->__Vfunc_ram_read_helper__10__Vfuncout 
                                                          >> 0x20U));
            }
            if ((1U & (~ VL_ONEHOT0_I((((0x23333008ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[4U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__oreq[3U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__oreq[2U])) 
                                                   >> 0x12U)))) 
                                        << 5U) | ((
                                                   (0x20003000ULL 
                                                    == 
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__oreq[4U])) 
                                                      << 0x2eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__oreq[3U])) 
                                                         << 0xeU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__oreq[2U])) 
                                                           >> 0x12U)))) 
                                                   << 4U) 
                                                  | (((0x3800bff8ULL 
                                                       == 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__oreq[4U])) 
                                                         << 0x2eU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__oreq[3U])) 
                                                            << 0xeU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__oreq[2U])) 
                                                              >> 0x12U)))) 
                                                      << 3U) 
                                                     | (((0x38004000ULL 
                                                          == 
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__oreq[4U])) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__oreq[3U])) 
                                                               << 0xeU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                 >> 0x12U)))) 
                                                         << 2U) 
                                                        | (((0x38000000ULL 
                                                             == 
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__oreq[4U])) 
                                                               << 0x2eU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[3U])) 
                                                                  << 0xeU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                    >> 0x12U)))) 
                                                            << 1U) 
                                                           | (0x40600008ULL 
                                                              == 
                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[4U])) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[3U])) 
                                                                   << 0xeU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                     >> 0x12U))))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: ram.sv:165: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/test/vsrc/common/ram.sv", 165, "");
                }
            }
        } else if (((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                    | ((((0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                         & (vlSelf->SimTop__DOT__oreq[4U] 
                            >> 0x16U)) & (0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))) 
                       & (vlSelf->SimTop__DOT__oreq[4U] 
                          >> 0x15U)))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
        } else {
            vlSelf->SimTop__DOT__oresp[0U] = 0U;
            vlSelf->SimTop__DOT__oresp[1U] = 0U;
            vlSelf->SimTop__DOT__oresp[2U] = 0U;
        }
    } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
        VL_WRITEF("[%0t] %%Error: ram.sv:162: Assertion failed in %NSimTop.ram: 'unique if' statement violated\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("src/test/vsrc/common/ram.sv", 162, "");
    }
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] = 0U;
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        if ((0U == vlSelf->SimTop__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U] 
                = vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U] 
                = vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((0xfffffffcU & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U]);
        }
        if ((1U == vlSelf->SimTop__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((3U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                      << 2U));
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U] 
                = ((vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                                 << 2U));
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                = (0xfU & ((vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                            >> 0x1eU) | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                                         << 2U)));
        }
    }
    vlSelf->SimTop__DOT__icvt__DOT__dresp[0U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                               >> 2U))));
    vlSelf->SimTop__DOT__icvt__DOT__dresp[1U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                           << 0x3eU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                                >> 2U))) 
                                                         >> 0x20U));
    vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] = (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                                                   >> 3U) 
                                                                  & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                                                     >> 2U))))));
    vlSelf->SimTop__DOT__dresp[0U] = (IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U]))));
    vlSelf->SimTop__DOT__dresp[1U] = (IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U]))) 
                                              >> 0x20U));
    vlSelf->SimTop__DOT__dresp[2U] = (3U & (- (IData)(
                                                      (1U 
                                                       & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                                           >> 1U) 
                                                          & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])))));
    vlSelf->SimTop__DOT__iresp = (((QData)((IData)(
                                                   (3U 
                                                    & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U]))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((4U 
                                                                 & vlSelf->SimTop__DOT__ireq[0U])
                                                                 ? 
                                                                vlSelf->SimTop__DOT__icvt__DOT__dresp[1U]
                                                                 : 
                                                                vlSelf->SimTop__DOT__icvt__DOT__dresp[0U]))));
    vlSelf->SimTop__DOT__core__DOT__stalldata = (1U 
                                                 & ((vlSelf->SimTop__DOT__dreq[4U] 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       vlSelf->SimTop__DOT__dresp[2U])));
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__dresp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__dresp[0U])));
            } else {
                if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                            = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                                     & (vlSelf->SimTop__DOT__dresp[1U] 
                                        >> 0x1fU)));
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                            = (((QData)((IData)((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__dresp[1U])));
                    }
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[0U] 
                                    >> 0x1fU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                        = (((QData)((IData)((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[0U])));
                }
                if ((1U & (~ VL_ONEHOT0_I(((2U & (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                  >> 0xeU)) 
                                           | (1U & 
                                              (~ (vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U] 
                                                  >> 0xfU)))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: memory.sv:274: Assertion failed in %NSimTop.core.memory: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("/home/tela/Arch2025/lab4/build/../vsrc/pipeline/memory/memory.sv", 274, "");
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0x1fU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                            << 0x10U) | (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__dresp[1U] 
                                                         >> 0x10U))));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0xfU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & vlSelf->SimTop__DOT__dresp[1U]))));
                }
            } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0x1fU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                        << 0x10U) | (QData)((IData)(
                                                    (vlSelf->SimTop__DOT__dresp[0U] 
                                                     >> 0x10U))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0xfU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->SimTop__DOT__dresp[0U]))));
            }
        } else if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
            if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0x1fU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                            << 8U) | (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__dresp[1U] 
                                                      >> 0x18U))));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0x17U)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->SimTop__DOT__dresp[1U] 
                                                         >> 0x10U)))));
                }
            } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[1U] 
                                >> 0xfU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (vlSelf->SimTop__DOT__dresp[1U] 
                                                     >> 8U)))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[1U] 
                                >> 7U)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->SimTop__DOT__dresp[1U]))));
            }
        } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
            if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0x1fU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((vlSelf->SimTop__DOT__dresp[0U] 
                                                  >> 0x18U))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0x17U)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (vlSelf->SimTop__DOT__dresp[0U] 
                                                     >> 0x10U)))));
            }
        } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])) {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                         & (vlSelf->SimTop__DOT__dresp[0U] 
                            >> 0xfU)));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (vlSelf->SimTop__DOT__dresp[0U] 
                                                 >> 8U)))));
        } else {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit 
                = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__isunsigned)) 
                         & (vlSelf->SimTop__DOT__dresp[0U] 
                            >> 7U)));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__sign_bit))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & vlSelf->SimTop__DOT__dresp[0U]))));
        }
    }
    vlSelf->SimTop__DOT__core__DOT__stallpc = (1U & 
                                               (vlSelf->SimTop__DOT__ireq[2U] 
                                                & (~ (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 0x20U)))));
    vlSelf->SimTop__DOT__core__DOT__dataM[0U] = ((0x1fffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[0U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[1U] = ((VSimTop__ConstPool__CONST_10624e40_0[0U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[1U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[2U] = ((VSimTop__ConstPool__CONST_10624e40_0[1U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[2U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[3U] = ((VSimTop__ConstPool__CONST_10624e40_0[2U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[3U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[4U] = ((VSimTop__ConstPool__CONST_10624e40_0[3U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[4U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[5U] = ((VSimTop__ConstPool__CONST_10624e40_0[4U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[5U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[6U] = ((VSimTop__ConstPool__CONST_10624e40_0[5U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[6U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[7U] = ((VSimTop__ConstPool__CONST_10624e40_0[6U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[7U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[8U] = ((VSimTop__ConstPool__CONST_10624e40_0[7U] 
                                                  >> 0x13U) 
                                                 | (VSimTop__ConstPool__CONST_10624e40_0[8U] 
                                                    << 0xdU));
    vlSelf->SimTop__DOT__core__DOT__dataM[9U] = (0xfU 
                                                 & (VSimTop__ConstPool__CONST_10624e40_0[8U] 
                                                    >> 0x13U));
    if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        vlSelf->SimTop__DOT__core__DOT__dataM[0U] = 
            ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[7U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[8U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[9U] = 
            (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                      >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
    } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        vlSelf->SimTop__DOT__core__DOT__dataM[0U] = 
            ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[7U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[8U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[9U] = 
            (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                      >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
    } else if ((2U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        if ((1U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                = (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                            >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
        } else if ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
                    >> 0x1fU)) {
            if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                        = (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]);
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                           | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U]) 
                           | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                        = (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]);
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                           | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
                }
            } else if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                       | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U]) 
                       | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U]) 
                       | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U]) 
                       | (0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                    = (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]);
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                       | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
            } else {
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                    = (((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                    >> 4U)))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                    = ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U))) 
                                >> 0x20U)) >> 0x1cU);
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                       | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
            }
        } else if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
            if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                    = (((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                    >> 4U)))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                    = ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U))) 
                                >> 0x20U)) >> 0x1cU);
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                       | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
            } else {
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                       | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                        >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                    = (((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                    >> 4U)))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                    = ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U))) 
                                >> 0x20U)) >> 0x1cU);
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                       | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
            }
        } else if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                   | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                      << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                    >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                = (((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                             >> 0x20U)) >> 0x1cU) | 
                   ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U)))) 
                    << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U)))) 
                    >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                 >> 4U))) 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                = ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U))) 
                            >> 0x20U)) >> 0x1cU);
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                   | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                   | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                   | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                   | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                      << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                    >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                = (((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                             >> 0x20U)) >> 0x1cU) | 
                   ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U)))) 
                    << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U)))) 
                    >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                 >> 4U))) 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                = ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                              >> 4U))) 
                            >> 0x20U)) >> 0x1cU);
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                   | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                   | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                   | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
        }
    } else if ((1U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) {
        if ((vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U] 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                           | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                              << 4U));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata) 
                            >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                                  >> 0x20U)) 
                                         << 4U));
                    vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                        = (((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT__readdata 
                                     >> 0x20U)) >> 0x1cU) 
                           | ((IData)((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                           >> 4U)))) 
                              << 4U));
                    vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                        = (((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                      >> 4U)))) 
                            >> 0x1cU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                         >> 4U))) 
                                                  >> 0x20U)) 
                                         << 4U));
                    vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                        = ((IData)(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                      >> 4U))) 
                                    >> 0x20U)) >> 0x1cU);
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                           | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                           | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                        = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                        >> 0x13U) & 
                                       vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                           | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                              << 0xdU) 
                                             & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
                    vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                        = (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
                }
            } else if ((0x20000000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) {
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0xfU & vlSelf->SimTop__DOT__core__DOT__dataM[5U]) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__dresp[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__dresp[0U])))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__dresp[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__dresp[0U])))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dresp[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dresp[0U]))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                    = (((IData)(((((QData)((IData)(
                                                   vlSelf->SimTop__DOT__dresp[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__dresp[0U]))) 
                                 >> 0x20U)) >> 0x1cU) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                    >> 4U)))) 
                          << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                    = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U)))) 
                        >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                    = ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                                                  >> 4U))) 
                                >> 0x20U)) >> 0x1cU);
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]) 
                       | (0xffffe000U & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U]));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0xfffffff0U & vlSelf->SimTop__DOT__core__DOT__dataM[3U]) 
                       | (0xfU & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U]));
            } else {
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                    = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                    >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                       | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                          << 0xdU) 
                                         & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
                vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                    = (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
            }
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[8U] 
                = ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
                   | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                      << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
            vlSelf->SimTop__DOT__core__DOT__dataM[9U] 
                = (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                            >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
        }
    } else {
        vlSelf->SimTop__DOT__core__DOT__dataM[0U] = 
            ((0x1fffU & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[0U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[0U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[1U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[1U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[2U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[2U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[3U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[3U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[4U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[4U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[5U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[5U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[6U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[7U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[6U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[7U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[8U] = 
            ((0x1fffU & ((VSimTop__ConstPool__CONST_4d051b67_0[7U] 
                          >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])) 
             | (0xffffe000U & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                                << 0xdU) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[8U])));
        vlSelf->SimTop__DOT__core__DOT__dataM[9U] = 
            (0xfU & ((VSimTop__ConstPool__CONST_4d051b67_0[8U] 
                      >> 0x13U) & vlSelf->SimTop__DOT__core__DOT__dataE_nxt[9U]));
    }
    vlSelf->SimTop__DOT__core__DOT__hazard_csr = ((~ 
                                                   (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                    >> 0xcU)) 
                                                  & (((((((0x32U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                                << 3U) 
                                                               | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                  >> 0x1dU)))) 
                                                          | (0x33U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                                  << 3U) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                    >> 0x1dU))))) 
                                                         | (0x34U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                                 << 3U) 
                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                   >> 0x1dU))))) 
                                                        | (0x35U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                                << 3U) 
                                                               | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                  >> 0x1dU))))) 
                                                       | (0x36U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                               << 3U) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                 >> 0x1dU))))) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                              << 3U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                >> 0x1dU))))) 
                                                     & (((((~ 
                                                            (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                             >> 0xcU)) 
                                                           & ((((((0x32U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                                        << 3U) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                                          >> 0x1dU)))) 
                                                                  | (0x33U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                                          << 3U) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                                            >> 0x1dU))))) 
                                                                 | (0x34U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                                         << 3U) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                                           >> 0x1dU))))) 
                                                                | (0x35U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                                        << 3U) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                                          >> 0x1dU))))) 
                                                               | (0x36U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                                       << 3U) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                                         >> 0x1dU))))) 
                                                              | (0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataE[3U] 
                                                                      << 3U) 
                                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                                        >> 0x1dU)))))) 
                                                          & ((0xfffU 
                                                              & vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                                                             == 
                                                             (0xfffU 
                                                              & vlSelf->SimTop__DOT__core__DOT__dataE[0U]))) 
                                                         | (((~ 
                                                              (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                               >> 0xcU)) 
                                                             & ((((((0x32U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                                          << 3U) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                            >> 0x1dU)))) 
                                                                    | (0x33U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                                            << 3U) 
                                                                           | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                              >> 0x1dU))))) 
                                                                   | (0x34U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                                           << 3U) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                             >> 0x1dU))))) 
                                                                  | (0x35U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                                          << 3U) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                            >> 0x1dU))))) 
                                                                 | (0x36U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                                         << 3U) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                           >> 0x1dU))))) 
                                                                | (0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                                                                        << 3U) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                          >> 0x1dU)))))) 
                                                            & ((0xfffU 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                                                               == 
                                                               (0xfffU 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataM[0U])))) 
                                                        | (((~ 
                                                             (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                              >> 0xcU)) 
                                                            & ((((((0x32U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                                         << 3U) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                           >> 0x1dU)))) 
                                                                   | (0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                                           << 3U) 
                                                                          | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                             >> 0x1dU))))) 
                                                                  | (0x34U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                                          << 3U) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                            >> 0x1dU))))) 
                                                                 | (0x35U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                                         << 3U) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                           >> 0x1dU))))) 
                                                                | (0x36U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                                        << 3U) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                          >> 0x1dU))))) 
                                                               | (0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataW[3U] 
                                                                       << 3U) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                         >> 0x1dU)))))) 
                                                           & ((0xfffU 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                                                              == 
                                                              (0xfffU 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataW[0U]))))));
    vlSelf->SimTop__DOT__core__DOT__hazard_jalr = (
                                                   ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                      >> 0xcU)) 
                                                    & (0x30U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                            << 3U) 
                                                           | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                              >> 0x1dU))))) 
                                                   & ((((~ 
                                                         (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                          >> 0xcU)) 
                                                        & ((0x1fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                               >> 0x10U)) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                               >> 0xdU)))) 
                                                       | ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                            >> 0xcU)) 
                                                          & ((0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                 >> 0x10U)) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                 >> 0xdU))))) 
                                                      | ((~ 
                                                          (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                           >> 0xcU)) 
                                                         & ((0x1fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                >> 0x10U)) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                >> 0xdU))))));
    vlSelf->SimTop__DOT__core__DOT__op_out = ((0x30U 
                                               == (0x7fU 
                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataD[5U] 
                                                       << 3U) 
                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                         >> 0x1dU))))
                                               ? ((IData)(vlSelf->SimTop__DOT__core__DOT__hazard_jalr)
                                                   ? 0U
                                                   : 5U)
                                               : (IData)(vlSelf->SimTop__DOT__core__DOT__op_in));
    vlSelf->SimTop__DOT__core__DOT__bubble = (((((~ 
                                                  (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                   >> 0xcU)) 
                                                 & ((((~ 
                                                       (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                        >> 0xcU)) 
                                                      & ((0x1fU 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                             >> 0x10U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                             >> 0xdU)))) 
                                                     | ((~ 
                                                         (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                          >> 0xcU)) 
                                                        & ((0x1fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                               >> 0x10U)) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                               >> 0xdU))))) 
                                                    | ((~ 
                                                        (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                         >> 0xcU)) 
                                                       & ((0x1fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                              >> 0x10U)) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                              >> 0xdU)))))) 
                                                | ((~ 
                                                    (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                     >> 0xcU)) 
                                                   & ((((~ 
                                                         (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                          >> 0xcU)) 
                                                        & ((0x1fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                               >> 0x15U)) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                               >> 0xdU)))) 
                                                       | ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                                                            >> 0xcU)) 
                                                          & ((0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                 >> 0x15U)) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                                 >> 0xdU))))) 
                                                      | ((~ 
                                                          (vlSelf->SimTop__DOT__core__DOT__dataW[0U] 
                                                           >> 0xcU)) 
                                                         & ((0x1fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_nxt[2U] 
                                                                >> 0x15U)) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                                >> 0xdU))))))) 
                                               | (IData)(vlSelf->SimTop__DOT__core__DOT__hazard_jalr)) 
                                              | (IData)(vlSelf->SimTop__DOT__core__DOT__hazard_csr));
    vlSelf->SimTop__DOT__core__DOT__pc_nxt = ((IData)(vlSelf->SimTop__DOT__core__DOT__csr_write)
                                               ? vlSelf->SimTop__DOT__core__DOT__pc
                                               : ((1U 
                                                   & ((((IData)(vlSelf->SimTop__DOT__core__DOT__stalldata) 
                                                        | (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                           >> 0xcU)) 
                                                       | (IData)(vlSelf->SimTop__DOT__core__DOT__stallpc)) 
                                                      | (IData)(vlSelf->SimTop__DOT__core__DOT__bubble)))
                                                   ? vlSelf->SimTop__DOT__core__DOT__pc
                                                   : 
                                                  (((~ 
                                                     vlSelf->SimTop__DOT__ireq[2U]) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->SimTop__DOT__core__DOT__op_out)) 
                                                       | (3U 
                                                          == (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))))
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->SimTop__DOT__core__DOT__pc)
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->SimTop__DOT__core__DOT__op_out)) 
                                                     | (4U 
                                                        == (IData)(vlSelf->SimTop__DOT__core__DOT__op_out)))
                                                     ? 
                                                    (vlSelf->SimTop__DOT__core__DOT__pc 
                                                     + vlSelf->SimTop__DOT__core__DOT__offset)
                                                     : 
                                                    (((~ 
                                                       vlSelf->SimTop__DOT__ireq[2U]) 
                                                      & (5U 
                                                         == (IData)(vlSelf->SimTop__DOT__core__DOT__op_out)))
                                                      ? vlSelf->SimTop__DOT__core__DOT__offset
                                                      : 
                                                     ((1U 
                                                       & vlSelf->SimTop__DOT__ireq[2U])
                                                       ? 
                                                      ((0x10U 
                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                        ? 
                                                       (4ULL 
                                                        + vlSelf->SimTop__DOT__core__DOT__pc)
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                         ? 
                                                        (4ULL 
                                                         + vlSelf->SimTop__DOT__core__DOT__pc)
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                           ? 
                                                          (4ULL 
                                                           + vlSelf->SimTop__DOT__core__DOT__pc)
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                            ? vlSelf->SimTop__DOT__core__DOT__offset
                                                            : 
                                                           (vlSelf->SimTop__DOT__core__DOT__pc 
                                                            + vlSelf->SimTop__DOT__core__DOT__offset)))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->SimTop__DOT__core__DOT__pc)
                                                            : 
                                                           (vlSelf->SimTop__DOT__core__DOT__pc 
                                                            + vlSelf->SimTop__DOT__core__DOT__offset))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__op_out))
                                                            ? 
                                                           (4ULL 
                                                            + vlSelf->SimTop__DOT__core__DOT__pc)
                                                            : vlSelf->SimTop__DOT__core__DOT__pc)))))
                                                       : vlSelf->SimTop__DOT__core__DOT__pc))))));
    vlSelf->SimTop__DOT__core__DOT__raw_instr = ((IData)(vlSelf->SimTop__DOT__core__DOT__bubble)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 0x20U)))
                                                   ? (IData)(vlSelf->SimTop__DOT__iresp)
                                                   : 0U));
    if ((1U & vlSelf->SimTop__DOT__ireq[2U])) {
        vlSelf->SimTop__DOT__core__DOT__dataF[0U] = 
            ((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
             << 1U);
        vlSelf->SimTop__DOT__core__DOT__dataF[1U] = 
            (((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
              >> 0x1fU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                                    >> 0x20U)) << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[2U] = 
            (((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                       >> 0x20U)) >> 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__raw_instr 
                                               << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[3U] = 
            (vlSelf->SimTop__DOT__core__DOT__raw_instr 
             >> 0x1fU);
    } else {
        vlSelf->SimTop__DOT__core__DOT__dataF[0U] = 
            (1U | ((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
                   << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[1U] = 
            (((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
              >> 0x1fU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                                    >> 0x20U)) << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[2U] = 
            (((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                       >> 0x20U)) >> 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__raw_instr 
                                               << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[3U] = 
            (vlSelf->SimTop__DOT__core__DOT__raw_instr 
             >> 0x1fU);
    }
}

void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VSimTop___024root___sequent__TOP__3(vlSelf);
        VSimTop___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
}
#endif  // VL_DEBUG
