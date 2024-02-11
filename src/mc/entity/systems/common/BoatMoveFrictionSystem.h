#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace BoatMoveFrictionSystem {
// NOLINTBEGIN
// symbol:
// ?boatMoveFriction@BoatMoveFrictionSystem@@YAXAEBVStrictEntityContext@@AEBUActorDataFlagComponent@@AEAUBoatMovementComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBVBuoyancyComponent@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void
boatMoveFriction(class StrictEntityContext const&, struct ActorDataFlagComponent const&, struct BoatMovementComponent&, struct StateVectorComponent&, class Optional<class BuoyancyComponent const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class IConstBlockSource const&);

// symbol: ?createSystem@BoatMoveFrictionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveFrictionSystem
