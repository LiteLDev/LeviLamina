#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
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

struct FinalizeMoveSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::AABBShapeComponent const,
            ::MoveRequestComponent const,
            ::OffsetsComponent const,
            ::StateVectorComponent,
            ::Optional<::OnGroundFlagComponent const>,
            ::Optional<::MovementAbilitiesComponent const>> view,
        ::EntityModifier<
            ::OnGroundFlagComponent,
            ::CollisionFlagComponent,
            ::HorizontalCollisionFlagComponent,
            ::VerticalCollisionFlagComponent,
            ::CollidableMobNearFlagComponent> mod
    );
    // NOLINTEND
};
