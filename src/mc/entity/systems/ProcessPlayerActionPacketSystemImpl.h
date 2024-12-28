#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ReplayStateComponent;
class UserEntityIdentifierComponent;
struct PlayerComponent;
struct ServerPlayerCurrentMovementComponent;
// clang-format on

namespace ProcessPlayerActionPacketSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doProcessPlayerActionPacket(
    ::PlayerComponent const&                      playerComponent,
    ::ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovementComponent,
    ::UserEntityIdentifierComponent const&        userIdentifierComponent,
    ::Optional<::ReplayStateComponent const>      replayStateComponent,
    ::ActorOwnerComponent&                        actorOwnerComponent
);
// NOLINTEND

} // namespace ProcessPlayerActionPacketSystemImpl
