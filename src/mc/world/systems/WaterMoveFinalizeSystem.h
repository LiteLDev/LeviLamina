#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMoveFinalizeSystem {
public:
    // prevent constructor by default
    WaterMoveFinalizeSystem& operator=(WaterMoveFinalizeSystem const&);
    WaterMoveFinalizeSystem(WaterMoveFinalizeSystem const&);
    WaterMoveFinalizeSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createWaterMoveFinalizeSystem@WaterMoveFinalizeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createWaterMoveFinalizeSystem();

    // NOLINTEND
};
