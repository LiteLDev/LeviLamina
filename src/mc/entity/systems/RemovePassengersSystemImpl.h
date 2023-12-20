#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace RemovePassengersSystemImpl {
// NOLINTBEGIN
// symbol:
// ?removePassengersSystem@RemovePassengersSystemImpl@@YAXAEBVStrictEntityContext@@AEAURemovePassengersComponent@@AEAUVehicleComponent@@V?$EntityModifier@UVehicleComponent@@V?$FlagComponent@URecalculateControlledByLocalInstanceRequestFlag@@@@V?$FlagComponent@UPassengersChangedFlag@@@@@@@Z
MCAPI void
removePassengersSystem(class StrictEntityContext const&, struct RemovePassengersComponent&, struct VehicleComponent&, class EntityModifier<struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

// symbol:
// ?singleTickRemovePassenger@RemovePassengersSystemImpl@@YAXAEBVStrictEntityContext@@AEBUPassengerComponent@@V?$ViewT@VStrictEntityContext@@$$CBURemovePassengersComponent@@UVehicleComponent@@@@V?$EntityModifier@UVehicleComponent@@V?$FlagComponent@URecalculateControlledByLocalInstanceRequestFlag@@@@V?$FlagComponent@UPassengersChangedFlag@@@@@@@Z
MCAPI void
singleTickRemovePassenger(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, struct RemovePassengersComponent const, struct VehicleComponent>, class EntityModifier<struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

// symbol:
// ?tickRemovePassengersSystem@RemovePassengersSystemImpl@@YAXV?$ViewT@VStrictEntityContext@@URemovePassengersComponent@@UVehicleComponent@@@@V?$EntityModifier@UVehicleComponent@@V?$FlagComponent@URecalculateControlledByLocalInstanceRequestFlag@@@@V?$FlagComponent@UPassengersChangedFlag@@@@@@@Z
MCAPI void
    tickRemovePassengersSystem(class ViewT<class StrictEntityContext, struct RemovePassengersComponent, struct VehicleComponent>, class EntityModifier<struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);
// NOLINTEND

}; // namespace RemovePassengersSystemImpl
