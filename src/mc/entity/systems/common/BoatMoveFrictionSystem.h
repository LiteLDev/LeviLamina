#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

namespace BoatMoveFrictionSystem {
// NOLINTBEGIN
MCAPI void
boatMoveFriction(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct BoatMovementComponent&, struct StateVectorComponent&, class Optional<class BuoyancyComponent const>, class Optional<struct OnGroundFlagComponent const>, class IConstBlockSource const&);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveFrictionSystem
