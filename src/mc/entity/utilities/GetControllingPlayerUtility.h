#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GetControllingPlayerUtility {
// NOLINTBEGIN
MCAPI bool hasControllingPassenger(
    struct ActorDataControllingSeatIndexComponent const& controllingSeatIndex,
    struct VehicleComponent const&                       vehicleComponent
);

MCAPI bool isPassengerControllingVehicle(
    class StrictEntityContext const&                     passenger,
    struct VehicleComponent const&                       vehicleComponent,
    struct ActorDataControllingSeatIndexComponent const& controllingSeatIndex
);

MCAPI bool isWASDControlled(struct ActorDataFlagComponent const& actorDataFlagComponent);
// NOLINTEND

}; // namespace GetControllingPlayerUtility
