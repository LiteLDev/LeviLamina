#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetControllingPlayerUtility {
// NOLINTBEGIN
// symbol:
// ?hasControllingPassenger@GetControllingPlayerUtility@@YA_NAEBUSynchedActorDataComponent@@AEBUVehicleComponent@@@Z
MCAPI bool hasControllingPassenger(struct SynchedActorDataComponent const&, struct VehicleComponent const&);

// symbol:
// ?isPassengerControllingVehicle@GetControllingPlayerUtility@@YA_NAEBVStrictEntityContext@@AEBUVehicleComponent@@AEBUSynchedActorDataComponent@@@Z
MCAPI bool
isPassengerControllingVehicle(class StrictEntityContext const&, struct VehicleComponent const&, struct SynchedActorDataComponent const&);

// symbol: ?isWASDControlled@GetControllingPlayerUtility@@YA_NAEBUSynchedActorDataComponent@@@Z
MCAPI bool isWASDControlled(struct SynchedActorDataComponent const&);
// NOLINTEND

}; // namespace GetControllingPlayerUtility
