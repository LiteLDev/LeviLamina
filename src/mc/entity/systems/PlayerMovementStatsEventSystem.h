#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

class PlayerMovementStatsEventSystem {
public:
    // prevent constructor by default
    PlayerMovementStatsEventSystem& operator=(PlayerMovementStatsEventSystem const&);
    PlayerMovementStatsEventSystem(PlayerMovementStatsEventSystem const&);
    PlayerMovementStatsEventSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickPlayerMovementStatsEventSystem(class ViewT<
                                                         class StrictEntityContext,
                                                         class ActorOwnerComponent,
                                                         struct PlayerPreMobTravelComponent const,
                                                         struct StateVectorComponent const> view);

    // NOLINTEND
};
