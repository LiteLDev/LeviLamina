#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct PassengerComponent;
struct PassengersChangedFlagComponent;
struct RecalculateControlledByLocalInstanceRequestComponent;
struct RemovePassengersComponent;
struct VehicleComponent;
// clang-format on

namespace RemovePassengersSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void removePassengersSystem(
    ::StrictEntityContext const& vehicleEntity,
    ::RemovePassengersComponent& removePassengersComponent,
    ::VehicleComponent&          vehicleComponent,
    ::EntityModifier<
        ::VehicleComponent,
        ::RecalculateControlledByLocalInstanceRequestComponent,
        ::PassengersChangedFlagComponent> modifier
);

MCNAPI void singleTickRemovePassenger(
    ::StrictEntityContext const&                                                          passengerEntity,
    ::PassengerComponent const&                                                           passengerComponent,
    ::ViewT<::StrictEntityContext, ::RemovePassengersComponent const, ::VehicleComponent> vehicleView,
    ::EntityModifier<
        ::VehicleComponent,
        ::RecalculateControlledByLocalInstanceRequestComponent,
        ::PassengersChangedFlagComponent> modifier
);
// NOLINTEND

} // namespace RemovePassengersSystemImpl
