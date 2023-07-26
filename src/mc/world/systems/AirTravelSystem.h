#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AirTravelSystem {

public:
    // prevent constructor by default
    AirTravelSystem& operator=(AirTravelSystem const&) = delete;
    AirTravelSystem(AirTravelSystem const&)            = delete;
    AirTravelSystem()                                  = delete;

public:
    /**
     * @symbol ?createAirTravelSystem\@AirTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirTravelSystem(); // NOLINT
};
