#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TravelTypeSensingSystem {
public:
    // prevent constructor by default
    TravelTypeSensingSystem& operator=(TravelTypeSensingSystem const&);
    TravelTypeSensingSystem(TravelTypeSensingSystem const&);
    TravelTypeSensingSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createTravelTypeSensingSystem@TravelTypeSensingSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createTravelTypeSensingSystem();

    // NOLINTEND
};
