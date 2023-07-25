#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HorsePreTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEPRETRAVELSYSTEM
public:
    HorsePreTravelSystem& operator=(HorsePreTravelSystem const&) = delete;
    HorsePreTravelSystem(HorsePreTravelSystem const&)            = delete;
    HorsePreTravelSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createHorsePreTravelSystem\@HorsePreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createHorsePreTravelSystem();
};
