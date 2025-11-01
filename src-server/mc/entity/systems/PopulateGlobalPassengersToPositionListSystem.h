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
struct VehicleComponent;
// clang-format on

struct PopulateGlobalPassengersToPositionListSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _populateList(::ViewT<::StrictEntityContext, ::VehicleComponent const, ::Exclude<::PassengerComponent>> rootVehicles, ::ViewT<::StrictEntityContext, ::VehicleComponent const> vehicles, ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>> flaggedPassengers, ::ViewT<::StrictEntityContext, ::PassengerComponent const> passengers, ::PassengersToPositionComponent& destination);

    MCNAPI static void _removeRequestsFromBrokenLinks(::ViewT<::StrictEntityContext, ::VehicleComponent const> vehicles, ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>> flaggedPassengers, ::ViewT<::StrictEntityContext, ::PassengerComponent const> passengers, ::EntityModifier<::PositionPassengerRequestComponent> modifier);

    MCNAPI static void _tick(::ViewT<::StrictEntityContext, ::VehicleComponent const, ::Exclude<::PassengerComponent>> rootVehicles, ::ViewT<::StrictEntityContext, ::VehicleComponent const> vehicles, ::ViewT<::StrictEntityContext, ::Include<::PositionPassengerRequestComponent>> flaggedPassengers, ::ViewT<::StrictEntityContext, ::PassengerComponent const> passengers, ::OptionalGlobal<::PassengersToPositionComponent> optionalDestination, ::EntityModifier<::PositionPassengerRequestComponent> modifier);
    // NOLINTEND

};
