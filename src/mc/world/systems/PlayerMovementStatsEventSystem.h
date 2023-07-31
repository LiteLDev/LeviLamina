#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementStatsEventSystem {

public:
    // prevent constructor by default
    PlayerMovementStatsEventSystem& operator=(PlayerMovementStatsEventSystem const&) = delete;
    PlayerMovementStatsEventSystem(PlayerMovementStatsEventSystem const&)            = delete;
    PlayerMovementStatsEventSystem()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@PlayerMovementStatsEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
