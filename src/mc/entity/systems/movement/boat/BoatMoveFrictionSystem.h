#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

namespace BoatMoveFrictionSystem {
// NOLINTBEGIN
MCAPI void boatMoveFriction(
    class StrictEntityContext const&,
    struct ActorDataFlagComponent const&               synchedActorDataComponent,
    struct BoatMovementComponent&                      boatMovementComponent,
    struct StateVectorComponent&                       stateVectorComponent,
    class Optional<class BuoyancyComponent const>      buoyancyComponent,
    class Optional<struct OnGroundFlagComponent const> isOnGround,
    class IConstBlockSource const&                     region
);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveFrictionSystem
