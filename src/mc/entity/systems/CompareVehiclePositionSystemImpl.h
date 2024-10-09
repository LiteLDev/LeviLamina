#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

namespace CompareVehiclePositionSystemImpl {
// NOLINTBEGIN
MCAPI void doCompareVehiclePosition(
    struct PassengerComponent const&                   passengerComponent,
    struct EventingDispatcherComponent const&          eventingDispatcherComponent,
    struct ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovement,
    class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, struct StateVectorComponent> vehicleView,
    class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent> requestQueueView,
    class OptionalGlobal<struct ComparisonEventingCapComponent>                  eventingCapComponent
);

MCAPI void tick(
    class ViewT<
        class StrictEntityContext,
        struct PassengerComponent const,
        struct EventingDispatcherComponent const,
        struct ServerPlayerCurrentMovementComponent const>                                                  view,
    class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, struct StateVectorComponent> vehicleView,
    class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent> requestQueueView,
    class OptionalGlobal<struct ComparisonEventingCapComponent>                  eventingCapComponent
);
// NOLINTEND

}; // namespace CompareVehiclePositionSystemImpl
