#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace SendLinkPacketOfPassengersSystemImpl {
// NOLINTBEGIN
// symbol:
// ?sendLinkPacketOfPassengers@SendLinkPacketOfPassengersSystemImpl@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UPassengersChangedFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUActorUniqueIDComponent@@AEAUVehicleComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@USendPacketsComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@UPassengerComponent@@@@$$CBUActorUniqueIDComponent@@@@@Z
MCAPI void
sendLinkPacketOfPassengers(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PassengersChangedFlag>>>, class StrictEntityContext const&, struct ActorUniqueIDComponent const&, struct VehicleComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>);
// NOLINTEND

}; // namespace SendLinkPacketOfPassengersSystemImpl
