#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
// clang-format on

namespace RemovePassengersSystemImpl {
/**
 * @symbol
 * ?removePassengersSystem\@RemovePassengersSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEAURemovePassengersComponent\@\@AEAUVehicleComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UVehicleComponent\@\@V?$FlagComponent\@URecalculateControlledByLocalInstanceRequestFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
removePassengersSystem(class StrictEntityContext const&, struct RemovePassengersComponent&, struct VehicleComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>); // NOLINT
/**
 * @symbol
 * ?singleTickRemovePassenger\@RemovePassengersSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBURemovePassengersComponent\@\@UVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UVehicleComponent\@\@V?$FlagComponent\@URecalculateControlledByLocalInstanceRequestFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
singleTickRemovePassenger(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RemovePassengersComponent const, struct VehicleComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>); // NOLINT

}; // namespace RemovePassengersSystemImpl
