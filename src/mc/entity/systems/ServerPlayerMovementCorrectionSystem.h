#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class PlayerAuthInputPacket;
class ReplayStateComponent;
class StrictEntityContext;
class UserEntityIdentifierComponent;
struct ActorRotationComponent;
struct BoatMovementComponent;
struct PassengerComponent;
struct ServerPlayerCurrentMovementComponent;
struct ServerPlayerMovementComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerMovementCorrectionSystem {
// functions
// NOLINTBEGIN
MCAPI void _afterMovementSimulation(
    ::UserEntityIdentifierComponent const& userIdentifier,
    ::Actor&                               actor,
    ::PlayerAuthInputPacket const&         packet,
    ::ReplayStateComponent&                replay,
    ::ActorRotationComponent const*        actorRotation,
    ::ServerPlayerMovementComponent&       serverPlayerMovement,
    ::StateVectorComponent&                stateVector,
    ::BoatMovementComponent const*         boat
);

MCAPI void _tickServerPlayerMovementCorrectionSystem(
    ::StrictEntityContext const&                  player,
    ::ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovementComponent,
    ::UserEntityIdentifierComponent const&        userIdentifierComponent,
    ::ServerPlayerMovementComponent&              serverPlayerMovementComponent,
    ::Optional<::PassengerComponent const>        passengerComponent,
    ::StateVectorComponent&                       playerStateVector,
    ::ViewT<
        ::StrictEntityContext,
        ::ActorRotationComponent const,
        ::ActorOwnerComponent,
        ::ReplayStateComponent,
        ::StateVectorComponent,
        ::Optional<::BoatMovementComponent const>> const& replayableEntityView
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace ServerPlayerMovementCorrectionSystem
