#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TravelTypeSensingSystem {

public:
    // prevent constructor by default
    TravelTypeSensingSystem& operator=(TravelTypeSensingSystem const&) = delete;
    TravelTypeSensingSystem(TravelTypeSensingSystem const&)            = delete;
    TravelTypeSensingSystem()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createTravelTypeSensingSystem\@TravelTypeSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTravelTypeSensingSystem();
    // NOLINTEND
};
