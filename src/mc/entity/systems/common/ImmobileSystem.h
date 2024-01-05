#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class ImmobileSystem {
public:
    // prevent constructor by default
    ImmobileSystem& operator=(ImmobileSystem const&);
    ImmobileSystem(ImmobileSystem const&);
    ImmobileSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ImmobileSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tickImmobileSystem@ImmobileSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMobIsImmobileFlag@@@@@@ULocalMoveVelocityComponent@@UMobRotationComponent@@UStateVectorComponent@@@@V?$EntityModifier@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
    MCAPI static void tickImmobileSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct MobIsImmobileFlag>>,
            struct LocalMoveVelocityComponent,
            struct MobRotationComponent,
            struct StateVectorComponent>                                   view,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?doImmobileSystem@ImmobileSystem@@CAXAEBVStrictEntityContext@@AEAULocalMoveVelocityComponent@@AEAUMobRotationComponent@@AEAUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@Z
    MCAPI static void doImmobileSystem(
        class StrictEntityContext const& context,
        struct LocalMoveVelocityComponent&,
        struct MobRotationComponent&,
        struct StateVectorComponent&,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};
