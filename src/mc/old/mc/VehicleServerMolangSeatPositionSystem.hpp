/**
 * @file  VehicleServerMolangSeatPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleServerMolangSeatPositionSystem.
 *
 */
class VehicleServerMolangSeatPositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLESERVERMOLANGSEATPOSITIONSYSTEM
public:
    class VehicleServerMolangSeatPositionSystem& operator=(class VehicleServerMolangSeatPositionSystem const &) = delete;
    VehicleServerMolangSeatPositionSystem(class VehicleServerMolangSeatPositionSystem const &) = delete;
    VehicleServerMolangSeatPositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_tickActor\@VehicleServerMolangSeatPositionSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAVActorOwnerComponent\@\@AEAUPositionPassengerRequestComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBVRideableComponent\@\@$$CBUVehicleComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickActor(class StrictEntityContext &, struct PassengerComponent const &, class ActorOwnerComponent &, struct PositionPassengerRequestComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, class RideableComponent const, struct VehicleComponent const>);
    /**
     * @symbol  ?createSystem\@VehicleServerMolangSeatPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};