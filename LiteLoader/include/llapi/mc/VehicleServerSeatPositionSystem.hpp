/**
 * @file  VehicleServerSeatPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleServerSeatPositionSystem.
 *
 */
class VehicleServerSeatPositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLESERVERSEATPOSITIONSYSTEM
public:
    class VehicleServerSeatPositionSystem& operator=(class VehicleServerSeatPositionSystem const &) = delete;
    VehicleServerSeatPositionSystem(class VehicleServerSeatPositionSystem const &) = delete;
    VehicleServerSeatPositionSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@VehicleServerSeatPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_setSeatDescriptionToActorDataSystem\@VehicleServerSeatPositionSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@$$CBUPositionPassengerRequestComponent\@\@$$CBUOffsetsComponent\@\@USynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@$$CBVRideableComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBURidingHeightComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAdultRidingHeightOffsetComponent\@\@\@\@\@Z
     */
    MCAPI static void _setSeatDescriptionToActorDataSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const, struct PositionPassengerRequestComponent const, struct OffsetsComponent const, struct SynchedActorDataComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct SynchedActorDataComponent const, class RideableComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RidingHeightComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AdultRidingHeightOffsetComponent const>);

private:

};
