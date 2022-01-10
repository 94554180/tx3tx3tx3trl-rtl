// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor_stage__Syms.h"


//======================

void Vxor_stage::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vxor_stage* t = (Vxor_stage*)userthis;
    Vxor_stage__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vxor_stage::traceChgThis(Vxor_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vxor_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vxor_stage::traceChgThis__2(Vxor_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vxor_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->data_i[0]));
        vcdp->chgBit(c+2,(vlTOPp->data_i[1]));
        vcdp->chgBit(c+3,(vlTOPp->data_i[2]));
        vcdp->chgBit(c+4,(vlTOPp->data_i[3]));
        vcdp->chgBit(c+5,(vlTOPp->data_i[4]));
        vcdp->chgBit(c+6,(vlTOPp->data_i[5]));
        vcdp->chgBit(c+7,(vlTOPp->data_i[6]));
        vcdp->chgBit(c+8,(vlTOPp->data_i[7]));
        vcdp->chgBit(c+65,(vlTOPp->data_o[0]));
        vcdp->chgBit(c+66,(vlTOPp->data_o[1]));
        vcdp->chgBit(c+67,(vlTOPp->data_o[2]));
        vcdp->chgBit(c+68,(vlTOPp->data_o[3]));
        vcdp->chgBit(c+69,(vlTOPp->data_o[4]));
        vcdp->chgBit(c+70,(vlTOPp->data_o[5]));
        vcdp->chgBit(c+71,(vlTOPp->data_o[6]));
        vcdp->chgBit(c+72,(vlTOPp->data_o[7]));
    }
}
