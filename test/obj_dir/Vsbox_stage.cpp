// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsbox_stage.h for the primary calling header

#include "Vsbox_stage.h"
#include "Vsbox_stage__Syms.h"

//==========

VL_CTOR_IMP(Vsbox_stage) {
    Vsbox_stage__Syms* __restrict vlSymsp = __VlSymsp = new Vsbox_stage__Syms(this, name());
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsbox_stage::__Vconfigure(Vsbox_stage__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsbox_stage::~Vsbox_stage() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vsbox_stage::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsbox_stage::eval\n"); );
    Vsbox_stage__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sbox_stage.sv", 20, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsbox_stage::_eval_initial_loop(Vsbox_stage__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sbox_stage.sv", 20, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsbox_stage::_combo__TOP__1(Vsbox_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_combo__TOP__1\n"); );
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_o[7U] = (vlTOPp->data_i[6U] & vlTOPp->data_i
                          [7U]);
    vlTOPp->sbox_stage__DOT__data_i_2s_neg[0U] = (1U 
                                                  & (~ 
                                                     vlTOPp->data_i
                                                     [2U]));
    vlTOPp->sbox_stage__DOT__data_i_2s_neg[1U] = (1U 
                                                  & (~ 
                                                     vlTOPp->data_i
                                                     [5U]));
    vlTOPp->sbox_stage__DOT__data_i_0s_neg[0U] = (1U 
                                                  & (~ 
                                                     vlTOPp->data_i
                                                     [0U]));
    vlTOPp->sbox_stage__DOT__data_i_0s_neg[1U] = (1U 
                                                  & (~ 
                                                     vlTOPp->data_i
                                                     [3U]));
    vlTOPp->sbox_stage__DOT__data_i_0s_neg[2U] = (1U 
                                                  & (~ 
                                                     vlTOPp->data_i
                                                     [6U]));
    vlTOPp->data_o[1U] = (((vlTOPp->data_i[0U] & vlTOPp->data_i
                            [1U]) | (vlTOPp->data_i
                                     [0U] & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                                     [0U])) | (vlTOPp->data_i
                                               [1U] 
                                               & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                                               [0U]));
    vlTOPp->data_o[4U] = (((vlTOPp->data_i[3U] & vlTOPp->data_i
                            [4U]) | (vlTOPp->data_i
                                     [3U] & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                                     [1U])) | (vlTOPp->data_i
                                               [4U] 
                                               & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                                               [1U]));
    vlTOPp->data_o[0U] = (((vlTOPp->sbox_stage__DOT__data_i_0s_neg
                            [0U] & vlTOPp->data_i[1U]) 
                           | (vlTOPp->sbox_stage__DOT__data_i_0s_neg
                              [0U] & vlTOPp->data_i
                              [2U])) | (vlTOPp->data_i
                                        [1U] & vlTOPp->data_i
                                        [2U]));
    vlTOPp->data_o[3U] = (((vlTOPp->sbox_stage__DOT__data_i_0s_neg
                            [1U] & vlTOPp->data_i[4U]) 
                           | (vlTOPp->sbox_stage__DOT__data_i_0s_neg
                              [1U] & vlTOPp->data_i
                              [5U])) | (vlTOPp->data_i
                                        [4U] & vlTOPp->data_i
                                        [5U]));
    vlTOPp->data_o[6U] = (vlTOPp->sbox_stage__DOT__data_i_0s_neg
                          [2U] & vlTOPp->data_i[7U]);
    vlTOPp->data_o[2U] = (((vlTOPp->sbox_stage__DOT__data_i_0s_neg
                            [0U] & vlTOPp->data_i[1U]) 
                           | (vlTOPp->sbox_stage__DOT__data_i_0s_neg
                              [0U] & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                              [0U])) | (vlTOPp->data_i
                                        [1U] & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                                        [0U]));
    vlTOPp->data_o[5U] = (((vlTOPp->sbox_stage__DOT__data_i_0s_neg
                            [1U] & vlTOPp->data_i[4U]) 
                           | (vlTOPp->sbox_stage__DOT__data_i_0s_neg
                              [1U] & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                              [1U])) | (vlTOPp->data_i
                                        [4U] & vlTOPp->sbox_stage__DOT__data_i_2s_neg
                                        [1U]));
}

void Vsbox_stage::_eval(Vsbox_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_eval\n"); );
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vsbox_stage::_eval_initial(Vsbox_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_eval_initial\n"); );
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsbox_stage::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::final\n"); );
    // Variables
    Vsbox_stage__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsbox_stage::_eval_settle(Vsbox_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_eval_settle\n"); );
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vsbox_stage::_change_request(Vsbox_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_change_request\n"); );
    Vsbox_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsbox_stage::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

void Vsbox_stage::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsbox_stage::_ctor_var_reset\n"); );
    // Body
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            data_i[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            data_o[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            sbox_stage__DOT__data_i_0s_neg[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            sbox_stage__DOT__data_i_2s_neg[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
