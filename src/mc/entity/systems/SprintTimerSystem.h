#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SprintTimerSystem {

public:
    // prevent constructor by default
    SprintTimerSystem& operator=(SprintTimerSystem const&) = delete;
    SprintTimerSystem(SprintTimerSystem const&)            = delete;
    SprintTimerSystem()                                    = delete;

public:
    /**
     * @symbol ?createSprintTimerSystem\@SprintTimerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSprintTimerSystem(); // NOLINT
    /**
     * @symbol
     * ?tickSprintTimerSystem\@SprintTimerSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@$$CBUMoveInputComponent\@\@UPlayerInputRequestComponent\@\@UVanillaClientGameplayComponent\@\@\@\@\@Z
     */
    MCAPI static void tickSprintTimerSystem(class ViewT<
                                            class StrictEntityContext,
                                            class EntityRegistryBase,
                                            struct Include<
                                                class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                class FlagComponent<struct LocalPlayerComponentFlag>>,
                                            struct MoveInputComponent const,
                                            struct PlayerInputRequestComponent,
                                            struct VanillaClientGameplayComponent>); // NOLINT
};
