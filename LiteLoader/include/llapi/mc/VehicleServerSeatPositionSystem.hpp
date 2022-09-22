/**
 * @file  VehicleServerSeatPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


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
     * @symbol ?createSystem@VehicleServerSeatPositionSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_getRidingHeight@VehicleServerSeatPositionSystem@@CAMAEBVStrictEntityContext@@AEBUOffsetsComponent@@AEBUSynchedActorDataComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBURidingHeightComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUAdultRidingHeightOffsetComponent@@@@@Z
     */
    MCAPI static float _getRidingHeight(class StrictEntityContext const &, struct OffsetsComponent const &, struct SynchedActorDataComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RidingHeightComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AdultRidingHeightOffsetComponent const>);

private:

};