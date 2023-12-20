#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class VehicleServerSeatPositionSystem {
public:
    // prevent constructor by default
    VehicleServerSeatPositionSystem& operator=(VehicleServerSeatPositionSystem const&);
    VehicleServerSeatPositionSystem(VehicleServerSeatPositionSystem const&);
    VehicleServerSeatPositionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@VehicleServerSeatPositionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_setSeatDescriptionToActorDataSystem@VehicleServerSeatPositionSystem@@CAXV?$ViewT@VStrictEntityContext@@$$CBUPassengerComponent@@$$CBUPositionPassengerRequestComponent@@$$CBUOffsetsComponent@@USynchedActorDataComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@$$CBUSynchedActorDataComponent@@$$CBVRideableComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBURidingHeightComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBUAdultRidingHeightOffsetComponent@@@@@Z
    MCAPI static void
        _setSeatDescriptionToActorDataSystem(class ViewT<class StrictEntityContext, struct PassengerComponent const, struct PositionPassengerRequestComponent const, struct OffsetsComponent const, struct SynchedActorDataComponent>, class ViewT<class StrictEntityContext, struct VehicleComponent const, struct SynchedActorDataComponent const, class RideableComponent const>, class ViewT<class StrictEntityContext, struct RidingHeightComponent const>, class ViewT<class StrictEntityContext, struct AdultRidingHeightOffsetComponent const>);

    // NOLINTEND
};
