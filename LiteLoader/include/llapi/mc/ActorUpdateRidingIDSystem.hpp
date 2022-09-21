/**
 * @file  MC/ActorUpdateRidingIDSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdateRidingIDSystem.
 *
 */
class ActorUpdateRidingIDSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATERIDINGIDSYSTEM
public:
    class ActorUpdateRidingIDSystem& operator=(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem(class ActorUpdateRidingIDSystem const &) = delete;
    ActorUpdateRidingIDSystem() = delete;
#endif

public:
    /**
     * @hash   -110194542
     * @symbol ?createClearPrevRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearPrevRidingIDSystem();
    /**
     * @hash   1264381378
     * @symbol ?createClearRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClearRidingIDSystem();
    /**
     * @hash   -1033875436
     * @symbol ?createUpdatePrevRidingIDSystem@ActorUpdateRidingIDSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdatePrevRidingIDSystem();
    /**
     * @hash   1120999355
     * @symbol ?tickClearRidingID@ActorUpdateRidingIDSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPassengerComponent@@@@@Z
     */
    MCAPI static void tickClearRidingID(class StrictEntityContext &, struct PassengerComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PassengerComponent> &);
    /**
     * @hash   -1796282726
     * @symbol ?tickClearRidingPrevIDAfterRemovePassenger@ActorUpdateRidingIDSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAURidingPrevIDComponent@@@Z
     */
    MCAPI static void tickClearRidingPrevIDAfterRemovePassenger(class StrictEntityContext &, struct PassengerComponent const &, struct RidingPrevIDComponent &);
    /**
     * @hash   -173946956
     * @symbol ?tickUpdateRidingPrevID@ActorUpdateRidingIDSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAURidingPrevIDComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@$$CBUVehicleComponent@@@@@Z
     */
    MCAPI static void tickUpdateRidingPrevID(class StrictEntityContext &, struct PassengerComponent const &, struct RidingPrevIDComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>);

};