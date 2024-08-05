#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"

namespace CompareVehiclePositionSystemImpl {
// NOLINTBEGIN
MCAPI void doCompareVehiclePosition(struct PassengerComponent const&, struct EventingDispatcherComponent const&, struct ServerPlayerCurrentMovementComponent const&, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, struct StateVectorComponent>, class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>, class OptionalGlobal<struct ComparisonEventingCapComponent>);

MCAPI void tick(class ViewT<class StrictEntityContext, struct PassengerComponent const, struct EventingDispatcherComponent const, struct ServerPlayerCurrentMovementComponent const>, class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, struct StateVectorComponent>, class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent>, class OptionalGlobal<struct ComparisonEventingCapComponent>);
// NOLINTEND

}; // namespace CompareVehiclePositionSystemImpl
