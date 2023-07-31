#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonBaseGoal {

public:
    // prevent constructor by default
    DragonBaseGoal& operator=(DragonBaseGoal const&) = delete;
    DragonBaseGoal(DragonBaseGoal const&)            = delete;
    DragonBaseGoal()                                 = delete;

public:
    // NOLINTBEGIN
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
