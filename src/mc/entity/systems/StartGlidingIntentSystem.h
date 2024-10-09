#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StartGlidingIntentSystem {
public:
    // prevent constructor by default
    StartGlidingIntentSystem& operator=(StartGlidingIntentSystem const&);
    StartGlidingIntentSystem(StartGlidingIntentSystem const&);
    StartGlidingIntentSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
