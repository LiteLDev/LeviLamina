#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetControllingPlayerUtility {
// NOLINTBEGIN
// symbol:
// ?hasControllingPassenger@GetControllingPlayerUtility@@YA_NAEBUActorDataControllingSeatIndexComponent@@AEBUVehicleComponent@@@Z
MCAPI bool
hasControllingPassenger(struct ActorDataControllingSeatIndexComponent const&, struct VehicleComponent const&);

// symbol:
// ?isPassengerControllingVehicle@GetControllingPlayerUtility@@YA_NAEBVStrictEntityContext@@AEBUVehicleComponent@@AEBUActorDataControllingSeatIndexComponent@@@Z
MCAPI bool
isPassengerControllingVehicle(class StrictEntityContext const&, struct VehicleComponent const&, struct ActorDataControllingSeatIndexComponent const&);

// symbol: ?isWASDControlled@GetControllingPlayerUtility@@YA_NAEBUActorDataFlagComponent@@@Z
MCAPI bool isWASDControlled(struct ActorDataFlagComponent const&);
// NOLINTEND

}; // namespace GetControllingPlayerUtility
