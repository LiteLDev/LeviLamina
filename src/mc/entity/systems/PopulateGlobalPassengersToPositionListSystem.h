#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

class PopulateGlobalPassengersToPositionListSystem {
public:
    // prevent constructor by default
    PopulateGlobalPassengersToPositionListSystem& operator=(PopulateGlobalPassengersToPositionListSystem const&);
    PopulateGlobalPassengersToPositionListSystem(PopulateGlobalPassengersToPositionListSystem const&);
    PopulateGlobalPassengersToPositionListSystem();

public:
    // NOLINTBEGIN
    MCAPI static bool _populateList(
        class ViewT<class StrictEntityContext, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>
                                                                              rootVehicles,
        class ViewT<class StrictEntityContext, struct VehicleComponent const> vehicles,
        class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>>
                                                                                flaggedPassengers,
        class ViewT<class StrictEntityContext, struct PassengerComponent const> passengers,
        struct PassengersToPositionComponent&                                   destination
    );

    MCAPI static void _removeRequestsFromBrokenLinks(
        class ViewT<class StrictEntityContext, struct VehicleComponent const> vehicles,
        class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>>
                                                                                flaggedPassengers,
        class ViewT<class StrictEntityContext, struct PassengerComponent const> passengers,
        class EntityModifier<struct PositionPassengerRequestComponent>          modifier
    );

    MCAPI static void _tick(
        class ViewT<class StrictEntityContext, struct VehicleComponent const, struct Exclude<struct PassengerComponent>>
                                                                              rootVehicles,
        class ViewT<class StrictEntityContext, struct VehicleComponent const> vehicles,
        class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>>
                                                                                flaggedPassengers,
        class ViewT<class StrictEntityContext, struct PassengerComponent const> passengers,
        class OptionalGlobal<struct PassengersToPositionComponent>              optionalDestination,
        class EntityModifier<struct PositionPassengerRequestComponent>          modifier
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
