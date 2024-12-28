#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct PassengerComponent;
struct PassengersToPositionComponent;
struct PositionPassengerRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

struct PopulateGlobalPassengersToPositionListSystem {
public:
    // prevent constructor by default
    PopulateGlobalPassengersToPositionListSystem& operator=(PopulateGlobalPassengersToPositionListSystem const&);
    PopulateGlobalPassengersToPositionListSystem(PopulateGlobalPassengersToPositionListSystem const&);
    PopulateGlobalPassengersToPositionListSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _populateList(
        ::ViewT<::StrictEntityContext, ::VehicleComponent const, ::Exclude<::PassengerComponent>> rootVehicles,
        ::ViewT<::StrictEntityContext, ::VehicleComponent const>                                  vehicles,
        ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>>            flaggedPassengers,
        ::ViewT<::StrictEntityContext, ::PassengerComponent const>                                passengers,
        ::PassengersToPositionComponent&                                                          destination
    );

    MCAPI static void _removeRequestsFromBrokenLinks(
        ::ViewT<::StrictEntityContext, ::VehicleComponent const>                       vehicles,
        ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>> flaggedPassengers,
        ::ViewT<::StrictEntityContext, ::PassengerComponent const>                     passengers,
        ::EntityModifier<::PositionPassengerRequestComponent>                          modifier
    );

    MCAPI static void _tick(
        ::ViewT<::StrictEntityContext, ::VehicleComponent const, ::Exclude<::PassengerComponent>> rootVehicles,
        ::ViewT<::StrictEntityContext, ::VehicleComponent const>                                  vehicles,
        ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>>            flaggedPassengers,
        ::ViewT<::StrictEntityContext, ::PassengerComponent const>                                passengers,
        ::OptionalGlobal<::PassengersToPositionComponent>                                         optionalDestination,
        ::EntityModifier<::PositionPassengerRequestComponent>                                     modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
