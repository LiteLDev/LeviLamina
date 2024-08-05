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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
