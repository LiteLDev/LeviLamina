/**
 * @file  SendLinkPacketOfPassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?createSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?sendLinkPacketOfPassengers\@SendLinkPacketOfPassengersSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEAUVehicleComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@\@\@$$CBUActorUniqueIDComponent\@\@\@\@\@Z
     */
    MCAPI static void sendLinkPacketOfPassengers(class StrictEntityContext &, struct ActorUniqueIDComponent const &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent, class FlagComponent<struct PassengersChangedFlag>> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>);

//private:
    /**
     * @symbol  ?_tickSendLinkPacketOfPassengers\@SendLinkPacketOfPassengersSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@$$CBUActorUniqueIDComponent\@\@UVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@\@\@$$CBUActorUniqueIDComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickSendLinkPacketOfPassengers(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PassengersChangedFlag>>, struct ActorUniqueIDComponent const, struct VehicleComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent, class FlagComponent<struct PassengersChangedFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PassengersChangedFlag>>>);

private:

};