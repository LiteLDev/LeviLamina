#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

namespace SneakMovementSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo create();

MCAPI class AABB getMaxCollisionVolume(
    class Vec3 const&                  speed,
    struct MaxAutoStepComponent const& step,
    struct AABBShapeComponent const&   shape
);

MCAPI bool storeSneakStateAndReturnDoSneakMovement(
    struct ActorDataFlagComponent const&               actorData,
    class Optional<struct MoveInputComponent const>    moveInputComponent,
    class Optional<struct OnGroundFlagComponent const> onGround,
    struct MoveRequestComponent&                       moveRequest
);

MCAPI void tickSneakMovementSystem(
    struct ActorDataFlagComponent const&               actorData,
    struct AABBShapeComponent const&                   aabb,
    struct MaxAutoStepComponent const&                 maxAutoStep,
    class Optional<struct MoveInputComponent const>    moveInputComponent,
    class Optional<struct OnGroundFlagComponent const> onGround,
    struct MoveRequestComponent&                       moveRequest,
    struct StateVectorComponent&                       state
);
// NOLINTEND

}; // namespace SneakMovementSystem
