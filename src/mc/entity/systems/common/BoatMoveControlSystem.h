#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/enums/Side.h"

namespace BoatMoveControlSystem {
// NOLINTBEGIN
MCAPI void _paddleControl(struct BoatMovementComponent const&, struct Paddle&, ::Side, class Vec3&, class Vec3&);

MCAPI void boatControl(class StrictEntityContext const&, struct BoatMovementComponent&, struct BoatPaddleComponent&, struct StateVectorComponent&, struct ActorRotationComponent&, class Optional<struct OnGroundFlagComponent const>, class Optional<struct VehicleInputIntentComponent const>, class EntityModifier<struct RemoveAllPassengersRequestComponent>, class IConstBlockSource const&);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveControlSystem
