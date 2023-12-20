#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopGlidingIntentSystem {
public:
    // prevent constructor by default
    StopGlidingIntentSystem& operator=(StopGlidingIntentSystem const&);
    StopGlidingIntentSystem(StopGlidingIntentSystem const&);
    StopGlidingIntentSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StopGlidingIntentSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
