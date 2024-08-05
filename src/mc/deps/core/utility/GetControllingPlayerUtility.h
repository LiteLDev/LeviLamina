#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetControllingPlayerUtility {
// NOLINTBEGIN
MCAPI bool
hasControllingPassenger(struct ActorDataControllingSeatIndexComponent const&, struct VehicleComponent const&);

MCAPI bool
isPassengerControllingVehicle(class StrictEntityContext const&, struct VehicleComponent const&, struct ActorDataControllingSeatIndexComponent const&);

MCAPI bool isWASDControlled(struct ActorDataFlagComponent const&);
// NOLINTEND

}; // namespace GetControllingPlayerUtility
