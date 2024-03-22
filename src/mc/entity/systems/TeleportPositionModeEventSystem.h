#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class TeleportPositionModeEventSystem {
public:
    // prevent constructor by default
    TeleportPositionModeEventSystem& operator=(TeleportPositionModeEventSystem const&);
    TeleportPositionModeEventSystem(TeleportPositionModeEventSystem const&);
    TeleportPositionModeEventSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createTeleportPositionModeEventSystem@TeleportPositionModeEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createTeleportPositionModeEventSystem();

    // symbol:
    // ?tickTeleportPositionModeEventSystem@TeleportPositionModeEventSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@VActorOwnerComponent@@$$CBUPlayerPositionModeComponent@@@@@Z
    MCAPI static void tickTeleportPositionModeEventSystem(class ViewT<
                                                          class StrictEntityContext,
                                                          struct Include<
                                                              class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                              class FlagComponent<struct PlayerComponentFlag>>,
                                                          class ActorOwnerComponent,
                                                          struct PlayerPositionModeComponent const> view);

    // NOLINTEND
};
