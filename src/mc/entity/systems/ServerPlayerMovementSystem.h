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
    MCAPI static struct TickingSystemWithInfo createClearPlayerActionComponentSystem();

    MCAPI static std::array<struct TickingSystemWithInfo, 3> createPostTravelSystems();

    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    MCAPI static struct TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();

    // NOLINTEND
};
