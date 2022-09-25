/**
 * @file  PopulateGlobalPassengersToPositionListSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


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
     * @symbol ?_tick@PopulateGlobalPassengersToPositionListSystem@@SAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUVehicleComponent@@U?$Exclude@UPassengerComponent@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUVehicleComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@UPositionPassengerRequestComponent@@@@$$CBUPassengerComponent@@@@V?$OptionalGlobalT@UPassengersToPositionComponent@@VEntityRegistryBase@@@@@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>, struct PassengerComponent const>, class OptionalGlobalT<struct PassengersToPositionComponent, class EntityRegistryBase>);
    /**
     * @symbol ?createSystem@PopulateGlobalPassengersToPositionListSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};