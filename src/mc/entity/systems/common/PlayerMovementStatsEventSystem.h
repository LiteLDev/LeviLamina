#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementStatsEventSystem {
public:
    // prevent constructor by default
    PlayerMovementStatsEventSystem& operator=(PlayerMovementStatsEventSystem const&);
    PlayerMovementStatsEventSystem(PlayerMovementStatsEventSystem const&);
    PlayerMovementStatsEventSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PlayerMovementStatsEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
