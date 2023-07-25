#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateServerPlayerInputSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATESERVERPLAYERINPUTSYSTEM
public:
    UpdateServerPlayerInputSystem& operator=(UpdateServerPlayerInputSystem const&) = delete;
    UpdateServerPlayerInputSystem(UpdateServerPlayerInputSystem const&)            = delete;
    UpdateServerPlayerInputSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createPlayerInputUpdateSystem\@UpdateServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerInputUpdateSystem();
    /**
     * @symbol ?createSneakUpdateSystem\@UpdateServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSneakUpdateSystem();
};
