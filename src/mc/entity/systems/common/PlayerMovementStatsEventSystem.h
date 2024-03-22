#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

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

    // symbol:
    // ?tickPlayerMovementStatsEventSystem@PlayerMovementStatsEventSystem@@SAXV?$ViewT@VStrictEntityContext@@VActorOwnerComponent@@$$CBUPlayerPreMobTravelComponent@@$$CBUStateVectorComponent@@@@@Z
    MCAPI static void tickPlayerMovementStatsEventSystem(class ViewT<
                                                         class StrictEntityContext,
                                                         class ActorOwnerComponent,
                                                         struct PlayerPreMobTravelComponent const,
                                                         struct StateVectorComponent const> view);

    // NOLINTEND
};
