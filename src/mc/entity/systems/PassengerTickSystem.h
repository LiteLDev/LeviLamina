#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PassengerTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERTICKSYSTEM
public:
    PassengerTickSystem& operator=(PassengerTickSystem const&) = delete;
    PassengerTickSystem(PassengerTickSystem const&)            = delete;
    PassengerTickSystem()                                      = delete;
#endif

public:
    /**
     * @symbol ?createMobPostPassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem();
    /**
     * @symbol ?createPlayerPostPassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem();
    /**
     * @symbol ?createPlayerPrePassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPrePassengerTickSystem();
};
