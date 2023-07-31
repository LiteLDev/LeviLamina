#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSetWalkOrSprintFlySpeedSystem {

public:
    // prevent constructor by default
    PlayerSetWalkOrSprintFlySpeedSystem& operator=(PlayerSetWalkOrSprintFlySpeedSystem const&) = delete;
    PlayerSetWalkOrSprintFlySpeedSystem(PlayerSetWalkOrSprintFlySpeedSystem const&)            = delete;
    PlayerSetWalkOrSprintFlySpeedSystem()                                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@PlayerSetWalkOrSprintFlySpeedSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
