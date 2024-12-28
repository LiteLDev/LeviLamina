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
struct TickingSystemWithInfo;
struct VerticalCollisionFlagComponent;
// clang-format on

struct FinalizeMoveSystem {
public:
    // prevent constructor by default
    FinalizeMoveSystem& operator=(FinalizeMoveSystem const&);
    FinalizeMoveSystem(FinalizeMoveSystem const&);
    FinalizeMoveSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();

    MCAPI static void tick(
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
