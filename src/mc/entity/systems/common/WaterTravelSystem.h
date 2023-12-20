#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterTravelSystem {
public:
    // prevent constructor by default
    WaterTravelSystem& operator=(WaterTravelSystem const&);
    WaterTravelSystem(WaterTravelSystem const&);
    WaterTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createWaterTravelSystem@WaterTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem();

    // NOLINTEND
};
