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
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();

    MCAPI static struct TickingSystemWithInfo createTriggerJumpSystem();

    // NOLINTEND
};
