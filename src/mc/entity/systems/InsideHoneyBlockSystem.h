#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideHoneyBlockSystem {
public:
    // prevent constructor by default
    InsideHoneyBlockSystem& operator=(InsideHoneyBlockSystem const&);
    InsideHoneyBlockSystem(InsideHoneyBlockSystem const&);
    InsideHoneyBlockSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createEventsSystem();

    // NOLINTEND
};
