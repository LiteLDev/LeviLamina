#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetActionStopSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETACTIONSTOPSYSTEM
public:
    ResetActionStopSystem& operator=(ResetActionStopSystem const&) = delete;
    ResetActionStopSystem(ResetActionStopSystem const&)            = delete;
    ResetActionStopSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createResetActionStopSystem\@ResetActionStopSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetActionStopSystem();
};
