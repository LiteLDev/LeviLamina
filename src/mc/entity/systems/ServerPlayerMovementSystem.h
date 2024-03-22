#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementSystem {
public:
    // prevent constructor by default
    ServerPlayerMovementSystem& operator=(ServerPlayerMovementSystem const&);
    ServerPlayerMovementSystem(ServerPlayerMovementSystem const&);
    ServerPlayerMovementSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createClearPlayerActionComponentSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createClearPlayerActionComponentSystem();

    // symbol: ?createPostTravelSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$02@std@@XZ
    MCAPI static std::array<struct TickingSystemWithInfo, 3> createPostTravelSystems();

    // symbol: ?createServerPlayerMovementFinalSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    // symbol: ?createServerPlayerResetFallDistanceSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();

    // NOLINTEND
};
