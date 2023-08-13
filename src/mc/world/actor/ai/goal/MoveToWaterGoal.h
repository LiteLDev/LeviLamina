#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToWaterGoal : public ::MoveToLiquidGoal {

public:
    // prevent constructor by default
    MoveToWaterGoal& operator=(MoveToWaterGoal const&) = delete;
    MoveToWaterGoal(MoveToWaterGoal const&)            = delete;
    MoveToWaterGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0MoveToWaterGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI MoveToWaterGoal(class Mob&, float, int, int, int, float);
    // NOLINTEND
};
