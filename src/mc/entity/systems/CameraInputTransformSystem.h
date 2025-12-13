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
MCNAPI void _tick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::MoveInputComponent&         moveInputComponent,
    ::ControlSchemeComponent&     controlSchemeComponent,
    ::ActorRotationComponent&     actorRotationComponent,
    ::ActorHeadRotationComponent& actorHeadRotationComponent
);

MCNAPI ::TickingSystemWithInfo create();

MCNAPI float getWorldYawInDegrees(::Vec2 const& orientation);

MCNAPI float getWorldYawInDegrees(::Vec3 const& orientation);
// NOLINTEND

} // namespace CameraInputTransformSystem
