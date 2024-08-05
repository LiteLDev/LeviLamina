#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMoveSystem {
public:
    // prevent constructor by default
    WaterMoveSystem& operator=(WaterMoveSystem const&);
    WaterMoveSystem(WaterMoveSystem const&);
    WaterMoveSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createWaterMoveSystem();

    // NOLINTEND
};
