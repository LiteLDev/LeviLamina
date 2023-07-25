#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonBaseGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOAL
public:
    DragonBaseGoal& operator=(DragonBaseGoal const&) = delete;
    DragonBaseGoal(DragonBaseGoal const&)            = delete;
    DragonBaseGoal()                                 = delete;
#endif

public:
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
};
