#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ActorUpdatePreviousPositionSystem {

public:
    // prevent constructor by default
    ActorUpdatePreviousPositionSystem& operator=(ActorUpdatePreviousPositionSystem const&) = delete;
    ActorUpdatePreviousPositionSystem(ActorUpdatePreviousPositionSystem const&)            = delete;
    ActorUpdatePreviousPositionSystem()                                                    = delete;

public:
    /**
     * @symbol ?create\@ActorUpdatePreviousPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol
     * ?tickSystem\@ActorUpdatePreviousPositionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void tickSystem(class ViewT<
                                 class StrictEntityContext,
                                 class EntityRegistryBase,
                                 struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                 class ActorOwnerComponent>); // NOLINT
};
