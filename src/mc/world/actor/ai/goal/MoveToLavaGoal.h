#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToLiquidGoal.h"

class MoveToLavaGoal : public ::MoveToLiquidGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLAVAGOAL
public:
    MoveToLavaGoal& operator=(MoveToLavaGoal const&) = delete;
    MoveToLavaGoal(MoveToLavaGoal const&)            = delete;
    MoveToLavaGoal()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0MoveToLavaGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI MoveToLavaGoal(class Mob&, float, int, int, int, float);
};
