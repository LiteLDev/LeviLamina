#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSetWalkOrSprintFlySpeedSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSETWALKORSPRINTFLYSPEEDSYSTEM
public:
    PlayerSetWalkOrSprintFlySpeedSystem& operator=(PlayerSetWalkOrSprintFlySpeedSystem const&) = delete;
    PlayerSetWalkOrSprintFlySpeedSystem(PlayerSetWalkOrSprintFlySpeedSystem const&)            = delete;
    PlayerSetWalkOrSprintFlySpeedSystem()                                                      = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PlayerSetWalkOrSprintFlySpeedSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
