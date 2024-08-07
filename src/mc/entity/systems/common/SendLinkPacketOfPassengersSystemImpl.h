#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SendLinkPacketOfPassengersSystemImpl {
// NOLINTBEGIN
MCAPI void
sendLinkPacketOfPassengers(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PassengersChangedFlag>>>, class StrictEntityContext const&, struct ActorUniqueIDComponent const&, struct VehicleComponent&, class EntityModifier<struct SendPacketsComponent>, class ViewT<class StrictEntityContext, struct Include<struct PassengerComponent>, struct ActorUniqueIDComponent const>);
// NOLINTEND

}; // namespace SendLinkPacketOfPassengersSystemImpl
