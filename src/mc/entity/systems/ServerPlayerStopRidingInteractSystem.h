#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ActorRuntimeID;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct PassengerComponent;
struct ServerPlayerInteractComponent;
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerStopRidingInteractSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void makePassengerStopRiding(
    ::ActorOwnerComponent&           actorOwnerComponent,
    ::ServerPlayerMovementComponent* serverPlayerMovementComponent,
    ::ActorRuntimeID const&          vehicleID
);

MCAPI void tickServerPlayerStopRidingPacket(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     stopRidingRequest,
    ::ServerPlayerInteractComponent const&                           isPassenger,
    ::Optional<::PassengerComponent const>                           serverPlayerMovementComponent,
    ::Optional<::ServerPlayerMovementComponent>                      actorOwnerComponent,
    ::ActorOwnerComponent&                                           modifier,
    ::EntityModifier<::ServerPlayerInteractComponent>
);
// NOLINTEND

} // namespace ServerPlayerStopRidingInteractSystem
