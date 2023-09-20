/**
 * @file  MoveToWaterGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveToLiquidGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToWaterGoal.
 *
 */
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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0MoveToWaterGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI MoveToWaterGoal(class Mob &, float, int, int, int, float);

};
