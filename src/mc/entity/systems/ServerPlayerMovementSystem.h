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
    // symbol: ?_createCheckCheatingSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo _createCheckCheatingSystem(bool);

    // symbol:
    // ?_updateFallDistance@ServerPlayerMovementSystem@@SAXAEBUServerPlayerCurrentMovementComponent@@AEBUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
    MCAPI static void
    _updateFallDistance(struct ServerPlayerCurrentMovementComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&);

    // symbol: ?createClearPlayerActionComponentSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createClearPlayerActionComponentSystem();

    // symbol: ?createPostTravelSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$03@std@@_N@Z
    MCAPI static std::array<struct TickingSystemWithInfo, 4> createPostTravelSystems(bool);

    // symbol: ?createServerPlayerMovementFinalSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    // symbol: ?createServerPlayerResetFallDistanceSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();

    // NOLINTEND
};
