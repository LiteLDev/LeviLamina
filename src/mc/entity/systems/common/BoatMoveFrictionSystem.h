#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"

namespace BoatMoveFrictionSystem {
// NOLINTBEGIN
// symbol:
// ?boatMoveFriction@BoatMoveFrictionSystem@@YAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@AEAUBoatMovementComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBVBuoyancyComponent@@@@V?$Optional@$$CBUOnGroundFlagComponent@@@@AEBVIConstBlockSource@@@Z
MCAPI void
boatMoveFriction(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct BoatMovementComponent&, struct StateVectorComponent&, class Optional<class BuoyancyComponent const>, class Optional<struct OnGroundFlagComponent const>, class IConstBlockSource const&);

// symbol: ?createSystem@BoatMoveFrictionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveFrictionSystem
