#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class UpdateMovingFlagSystem {

public:
    // prevent constructor by default
    UpdateMovingFlagSystem& operator=(UpdateMovingFlagSystem const&) = delete;
    UpdateMovingFlagSystem(UpdateMovingFlagSystem const&)            = delete;
    UpdateMovingFlagSystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createUpdateMovingFlagSystem\@UpdateMovingFlagSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateMovingFlagSystem();
    /**
     * @symbol
     * ?tickUpdateMovingFlagSystem\@UpdateMovingFlagSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMovingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickUpdateMovingFlagSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, class ActorOwnerComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MovingFlag>>);
    // NOLINTEND
};
