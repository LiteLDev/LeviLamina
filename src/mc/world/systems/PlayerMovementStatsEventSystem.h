#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementStatsEventSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTSTATSEVENTSYSTEM
public:
    PlayerMovementStatsEventSystem& operator=(PlayerMovementStatsEventSystem const&) = delete;
    PlayerMovementStatsEventSystem(PlayerMovementStatsEventSystem const&)            = delete;
    PlayerMovementStatsEventSystem()                                                 = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PlayerMovementStatsEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
