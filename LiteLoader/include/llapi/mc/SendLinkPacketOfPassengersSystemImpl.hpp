/**
 * @file  SendLinkPacketOfPassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SendLinkPacketOfPassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?sendLinkPacketOfPassengers\@SendLinkPacketOfPassengersSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEAUVehicleComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@\@\@$$CBUActorUniqueIDComponent\@\@\@\@\@Z
     */
    MCAPI void sendLinkPacketOfPassengers(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PassengersChangedFlag>>>, class StrictEntityContext const &, struct ActorUniqueIDComponent const &, struct VehicleComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>);

};