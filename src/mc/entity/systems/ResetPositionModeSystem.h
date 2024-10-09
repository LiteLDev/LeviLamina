#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class ResetPositionModeSystem {
public:
    // prevent constructor by default
    ResetPositionModeSystem& operator=(ResetPositionModeSystem const&);
    ResetPositionModeSystem(ResetPositionModeSystem const&);
    ResetPositionModeSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createResetPositionModeSystem();

    MCAPI static void
    tickResetPositionModeSystem(class ViewT<
                                class StrictEntityContext,
                                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                struct PlayerPositionModeComponent> view);

    // NOLINTEND
};
