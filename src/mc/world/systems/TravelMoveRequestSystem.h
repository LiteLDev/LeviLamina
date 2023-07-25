#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TravelMoveRequestSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAVELMOVEREQUESTSYSTEM
public:
    TravelMoveRequestSystem& operator=(TravelMoveRequestSystem const&) = delete;
    TravelMoveRequestSystem(TravelMoveRequestSystem const&)            = delete;
    TravelMoveRequestSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@TravelMoveRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
