#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AirTravelSystem {
public:
    // prevent constructor by default
    AirTravelSystem& operator=(AirTravelSystem const&);
    AirTravelSystem(AirTravelSystem const&);
    AirTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createAirTravelSystem@AirTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAirTravelSystem();

    // NOLINTEND
};
