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
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerMolangSeatPositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickActor(
        ::StrictEntityContext&               passengerComponent,
        ::PassengerComponent const&          actorComponent,
        ::ActorOwnerComponent&               positionPassengerRequestComponent,
        ::PositionPassengerRequestComponent& vehicleView,
        ::ViewT<::StrictEntityContext, ::RideableComponent const, ::VehicleComponent const>
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
