#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

class FinalizeMoveSystem {
public:
    // prevent constructor by default
    FinalizeMoveSystem& operator=(FinalizeMoveSystem const&);
    FinalizeMoveSystem(FinalizeMoveSystem const&);
    FinalizeMoveSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            struct AABBShapeComponent const,
            struct MoveRequestComponent const,
            struct OffsetsComponent const,
            struct StateVectorComponent,
            class Optional<struct OnGroundFlagComponent const>,
            class Optional<struct MovementAbilitiesComponent const>> view,
        class EntityModifier<
            struct OnGroundFlagComponent,
            class FlagComponent<struct CollisionFlag>,
            class FlagComponent<struct HorizontalCollisionFlag>,
            class FlagComponent<struct VerticalCollisionFlag>,
            class FlagComponent<struct CollidableMobNearFlag>> mod
    );

    // NOLINTEND
};
