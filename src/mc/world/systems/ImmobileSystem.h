#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class ImmobileSystem {

public:
    // prevent constructor by default
    ImmobileSystem& operator=(ImmobileSystem const&) = delete;
    ImmobileSystem(ImmobileSystem const&)            = delete;
    ImmobileSystem()                                 = delete;

public:
    /**
     * @symbol ?createSystem\@ImmobileSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol
     * ?tickImmobileSystem\@ImmobileSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UMobIsImmobileFlag\@\@\@\@\@\@ULocalMoveVelocityComponent\@\@UMobRotationComponent\@\@UStateVectorComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickImmobileSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct MobIsImmobileFlag>>, struct LocalMoveVelocityComponent, struct MobRotationComponent, struct StateVectorComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsJumpingFlag>>); // NOLINT

    // private:
    /**
     * @symbol
     * ?doImmobileSystem\@ImmobileSystem\@\@CAXAEBVStrictEntityContext\@\@AEAULocalMoveVelocityComponent\@\@AEAUMobRotationComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    doImmobileSystem(class StrictEntityContext const&, struct LocalMoveVelocityComponent&, struct MobRotationComponent&, struct StateVectorComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsJumpingFlag>>); // NOLINT

private:
};
