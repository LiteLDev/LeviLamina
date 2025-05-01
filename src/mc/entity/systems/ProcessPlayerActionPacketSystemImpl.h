#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class UserEntityIdentifierComponent;
struct PlayerComponent;
struct ServerPlayerCurrentMovementComponent;
// clang-format on

namespace ProcessPlayerActionPacketSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doProcessPlayerActionPacket(
    ::PlayerComponent const&                      playerComponent,
    ::ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovementComponent,
    ::UserEntityIdentifierComponent const&        userIdentifierComponent,
    ::ActorOwnerComponent&                        actorOwnerComponent
);
// NOLINTEND

} // namespace ProcessPlayerActionPacketSystemImpl
