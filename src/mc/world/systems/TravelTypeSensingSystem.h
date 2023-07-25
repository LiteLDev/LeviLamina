#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TravelTypeSensingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAVELTYPESENSINGSYSTEM
public:
    TravelTypeSensingSystem& operator=(TravelTypeSensingSystem const&) = delete;
    TravelTypeSensingSystem(TravelTypeSensingSystem const&)            = delete;
    TravelTypeSensingSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createTravelTypeSensingSystem\@TravelTypeSensingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTravelTypeSensingSystem();
};
