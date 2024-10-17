#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

class VehicleServerMolangSeatPositionSystem {
public:
    // prevent constructor by default
    VehicleServerMolangSeatPositionSystem& operator=(VehicleServerMolangSeatPositionSystem const&);
    VehicleServerMolangSeatPositionSystem(VehicleServerMolangSeatPositionSystem const&);
    VehicleServerMolangSeatPositionSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _tickActor(
        class StrictEntityContext&,
        struct PassengerComponent const&          passengerComponent,
        class ActorOwnerComponent&                actorComponent,
        struct PositionPassengerRequestComponent& positionPassengerRequestComponent,
        class ViewT<class StrictEntityContext, class RideableComponent const, struct VehicleComponent const> vehicleView
    );

    MCAPI static void _tickVehicleServerMolangSeatPositionSystem(
        class ViewT<
            class StrictEntityContext,
            struct PassengerComponent const,
            class ActorOwnerComponent,
            struct PositionPassengerRequestComponent> passengerView,
        class ViewT<class StrictEntityContext, class RideableComponent const, struct VehicleComponent const> vehicleView
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
