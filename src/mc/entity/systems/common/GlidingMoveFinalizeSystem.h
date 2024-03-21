#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class GlidingMoveFinalizeSystem {
public:
    // prevent constructor by default
    GlidingMoveFinalizeSystem& operator=(GlidingMoveFinalizeSystem const&);
    GlidingMoveFinalizeSystem(GlidingMoveFinalizeSystem const&);
    GlidingMoveFinalizeSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_tickCollisionDamageCalculate@GlidingMoveFinalizeSystem@@SAXAEBVStrictEntityContext@@AEBUMobTravelComponent@@AEBUStateVectorComponent@@AEAV?$EntityModifier@UGlidingCollisionDamageComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void _tickCollisionDamageCalculate(
        class StrictEntityContext const& entity,
        struct MobTravelComponent const&,
        struct StateVectorComponent const&,
        class EntityModifier<struct GlidingCollisionDamageComponent>& modifier,
        class IConstBlockSource const&                                region
    );

    // symbol:
    // ?_tickCollisionDamageHurt@GlidingMoveFinalizeSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEBUGlidingCollisionDamageComponent@@@Z
    MCAPI static void
    _tickCollisionDamageHurt(class StrictEntityContext&, class ActorOwnerComponent&, struct GlidingCollisionDamageComponent const&);

    // symbol: ?createCollisionDamageCalculateSystem@GlidingMoveFinalizeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCollisionDamageCalculateSystem();

    // symbol: ?createCollisionDamageHurtSystem@GlidingMoveFinalizeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCollisionDamageHurtSystem();

    // symbol:
    // ?tickCollisionDamageHurt@GlidingMoveFinalizeSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@VActorOwnerComponent@@$$CBUGlidingCollisionDamageComponent@@@@V?$EntityModifier@UGlidingCollisionDamageComponent@@@@@Z
    MCAPI static void tickCollisionDamageHurt(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct MobFlag>>,
            class ActorOwnerComponent,
            struct GlidingCollisionDamageComponent const>            view,
        class EntityModifier<struct GlidingCollisionDamageComponent> modifier
    );

    // NOLINTEND
};
