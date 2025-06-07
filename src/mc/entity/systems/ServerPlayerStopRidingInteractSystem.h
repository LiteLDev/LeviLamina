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
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void makePassengerStopRiding(
    ::ActorOwnerComponent&           actorOwnerComponent,
    ::ServerPlayerMovementComponent* serverPlayerMovementComponent,
    ::ActorRuntimeID const&          vehicleID
);

MCNAPI void tickServerPlayerStopRidingPacket(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                      entity,
    ::ServerPlayerInteractComponent const&            stopRidingRequest,
    ::Optional<::PassengerComponent const>            isPassenger,
    ::Optional<::ServerPlayerMovementComponent>       serverPlayerMovementComponent,
    ::ActorOwnerComponent&                            actorOwnerComponent,
    ::EntityModifier<::ServerPlayerInteractComponent> modifier
);
// NOLINTEND

} // namespace ServerPlayerStopRidingInteractSystem
