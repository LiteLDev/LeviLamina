/**
 * @file  ClientInteractStopRidingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientInteractStopRidingSystem.
 *
 */
class ClientInteractStopRidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTINTERACTSTOPRIDINGSYSTEM
public:
    class ClientInteractStopRidingSystem& operator=(class ClientInteractStopRidingSystem const &) = delete;
    ClientInteractStopRidingSystem(class ClientInteractStopRidingSystem const &) = delete;
    ClientInteractStopRidingSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ClientInteractStopRidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?tick\@ClientInteractStopRidingSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURuntimeIDComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext &, struct PassengerComponent const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct RuntimeIDComponent const>);

};