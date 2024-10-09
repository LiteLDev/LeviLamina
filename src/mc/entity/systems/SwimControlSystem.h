#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SwimControlSystem {
public:
    // prevent constructor by default
    SwimControlSystem& operator=(SwimControlSystem const&);
    SwimControlSystem(SwimControlSystem const&);
    SwimControlSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
