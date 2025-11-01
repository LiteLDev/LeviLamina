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
MCNAPI void tickHandlerEvent(::entt::type_list<::Include<::StopRidingRequestComponent>>, ::StrictEntityContext const& entity, ::ActorOwnerComponent const& actorOwnerComponent, ::PassengerComponent const& passengerComponent, ::Optional<::ActorIsBeingDestroyedFlagComponent const> actorIsBeingDestroyedFlagComponent, ::Optional<::ExitFromPassengerFlagComponent const> exitFromPassengerFlagComponent, ::Optional<::SwitchingVehiclesFlagComponent const> switchingVehiclesFlagComponent, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>, ::ActorOwnerComponent const> vehicles, ::EntityModifier<::StopRidingRequestComponent> modifier);

MCNAPI void tickListenerEvent(::entt::type_list<::Include<::StopRidingRequestComponent>>, ::ActorOwnerComponent const& actorOwnerComponent, ::Optional<::LocalPlayerComponent const> localPlayerFlag, ::Optional<::ActorIsBeingDestroyedFlagComponent const> actorIsBeingDestroyedFlag, ::Optional<::ExitFromPassengerFlagComponent const> exitFromPassengerFlag, ::Optional<::SwitchingVehiclesFlagComponent const> switchingVehiclesFlag);
// NOLINTEND

}
