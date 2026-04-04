#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct PlayerComponent;
// clang-format on

namespace PlayerResetMovementSpeedSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void _doPlayerResetMovementSpeedSystem(
    ::MovementAttributesComponent const& attributesComponent,
    ::MovementSpeedComponent&            movementSpeedComponent
);

MCAPI void _tickPlayerResetMovementSpeedSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>,
        ::MovementAttributesComponent const,
        ::MovementSpeedComponent> view
);
// NOLINTEND

} // namespace PlayerResetMovementSpeedSystemImpl
