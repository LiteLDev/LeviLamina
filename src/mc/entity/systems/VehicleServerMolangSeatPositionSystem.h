#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class RideableComponent;
class StrictEntityContext;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct VehicleComponent;
// clang-format on

class VehicleServerMolangSeatPositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickActor(
        ::StrictEntityContext&,
        ::PassengerComponent const&          passengerComponent,
        ::ActorOwnerComponent&               actorComponent,
        ::PositionPassengerRequestComponent& positionPassengerRequestComponent,
        ::ViewT<::StrictEntityContext, ::RideableComponent const, ::VehicleComponent const> vehicleView
    );

    MCAPI static void _tickVehicleServerMolangSeatPositionSystemSingleEntity(
        ::StrictEntityContext const& entityContext,
        ::ViewT<
            ::StrictEntityContext,
            ::PassengerComponent const,
            ::ActorOwnerComponent,
            ::PositionPassengerRequestComponent>                                            passengerView,
        ::ViewT<::StrictEntityContext, ::RideableComponent const, ::VehicleComponent const> vehicleView
    );
    // NOLINTEND
};
