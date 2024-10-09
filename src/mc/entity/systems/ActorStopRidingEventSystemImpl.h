#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ActorStopRidingEventSystemImpl {
// NOLINTBEGIN
MCAPI void tickHandlerEvent(
    entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>,
    class StrictEntityContext const&                                            entity,
    class ActorOwnerComponent const&                                            actorOwnerComponent,
    struct PassengerComponent const&                                            passengerComponent,
    class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const> actorIsBeingDestroyedFlagComponent,
    class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>     exitFromPassengerFlagComponent,
    class Optional<class FlagComponent<struct SwitchingVehiclesFlag> const>     switchingVehiclesFlagComponent,
    class ViewT<class StrictEntityContext, struct Include<struct VehicleComponent>, class ActorOwnerComponent const>
                                                                            vehicles,
    class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>> modifier
);

MCAPI void tickListenerEvent(
    entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>,
    class ActorOwnerComponent const&                                            actorOwnerComponent,
    class Optional<class FlagComponent<struct LocalPlayerComponentFlag> const>  localPlayerFlag,
    class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const> actorIsBeingDestroyedFlag,
    class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>     exitFromPassengerFlag,
    class Optional<class FlagComponent<struct SwitchingVehiclesFlag> const>     switchingVehiclesFlag
);
// NOLINTEND

}; // namespace ActorStopRidingEventSystemImpl
