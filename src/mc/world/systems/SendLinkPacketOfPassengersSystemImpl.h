#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename... T0> struct Include;
// clang-format on

namespace SendLinkPacketOfPassengersSystemImpl {
/**
 * @symbol
 * ?sendLinkPacketOfPassengers\@SendLinkPacketOfPassengersSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPassengersChangedFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEAUVehicleComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@\@\@$$CBUActorUniqueIDComponent\@\@\@\@\@Z
 */
MCAPI void
sendLinkPacketOfPassengers(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PassengersChangedFlag>>>, class StrictEntityContext const&, struct ActorUniqueIDComponent const&, struct VehicleComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>); // NOLINT

}; // namespace SendLinkPacketOfPassengersSystemImpl
