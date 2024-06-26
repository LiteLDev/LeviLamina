#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

namespace SneakMovementSystem {
// NOLINTBEGIN
// symbol: ?create@SneakMovementSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo create();

// symbol:
// ?getMaxCollisionVolume@SneakMovementSystem@@YA?AVAABB@@AEBVVec3@@AEBUMaxAutoStepComponent@@AEBUAABBShapeComponent@@@Z
MCAPI class AABB
getMaxCollisionVolume(class Vec3 const&, struct MaxAutoStepComponent const&, struct AABBShapeComponent const&);

// symbol:
// ?storeSneakStateAndReturnDoSneakMovement@SneakMovementSystem@@YA_NAEBUActorDataFlagComponent@@V?$Optional@$$CBUMoveInputComponent@@@@V?$Optional@$$CBUOnGroundFlagComponent@@@@AEAUMoveRequestComponent@@@Z
MCAPI bool
storeSneakStateAndReturnDoSneakMovement(struct ActorDataFlagComponent const&, class Optional<struct MoveInputComponent const>, class Optional<struct OnGroundFlagComponent const>, struct MoveRequestComponent&);

// symbol:
// ?tickSneakMovementSystem@SneakMovementSystem@@YAXAEBUActorDataFlagComponent@@AEBUAABBShapeComponent@@AEBUMaxAutoStepComponent@@V?$Optional@$$CBUMoveInputComponent@@@@V?$Optional@$$CBUOnGroundFlagComponent@@@@AEAUMoveRequestComponent@@AEAUStateVectorComponent@@@Z
MCAPI void
tickSneakMovementSystem(struct ActorDataFlagComponent const&, struct AABBShapeComponent const&, struct MaxAutoStepComponent const&, class Optional<struct MoveInputComponent const>, class Optional<struct OnGroundFlagComponent const>, struct MoveRequestComponent&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace SneakMovementSystem
