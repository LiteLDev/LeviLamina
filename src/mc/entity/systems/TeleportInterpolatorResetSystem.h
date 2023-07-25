#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class TeleportInterpolatorResetSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTINTERPOLATORRESETSYSTEM
public:
    TeleportInterpolatorResetSystem& operator=(TeleportInterpolatorResetSystem const&) = delete;
    TeleportInterpolatorResetSystem(TeleportInterpolatorResetSystem const&)            = delete;
    TeleportInterpolatorResetSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?createTeleportInterpolatorResetSystem\@TeleportInterpolatorResetSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTeleportInterpolatorResetSystem();
    /**
     * @symbol
     * ?tickTeleportInterpolatorResetSystem\@TeleportInterpolatorResetSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UServerPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@UMovementInterpolatorComponent\@\@\@\@$$CBUPlayerPositionModeComponent\@\@UFallDistanceComponent\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void tickTeleportInterpolatorResetSystem(class ViewT<
                                                          class StrictEntityContext,
                                                          class EntityRegistryBase,
                                                          struct Include<
                                                              class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                              class FlagComponent<struct ServerPlayerComponentFlag>>,
                                                          class Optional<struct MovementInterpolatorComponent>,
                                                          struct PlayerPositionModeComponent const,
                                                          struct FallDistanceComponent,
                                                          struct StateVectorComponent>);
};
