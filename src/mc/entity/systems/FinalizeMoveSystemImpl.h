#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace FinalizeMoveSystemImpl {
// NOLINTBEGIN
MCAPI void tickFinalizeMoveSystem(
    class StrictEntityContext&                              context,
    struct AABBShapeComponent const&                        aabb,
    struct MoveRequestComponent const&                      moveRequest,
    struct OffsetsComponent const&                          offsets,
    struct StateVectorComponent&                            state,
    class Optional<struct OnGroundFlagComponent const>      onGround,
    class Optional<struct MovementAbilitiesComponent const> abilities,
    class EntityModifier<
        struct OnGroundFlagComponent,
        class FlagComponent<struct CollisionFlag>,
        class FlagComponent<struct HorizontalCollisionFlag>,
        class FlagComponent<struct VerticalCollisionFlag>,
        class FlagComponent<struct CollidableMobNearFlag>>& mod
);
// NOLINTEND

}; // namespace FinalizeMoveSystemImpl
