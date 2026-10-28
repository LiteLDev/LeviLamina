#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct PassengerComponent;
struct PassengersToPositionComponent;
struct PositionPassengerRequestComponent;
struct VehicleComponent;
// clang-format on

struct PopulateGlobalPassengersToPositionListSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _populateList(
        ::ViewT<::StrictEntityContext, ::VehicleComponent const, ::Exclude<::PassengerComponent>> const& rootVehicles,
        ::ViewT<::StrictEntityContext, ::VehicleComponent const> const&                                  vehicles,
        ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>> const& flaggedPassengers,
        ::ViewT<::StrictEntityContext, ::PassengerComponent const> const&                     passengers,
        ::PassengersToPositionComponent&                                                      destination
    );

    MCAPI static void _removeRequestsFromBrokenLinks(
        ::ViewT<::StrictEntityContext, ::VehicleComponent const> const&                       vehicles,
        ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>> const& flaggedPassengers,
        ::ViewT<::StrictEntityContext, ::PassengerComponent const> const&                     passengers,
        ::EntityModifier<::PositionPassengerRequestComponent> const&                          modifier
    );
    // NOLINTEND
};
