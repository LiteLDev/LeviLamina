#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AirTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRTRAVELSYSTEM
public:
    AirTravelSystem& operator=(AirTravelSystem const&) = delete;
    AirTravelSystem(AirTravelSystem const&)            = delete;
    AirTravelSystem()                                  = delete;
#endif

public:
    /**
     * @symbol ?createAirTravelSystem\@AirTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirTravelSystem();
};
