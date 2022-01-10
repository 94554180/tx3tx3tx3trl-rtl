// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPBOX_STAGE_H_
#define _VPBOX_STAGE_H_  // guard

#include "verilated.h"

//==========

class Vpbox_stage__Syms;

//----------

VL_MODULE(Vpbox_stage) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(data_i[8],0,0);
    VL_OUT8(data_o[8],0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vpbox_stage__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpbox_stage);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vpbox_stage(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vpbox_stage();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vpbox_stage__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vpbox_stage__Syms* symsp, bool first);
  private:
    static QData _change_request(Vpbox_stage__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vpbox_stage__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vpbox_stage__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vpbox_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vpbox_stage__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
