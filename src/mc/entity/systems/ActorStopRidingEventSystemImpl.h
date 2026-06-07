#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct ExitFromPassengerFlagComponent;
struct LocalPlayerComponent;
struct PassengerComponent;
struct StopRidingRequestComponent;
struct SwitchingVehiclesFlagComponent;
struct VehicleComponent;
// clang-format on

namespace ActorStopRidingEventSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickHandlerEvent(
    ::entt::type_list<::Include<::StopRidingRequestComponent>> entity,
    ::StrictEntityContext const&                               actorOwnerComponent,
    ::ActorOwnerComponent const&                               passengerComponent,
    ::PassengerComponent const&                                actorIsBeingDestroyedFlagComponent,
    ::Optional<::ActorIsBeingDestroyedFlagComponent const>     exitFromPassengerFlagComponent,
    ::Optional<::ExitFromPassengerFlagComponent const>         switchingVehiclesFlagComponent,
    ::Optional<::SwitchingVehiclesFlagComponent const>         vehicles,
    ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>, ::ActorOwnerComponent const> modifier,
    ::EntityModifier<::StopRidingRequestComponent>
);

MCAPI void tickListenerEvent(
    ::entt::type_list<::Include<::StopRidingRequestComponent>> actorOwnerComponent,
    ::ActorOwnerComponent const&                               localPlayerFlag,
    ::Optional<::LocalPlayerComponent const>                   actorIsBeingDestroyedFlag,
    ::Optional<::ActorIsBeingDestroyedFlagComponent const>     exitFromPassengerFlag,
    ::Optional<::ExitFromPassengerFlagComponent const>         switchingVehiclesFlag,
    ::Optional<::SwitchingVehiclesFlagComponent const>
);
// NOLINTEND

} // namespace ActorStopRidingEventSystemImpl
