#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace RemovePassengersSystemImpl {
// NOLINTBEGIN
// symbol:
// ?removePassengersSystem@RemovePassengersSystemImpl@@YAXAEBVStrictEntityContext@@AEAURemovePassengersComponent@@AEAUVehicleComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UVehicleComponent@@V?$FlagComponent@URecalculateControlledByLocalInstanceRequestFlag@@@@V?$FlagComponent@UPassengersChangedFlag@@@@@@@Z
MCAPI void
removePassengersSystem(class StrictEntityContext const&, struct RemovePassengersComponent&, struct VehicleComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

// symbol:
// ?singleTickRemovePassenger@RemovePassengersSystemImpl@@YAXAEBVStrictEntityContext@@AEBUPassengerComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBURemovePassengersComponent@@UVehicleComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UVehicleComponent@@V?$FlagComponent@URecalculateControlledByLocalInstanceRequestFlag@@@@V?$FlagComponent@UPassengersChangedFlag@@@@@@@Z
MCAPI void
singleTickRemovePassenger(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RemovePassengersComponent const, struct VehicleComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);
// NOLINTEND

}; // namespace RemovePassengersSystemImpl
