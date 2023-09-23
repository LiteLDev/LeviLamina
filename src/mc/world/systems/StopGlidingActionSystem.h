#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopGlidingActionSystem {
public:
    // prevent constructor by default
    StopGlidingActionSystem& operator=(StopGlidingActionSystem const&);
    StopGlidingActionSystem(StopGlidingActionSystem const&);
    StopGlidingActionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StopGlidingActionSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    // NOLINTEND
};
