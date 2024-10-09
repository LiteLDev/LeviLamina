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
    MCAPI static struct TickingSystemWithInfo createSystem(bool isClientSide);

    // NOLINTEND
};
