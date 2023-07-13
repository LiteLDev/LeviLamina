/**
 * @file  RemovePassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace RemovePassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?removePassengersSystem\@RemovePassengersSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEAURemovePassengersComponent\@\@AEAUVehicleComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UVehicleComponent\@\@V?$FlagComponent\@URecalculateControlledByLocalInstanceRequestFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void removePassengersSystem(class StrictEntityContext const &, struct RemovePassengersComponent &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);
    /**
     * @symbol ?singleTickRemovePassenger\@RemovePassengersSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBURemovePassengersComponent\@\@UVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UVehicleComponent\@\@V?$FlagComponent\@URecalculateControlledByLocalInstanceRequestFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void singleTickRemovePassenger(class StrictEntityContext const &, struct PassengerComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RemovePassengersComponent const, struct VehicleComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleComponent, class FlagComponent<struct RecalculateControlledByLocalInstanceRequestFlag>, class FlagComponent<struct PassengersChangedFlag>>);

};