#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideWaterlilyBlockSystem {
public:
    // prevent constructor by default
    InsideWaterlilyBlockSystem& operator=(InsideWaterlilyBlockSystem const&);
    InsideWaterlilyBlockSystem(InsideWaterlilyBlockSystem const&);
    InsideWaterlilyBlockSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createDestroyWaterlilySystem();

    // NOLINTEND
};
