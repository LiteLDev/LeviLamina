#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerResetMovementSpeedSystem {

public:
    // prevent constructor by default
    PlayerResetMovementSpeedSystem& operator=(PlayerResetMovementSpeedSystem const&) = delete;
    PlayerResetMovementSpeedSystem(PlayerResetMovementSpeedSystem const&)            = delete;
    PlayerResetMovementSpeedSystem()                                                 = delete;

public:
    /**
     * @symbol ?createSystem\@PlayerResetMovementSpeedSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
