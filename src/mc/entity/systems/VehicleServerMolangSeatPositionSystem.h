#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class VehicleServerMolangSeatPositionSystem {

public:
    // prevent constructor by default
    VehicleServerMolangSeatPositionSystem& operator=(VehicleServerMolangSeatPositionSystem const&) = delete;
    VehicleServerMolangSeatPositionSystem(VehicleServerMolangSeatPositionSystem const&)            = delete;
    VehicleServerMolangSeatPositionSystem()                                                        = delete;

public:
    /**
     * @symbol
     * ?_tickActor\@VehicleServerMolangSeatPositionSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAVActorOwnerComponent\@\@AEAUPositionPassengerRequestComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBVRideableComponent\@\@$$CBUVehicleComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _tickActor(class StrictEntityContext&, struct PassengerComponent const&, class ActorOwnerComponent&, struct PositionPassengerRequestComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, class RideableComponent const, struct VehicleComponent const>); // NOLINT
    /**
     * @symbol
     * ?_tickVehicleServerMolangSeatPositionSystem\@VehicleServerMolangSeatPositionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@VActorOwnerComponent\@\@UPositionPassengerRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBVRideableComponent\@\@$$CBUVehicleComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _tickVehicleServerMolangSeatPositionSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, class ActorOwnerComponent, struct PositionPassengerRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class RideableComponent const, struct VehicleComponent const>); // NOLINT
    /**
     * @symbol
     * ?_tickVehicleServerMolangSeatPositionSystemSingleEntity\@VehicleServerMolangSeatPositionSystem\@\@SAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@VActorOwnerComponent\@\@UPositionPassengerRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBVRideableComponent\@\@$$CBUVehicleComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _tickVehicleServerMolangSeatPositionSystemSingleEntity(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, class ActorOwnerComponent, struct PositionPassengerRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class RideableComponent const, struct VehicleComponent const>); // NOLINT
    /**
     * @symbol ?createSystem\@VehicleServerMolangSeatPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
