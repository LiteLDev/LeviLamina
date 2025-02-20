#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct MaxAutoStepComponent;
struct MoveInputComponent;
struct MoveRequestComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace SneakMovementSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create();

MCAPI bool storeSneakStateAndReturnDoSneakMovement(
    ::ActorDataFlagComponent const&           actorData,
    ::Optional<::MoveInputComponent const>    moveInputComponent,
    ::Optional<::OnGroundFlagComponent const> onGround,
    ::MoveRequestComponent&                   moveRequest
);

MCAPI void tickSneakMovementSystem(
    ::ActorDataFlagComponent const&           actorData,
    ::AABBShapeComponent const&               aabb,
    ::MaxAutoStepComponent const&             maxAutoStep,
    ::Optional<::MoveInputComponent const>    moveInputComponent,
    ::Optional<::OnGroundFlagComponent const> onGround,
    ::MoveRequestComponent&                   moveRequest,
    ::StateVectorComponent&                   state
);
// NOLINTEND

} // namespace SneakMovementSystem
