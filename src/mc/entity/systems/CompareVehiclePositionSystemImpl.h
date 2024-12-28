#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ComparisonEventingCapComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct PassengerComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace CompareVehiclePositionSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doCompareVehiclePosition(
    ::PassengerComponent const&                                                           passengerComponent,
    ::EventingDispatcherComponent const&                                                  eventingDispatcherComponent,
    ::ServerPlayerCurrentMovementComponent const&                                         serverPlayerCurrentMovement,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent, ::StateVectorComponent> vehicleView,
    ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent>                       requestQueueView,
    ::OptionalGlobal<::ComparisonEventingCapComponent>                                    eventingCapComponent
);

MCAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::PassengerComponent const,
        ::EventingDispatcherComponent const,
        ::ServerPlayerCurrentMovementComponent const>                                     view,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent, ::StateVectorComponent> vehicleView,
    ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent>                       requestQueueView,
    ::OptionalGlobal<::ComparisonEventingCapComponent>                                    eventingCapComponent
);
// NOLINTEND

} // namespace CompareVehiclePositionSystemImpl
