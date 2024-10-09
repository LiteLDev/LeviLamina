#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StartGlidingActionSystem {
public:
    // prevent constructor by default
    StartGlidingActionSystem& operator=(StartGlidingActionSystem const&);
    StartGlidingActionSystem(StartGlidingActionSystem const&);
    StartGlidingActionSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem(bool isClientSide);

    // NOLINTEND
};
