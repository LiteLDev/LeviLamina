#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class VehicleServerMolangSeatPositionSystem {
public:
    // prevent constructor by default
    VehicleServerMolangSeatPositionSystem& operator=(VehicleServerMolangSeatPositionSystem const&);
    VehicleServerMolangSeatPositionSystem(VehicleServerMolangSeatPositionSystem const&);
    VehicleServerMolangSeatPositionSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_tickActor@VehicleServerMolangSeatPositionSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAVActorOwnerComponent@@AEAUPositionPassengerRequestComponent@@V?$ViewT@VStrictEntityContext@@$$CBVRideableComponent@@$$CBUVehicleComponent@@@@@Z
    MCAPI static void
    _tickActor(class StrictEntityContext&, struct PassengerComponent const&, class ActorOwnerComponent& actorComponent, struct PositionPassengerRequestComponent&, class ViewT<class StrictEntityContext, class RideableComponent const, struct VehicleComponent const>);

    // symbol:
    // ?_tickVehicleServerMolangSeatPositionSystem@VehicleServerMolangSeatPositionSystem@@SAXV?$ViewT@VStrictEntityContext@@$$CBUPassengerComponent@@VActorOwnerComponent@@UPositionPassengerRequestComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBVRideableComponent@@$$CBUVehicleComponent@@@@@Z
    MCAPI static void
        _tickVehicleServerMolangSeatPositionSystem(class ViewT<class StrictEntityContext, struct PassengerComponent const, class ActorOwnerComponent, struct PositionPassengerRequestComponent>, class ViewT<class StrictEntityContext, class RideableComponent const, struct VehicleComponent const>);

    // symbol: ?createSystem@VehicleServerMolangSeatPositionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
