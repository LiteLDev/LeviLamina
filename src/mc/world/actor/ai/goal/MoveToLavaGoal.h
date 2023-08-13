#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToLavaGoal : public ::MoveToLiquidGoal {

public:
    // prevent constructor by default
    MoveToLavaGoal& operator=(MoveToLavaGoal const&) = delete;
    MoveToLavaGoal(MoveToLavaGoal const&)            = delete;
    MoveToLavaGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0MoveToLavaGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI MoveToLavaGoal(class Mob&, float, int, int, int, float);
    // NOLINTEND
};
