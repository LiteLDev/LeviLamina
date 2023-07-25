#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TriggerJumpSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIGGERJUMPSYSTEM
public:
    TriggerJumpSystem& operator=(TriggerJumpSystem const&) = delete;
    TriggerJumpSystem(TriggerJumpSystem const&)            = delete;
    TriggerJumpSystem()                                    = delete;
#endif

public:
    /**
     * @symbol ?createCleanupSystem\@TriggerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createTriggerJumpSystem\@TriggerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTriggerJumpSystem();
};
