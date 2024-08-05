#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

namespace SneakMovementSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo create();

MCAPI class AABB
getMaxCollisionVolume(class Vec3 const&, struct MaxAutoStepComponent const&, struct AABBShapeComponent const&);

MCAPI bool
storeSneakStateAndReturnDoSneakMovement(struct ActorDataFlagComponent const&, class Optional<struct MoveInputComponent const>, class Optional<struct OnGroundFlagComponent const>, struct MoveRequestComponent&);

MCAPI void
tickSneakMovementSystem(struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct MaxAutoStepComponent const&, class Optional<struct MoveInputComponent const>, class Optional<struct OnGroundFlagComponent const>, struct MoveRequestComponent&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace SneakMovementSystem
