#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class VehicleServerSeatPositionSystem {

public:
    // prevent constructor by default
    VehicleServerSeatPositionSystem& operator=(VehicleServerSeatPositionSystem const&) = delete;
    VehicleServerSeatPositionSystem(VehicleServerSeatPositionSystem const&)            = delete;
    VehicleServerSeatPositionSystem()                                                  = delete;

public:
    /**
     * @symbol ?createSystem\@VehicleServerSeatPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_setSeatDescriptionToActorDataSystem\@VehicleServerSeatPositionSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@$$CBUPositionPassengerRequestComponent\@\@$$CBUOffsetsComponent\@\@USynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@$$CBVRideableComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBURidingHeightComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAdultRidingHeightOffsetComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _setSeatDescriptionToActorDataSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, struct PositionPassengerRequestComponent const, struct OffsetsComponent const, struct SynchedActorDataComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct SynchedActorDataComponent const, class RideableComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RidingHeightComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AdultRidingHeightOffsetComponent const>); // NOLINT

private:
};
