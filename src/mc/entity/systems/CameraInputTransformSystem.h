#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
struct ActorHeadRotationComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ControlSchemeComponent;
struct MoveInputComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace CameraInputTransformSystem {
// functions
// NOLINTBEGIN
MCAPI void _tick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::MoveInputComponent&         moveInputComponent,
    ::ControlSchemeComponent&     controlSchemeComponent,
    ::ActorRotationComponent&     actorRotationComponent,
    ::ActorHeadRotationComponent& actorHeadRotationComponent
);

MCAPI ::TickingSystemWithInfo create();

MCAPI float getWorldYawInDegrees(::Vec2 const& orientation);

MCAPI float getWorldYawInDegrees(::Vec3 const& orientation);
// NOLINTEND

} // namespace CameraInputTransformSystem
