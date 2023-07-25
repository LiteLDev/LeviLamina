#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerResetMovementSpeedSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESETMOVEMENTSPEEDSYSTEM
public:
    PlayerResetMovementSpeedSystem& operator=(PlayerResetMovementSpeedSystem const&) = delete;
    PlayerResetMovementSpeedSystem(PlayerResetMovementSpeedSystem const&)            = delete;
    PlayerResetMovementSpeedSystem()                                                 = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PlayerResetMovementSpeedSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
