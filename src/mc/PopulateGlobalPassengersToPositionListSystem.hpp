/**
 * @file  PopulateGlobalPassengersToPositionListSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PopulateGlobalPassengersToPositionListSystem.
 *
 */
class PopulateGlobalPassengersToPositionListSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POPULATEGLOBALPASSENGERSTOPOSITIONLISTSYSTEM
public:
    class PopulateGlobalPassengersToPositionListSystem& operator=(class PopulateGlobalPassengersToPositionListSystem const &) = delete;
    PopulateGlobalPassengersToPositionListSystem(class PopulateGlobalPassengersToPositionListSystem const &) = delete;
    PopulateGlobalPassengersToPositionListSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_populateList\@PopulateGlobalPassengersToPositionListSystem\@\@SA_NV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@U?$Exclude\@UPassengerComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@AEAUPassengersToPositionComponent\@\@\@Z
     */
    MCAPI static bool _populateList(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, struct PassengersToPositionComponent &);
    /**
     * @symbol  ?_removeRequestsFromBrokenLinks\@PopulateGlobalPassengersToPositionListSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _removeRequestsFromBrokenLinks(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol  ?_tick\@PopulateGlobalPassengersToPositionListSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@U?$Exclude\@UPassengerComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$OptionalGlobalT\@UPassengersToPositionComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class OptionalGlobalT<struct PassengersToPositionComponent, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol  ?createSystem\@PopulateGlobalPassengersToPositionListSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};