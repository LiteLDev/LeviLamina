#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonBaseGoal : public ::Goal {

public:
    // prevent constructor by default
    DragonBaseGoal& operator=(DragonBaseGoal const&) = delete;
    DragonBaseGoal(DragonBaseGoal const&)            = delete;
    DragonBaseGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONBASEGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DragonBaseGoal();
#endif
    /**
     * @symbol ??0DragonBaseGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DragonBaseGoal(class Mob&);
    // NOLINTEND
};
