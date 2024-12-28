#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct VehicleComponent;
// clang-format on

namespace GetControllingPlayerUtility {
// functions
// NOLINTBEGIN
MCAPI bool hasControllingPassenger(
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndex,
    ::VehicleComponent const&                       vehicleComponent
);

MCAPI bool isPassengerControllingVehicle(
    ::StrictEntityContext const&                    passenger,
    ::VehicleComponent const&                       vehicleComponent,
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndex
);

MCAPI bool isWASDControlled(::ActorDataFlagComponent const& actorDataFlagComponent);
// NOLINTEND

} // namespace GetControllingPlayerUtility
