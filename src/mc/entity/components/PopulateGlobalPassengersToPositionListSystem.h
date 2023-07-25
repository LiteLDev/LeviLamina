#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"

class PopulateGlobalPassengersToPositionListSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POPULATEGLOBALPASSENGERSTOPOSITIONLISTSYSTEM
public:
    PopulateGlobalPassengersToPositionListSystem&
    operator=(PopulateGlobalPassengersToPositionListSystem const&)                                    = delete;
    PopulateGlobalPassengersToPositionListSystem(PopulateGlobalPassengersToPositionListSystem const&) = delete;
    PopulateGlobalPassengersToPositionListSystem()                                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?_populateList\@PopulateGlobalPassengersToPositionListSystem\@\@SA_NV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@U?$Exclude\@UPassengerComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@AEAUPassengersToPositionComponent\@\@\@Z
     */
    MCAPI static bool
    _populateList(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, struct PassengersToPositionComponent&);
    /**
     * @symbol
     * ?_removeRequestsFromBrokenLinks\@PopulateGlobalPassengersToPositionListSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _removeRequestsFromBrokenLinks(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol
     * ?_tick\@PopulateGlobalPassengersToPositionListSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@U?$Exclude\@UPassengerComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$OptionalGlobalT\@UPassengersToPositionComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class OptionalGlobalT<struct PassengersToPositionComponent, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol ?createSystem\@PopulateGlobalPassengersToPositionListSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
