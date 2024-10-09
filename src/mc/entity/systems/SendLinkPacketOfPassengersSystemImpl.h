#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace SendLinkPacketOfPassengersSystemImpl {
// NOLINTBEGIN
MCAPI void sendLinkPacketOfPassengers(
    entt::type_list<struct Include<
        class FlagComponent<struct ActorMovementTickNeededFlag>,
        class FlagComponent<struct PassengersChangedFlag>>>,
    class StrictEntityContext const&                  entity,
    struct ActorUniqueIDComponent const&              vehicleUniqueIDComponent,
    struct VehicleComponent&                          vehicleComponent,
    class EntityModifier<struct SendPacketsComponent> modifier,
    class ViewT<
        class StrictEntityContext,
        struct Include<struct PassengerComponent>,
        struct ActorUniqueIDComponent const> passengersView
);
// NOLINTEND

}; // namespace SendLinkPacketOfPassengersSystemImpl
