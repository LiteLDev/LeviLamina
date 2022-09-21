/**
 * @file  MC/SendLinkPacketOfPassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SendLinkPacketOfPassengersSystem.
 *
 */
class SendLinkPacketOfPassengersSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDLINKPACKETOFPASSENGERSSYSTEM
public:
    class SendLinkPacketOfPassengersSystem& operator=(class SendLinkPacketOfPassengersSystem const &) = delete;
    SendLinkPacketOfPassengersSystem(class SendLinkPacketOfPassengersSystem const &) = delete;
    SendLinkPacketOfPassengersSystem() = delete;
#endif

public:
    /**
     * @hash   -987722768
     * @symbol ?createSystem@SendLinkPacketOfPassengersSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @hash   1343378215
     * @symbol ?sendLinkPacketOfPassengers@SendLinkPacketOfPassengersSystem@@SAXAEAVStrictEntityContext@@AEBUActorUniqueIDComponent@@AEAUVehicleComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@USendPacketsComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@UPassengerComponent@@@@$$CBUActorUniqueIDComponent@@@@@Z
     */
    MCAPI static void sendLinkPacketOfPassengers(class StrictEntityContext &, struct ActorUniqueIDComponent const &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>);

};