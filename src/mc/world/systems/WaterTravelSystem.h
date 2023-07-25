#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERTRAVELSYSTEM
public:
    WaterTravelSystem& operator=(WaterTravelSystem const&) = delete;
    WaterTravelSystem(WaterTravelSystem const&)            = delete;
    WaterTravelSystem()                                    = delete;
#endif

public:
    /**
     * @symbol ?createWaterTravelSystem\@WaterTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterTravelSystem();
};
