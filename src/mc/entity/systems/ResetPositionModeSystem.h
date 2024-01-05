#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetPositionModeSystem {
public:
    // prevent constructor by default
    ResetPositionModeSystem& operator=(ResetPositionModeSystem const&);
    ResetPositionModeSystem(ResetPositionModeSystem const&);
    ResetPositionModeSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createResetPositionModeSystem@ResetPositionModeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createResetPositionModeSystem();

    // symbol:
    // ?tickResetPositionModeSystem@ResetPositionModeSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@UPlayerPositionModeComponent@@@@@Z
    MCAPI static void
    tickResetPositionModeSystem(class ViewT<
                                class StrictEntityContext,
                                struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                struct PlayerPositionModeComponent> view);

    // NOLINTEND
};
