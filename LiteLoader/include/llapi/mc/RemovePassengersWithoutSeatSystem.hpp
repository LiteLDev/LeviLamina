/**
 * @file  MC/RemovePassengersWithoutSeatSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RemovePassengersWithoutSeatSystem.
 *
 */
class RemovePassengersWithoutSeatSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEPASSENGERSWITHOUTSEATSYSTEM
public:
    class RemovePassengersWithoutSeatSystem& operator=(class RemovePassengersWithoutSeatSystem const &) = delete;
    RemovePassengersWithoutSeatSystem(class RemovePassengersWithoutSeatSystem const &) = delete;
    RemovePassengersWithoutSeatSystem() = delete;
#endif

public:
    /**
     * @hash   1166793728
     * @symbol ?createSystem@RemovePassengersWithoutSeatSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @hash   -555023482
     * @symbol ?removePassengersWithoutSeat@RemovePassengersWithoutSeatSystem@@SAXAEAVStrictEntityContext@@AEBVRideableComponent@@AEAUVehicleComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@URemovePassengersComponent@@@@@Z
     */
    MCAPI static void removePassengersWithoutSeat(class StrictEntityContext &, class RideableComponent const &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent> &);

};