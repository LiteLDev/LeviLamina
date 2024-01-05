#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class TeleportInterpolatorResetSystem {
public:
    // prevent constructor by default
    TeleportInterpolatorResetSystem& operator=(TeleportInterpolatorResetSystem const&);
    TeleportInterpolatorResetSystem(TeleportInterpolatorResetSystem const&);
    TeleportInterpolatorResetSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createTeleportInterpolatorResetSystem@TeleportInterpolatorResetSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createTeleportInterpolatorResetSystem();

    // symbol:
    // ?tickTeleportInterpolatorResetSystem@TeleportInterpolatorResetSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UServerPlayerComponentFlag@@@@@@V?$Optional@UMovementInterpolatorComponent@@@@$$CBUPlayerPositionModeComponent@@UFallDistanceComponent@@UStateVectorComponent@@@@@Z
    MCAPI static void tickTeleportInterpolatorResetSystem(class ViewT<
                                                          class StrictEntityContext,
                                                          struct Include<
                                                              class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                              class FlagComponent<struct ServerPlayerComponentFlag>>,
                                                          class Optional<struct MovementInterpolatorComponent>,
                                                          struct PlayerPositionModeComponent const,
                                                          struct FallDistanceComponent,
                                                          struct StateVectorComponent> view);

    // NOLINTEND
};
