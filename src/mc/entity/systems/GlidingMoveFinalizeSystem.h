#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class GlidingMoveFinalizeSystem {
public:
    // prevent constructor by default
    GlidingMoveFinalizeSystem& operator=(GlidingMoveFinalizeSystem const&);
    GlidingMoveFinalizeSystem(GlidingMoveFinalizeSystem const&);
    GlidingMoveFinalizeSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _tickCollisionDamageCalculate(
        class StrictEntityContext const&                              entity,
        struct MobTravelComponent const&                              mobTravelComponent,
        struct StateVectorComponent const&                            stateVectorComponent,
        class EntityModifier<struct GlidingCollisionDamageComponent>& modifier,
        class IConstBlockSource const&                                region
    );

    MCAPI static void _tickCollisionDamageHurt(
        class StrictEntityContext&,
        class ActorOwnerComponent&                    actorOwnerComponent,
        struct GlidingCollisionDamageComponent const& glidingCollisionDamageComponent
    );

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
