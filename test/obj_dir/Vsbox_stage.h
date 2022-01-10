// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSBOX_STAGE_H_
#define _VSBOX_STAGE_H_  // guard

#include "verilated.h"

//==========

class Vsbox_stage__Syms;

//----------

VL_MODULE(Vsbox_stage) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(data_i[8],0,0);
    VL_OUT8(data_o[8],0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ sbox_stage__DOT__data_i_0s_neg[4];
    CData/*0:0*/ sbox_stage__DOT__data_i_2s_neg[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsbox_stage__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsbox_stage);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsbox_stage(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsbox_stage();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsbox_stage__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsbox_stage__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsbox_stage__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vsbox_stage__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsbox_stage__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsbox_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsbox_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
