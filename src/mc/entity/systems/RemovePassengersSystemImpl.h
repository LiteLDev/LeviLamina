#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace RemovePassengersSystemImpl {
// NOLINTBEGIN
MCAPI void
removePassengersSystem(class StrictEntityContext const&, struct RemovePassengersComponent&, struct VehicleComponent&, class EntityModifier<struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

MCAPI void
singleTickRemovePassenger(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, struct RemovePassengersComponent const, struct VehicleComponent>, class EntityModifier<struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

MCAPI void
    tickRemovePassengersSystem(class ViewT<class StrictEntityContext, struct RemovePassengersComponent, struct VehicleComponent>, class EntityModifier<struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);
// NOLINTEND

}; // namespace RemovePassengersSystemImpl
