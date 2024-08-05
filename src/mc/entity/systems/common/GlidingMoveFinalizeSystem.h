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
    MCAPI static void _tickCollisionDamageCalculate(
        class StrictEntityContext const& entity,
        struct MobTravelComponent const&,
        struct StateVectorComponent const&,
        class EntityModifier<struct GlidingCollisionDamageComponent>& modifier,
        class IConstBlockSource const&                                region
    );

    MCAPI static void
    _tickCollisionDamageHurt(class StrictEntityContext&, class ActorOwnerComponent&, struct GlidingCollisionDamageComponent const&);

    MCAPI static struct TickingSystemWithInfo createCollisionDamageCalculateSystem();

    MCAPI static struct TickingSystemWithInfo createCollisionDamageHurtSystem();

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
