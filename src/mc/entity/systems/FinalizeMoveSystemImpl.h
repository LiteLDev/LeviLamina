#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct CollidableMobNearFlagComponent;
struct CollisionFlagComponent;
struct HorizontalCollisionFlagComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct VerticalCollisionFlagComponent;
// clang-format on

namespace FinalizeMoveSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickFinalizeMoveSystem(
    ::StrictEntityContext&                         context,
    ::AABBShapeComponent const&                    aabb,
    ::MoveRequestComponent const&                  moveRequest,
    ::OffsetsComponent const&                      offsets,
    ::StateVectorComponent&                        state,
    ::Optional<::OnGroundFlagComponent const>      onGround,
    ::Optional<::MovementAbilitiesComponent const> abilities,
    ::EntityModifier<
        ::OnGroundFlagComponent,
        ::CollisionFlagComponent,
        ::HorizontalCollisionFlagComponent,
        ::VerticalCollisionFlagComponent,
        ::CollidableMobNearFlagComponent>& mod
);
// NOLINTEND

} // namespace FinalizeMoveSystemImpl
