#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct ActorUniqueIDComponent;
struct ExitFromPassengerFlagComponent;
struct PassengerComponent;
struct RemovePassengersComponent;
struct SendPacketsComponent;
struct SwitchingVehiclesFlagComponent;
// clang-format on

namespace SetActorLinkPacketSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void sendActorLinkPacket(::StrictEntityContext const& vehicleEntity, ::ActorUniqueIDComponent const& actorUniqueIDComponent, ::RemovePassengersComponent const& removePassengersComponent, ::ViewT<::StrictEntityContext, ::Exclude<::SwitchingVehiclesFlagComponent>, ::ActorUniqueIDComponent const, ::Optional<::ActorIsBeingDestroyedFlagComponent const>, ::Optional<::ExitFromPassengerFlagComponent const>> passengers, ::EntityModifier<::SendPacketsComponent> modifier);

MCNAPI void singleSendActorLinkPacket(::StrictEntityContext const& passengerEntity, ::PassengerComponent const& passengerComponent, ::ViewT<::StrictEntityContext, ::ActorUniqueIDComponent const, ::RemovePassengersComponent> vehicleView, ::ViewT<::StrictEntityContext, ::Exclude<::SwitchingVehiclesFlagComponent>, ::ActorUniqueIDComponent const, ::Optional<::ActorIsBeingDestroyedFlagComponent const>, ::Optional<::ExitFromPassengerFlagComponent const>> passengerView, ::EntityModifier<::SendPacketsComponent> modifier);

MCNAPI void tickSendActorLinkPacket(::ViewT<::StrictEntityContext, ::ActorUniqueIDComponent const, ::RemovePassengersComponent> view, ::ViewT<::StrictEntityContext, ::Exclude<::SwitchingVehiclesFlagComponent>, ::ActorUniqueIDComponent const, ::Optional<::ActorIsBeingDestroyedFlagComponent const>, ::Optional<::ExitFromPassengerFlagComponent const>> passengers, ::EntityModifier<::SendPacketsComponent> modifier);
// NOLINTEND

}
