#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TriggerJumpSystem {

public:
    // prevent constructor by default
    TriggerJumpSystem& operator=(TriggerJumpSystem const&) = delete;
    TriggerJumpSystem(TriggerJumpSystem const&)            = delete;
    TriggerJumpSystem()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createCleanupSystem\@TriggerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createTriggerJumpSystem\@TriggerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTriggerJumpSystem();
    // NOLINTEND
};
