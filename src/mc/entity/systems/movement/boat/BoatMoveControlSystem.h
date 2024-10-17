#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Side.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace BoatMoveControlSystem {
// NOLINTBEGIN
MCAPI void _paddleControl(
    struct BoatMovementComponent const& boatMovementComponent,
    struct Paddle&                      paddle,
    ::Side                              side,
    class Vec3&                         force,
    class Vec3&                         torque
);

MCAPI void boatControl(
    class StrictEntityContext const&                                 entity,
    struct BoatMovementComponent&                                    boatMovementComponent,
    struct BoatPaddleComponent&                                      boatPaddleComponent,
    struct StateVectorComponent&                                     stateVectorComponent,
    struct ActorRotationComponent&                                   actorRotationComponent,
    class Optional<struct OnGroundFlagComponent const>               isOnGround,
    class Optional<struct VehicleInputIntentComponent const>         vehicleInputIntentComponent,
    class EntityModifier<struct RemoveAllPassengersRequestComponent> mod,
    class IConstBlockSource const&                                   region
);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveControlSystem
