#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TriggerJumpSystem {
public:
    // prevent constructor by default
    TriggerJumpSystem& operator=(TriggerJumpSystem const&);
    TriggerJumpSystem(TriggerJumpSystem const&);
    TriggerJumpSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createCleanupSystem@TriggerJumpSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();

    // symbol: ?createTriggerJumpSystem@TriggerJumpSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createTriggerJumpSystem();

    // NOLINTEND
};
