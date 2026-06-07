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
MCNAPI bool hasControllingPassenger(
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndex,
    ::VehicleComponent const&                       vehicleComponent
);

MCNAPI bool isPassengerControllingVehicle(
    ::StrictEntityContext const&                    passenger,
    ::VehicleComponent const&                       vehicleComponent,
    ::ActorDataControllingSeatIndexComponent const& controllingSeatIndex
);

MCNAPI bool isWASDFreeCameraControlled(::ActorDataFlagComponent const& actorDataFlagComponent);

MCNAPI bool isWASDGroundControlled(::ActorDataFlagComponent const& actorDataFlagComponent);
// NOLINTEND

} // namespace GetControllingPlayerUtility
