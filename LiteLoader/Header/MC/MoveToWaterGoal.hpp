// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToLiquidGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveToWaterGoal : public MoveToLiquidGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWATERGOAL
public:
    class MoveToWaterGoal& operator=(class MoveToWaterGoal const &) = delete;
    MoveToWaterGoal(class MoveToWaterGoal const &) = delete;
    MoveToWaterGoal() = delete;
#endif

public:
    /*0*/ virtual ~MoveToWaterGoal();
    /*3*/ virtual void __unk_vfn_3();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOWATERGOAL
public:
#endif
    MCAPI MoveToWaterGoal(class Mob &, float, int, int, int, float);



};