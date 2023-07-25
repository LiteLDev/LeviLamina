#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickEndResetSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKENDRESETSYSTEM
public:
    TickEndResetSystem& operator=(TickEndResetSystem const&) = delete;
    TickEndResetSystem(TickEndResetSystem const&)            = delete;
    TickEndResetSystem()                                     = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@TickEndResetSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
