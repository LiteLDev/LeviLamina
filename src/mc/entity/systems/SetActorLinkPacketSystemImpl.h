#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/entity/components/FlagComponent.h"

namespace SetActorLinkPacketSystemImpl {
// NOLINTBEGIN
MCAPI void sendActorLinkPacket(
    class StrictEntityContext const&        vehicleEntity,
    struct ActorUniqueIDComponent const&    actorUniqueIDComponent,
    struct RemovePassengersComponent const& removePassengersComponent,
    class ViewT<
        class StrictEntityContext,
        struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>,
        struct ActorUniqueIDComponent const,
        class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>,
        class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>> passengers,
    class EntityModifier<struct SendPacketsComponent>                            modifier
);

MCAPI void singleSendActorLinkPacket(
    class StrictEntityContext const& passengerEntity,
    struct PassengerComponent const& passengerComponent,
    class ViewT<class StrictEntityContext, struct ActorUniqueIDComponent const, struct RemovePassengersComponent>
        vehicleView,
    class ViewT<
        class StrictEntityContext,
        struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>,
        struct ActorUniqueIDComponent const,
        class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>,
        class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>> passengerView,
    class EntityModifier<struct SendPacketsComponent>                            modifier
);

MCAPI void tickSendActorLinkPacket(
    class ViewT<class StrictEntityContext, struct ActorUniqueIDComponent const, struct RemovePassengersComponent> view,
    class ViewT<
        class StrictEntityContext,
        struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>,
        struct ActorUniqueIDComponent const,
        class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>,
        class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>> passengers,
    class EntityModifier<struct SendPacketsComponent>                            modifier
);
// NOLINTEND

}; // namespace SetActorLinkPacketSystemImpl
