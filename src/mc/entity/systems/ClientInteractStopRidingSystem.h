#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientInteractStopRidingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTINTERACTSTOPRIDINGSYSTEM
public:
    ClientInteractStopRidingSystem& operator=(ClientInteractStopRidingSystem const&) = delete;
    ClientInteractStopRidingSystem(ClientInteractStopRidingSystem const&)            = delete;
    ClientInteractStopRidingSystem()                                                 = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ClientInteractStopRidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
