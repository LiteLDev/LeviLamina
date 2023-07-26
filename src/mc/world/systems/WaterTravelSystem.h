#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterTravelSystem {

public:
    // prevent constructor by default
    WaterTravelSystem& operator=(WaterTravelSystem const&) = delete;
    WaterTravelSystem(WaterTravelSystem const&)            = delete;
    WaterTravelSystem()                                    = delete;

public:
    /**
     * @symbol ?createWaterTravelSystem\@WaterTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem(); // NOLINT
};
