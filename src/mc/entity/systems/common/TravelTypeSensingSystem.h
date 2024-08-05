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
    MCAPI static struct TickingSystemWithInfo createTravelTypeSensingSystem();

    // NOLINTEND
};
