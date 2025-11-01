#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
class UserEntityIdentifierComponent;
struct ActorMovementTickNeededComponent;
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

MCNAPI void tickSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::PlayerComponent const,
        ::ServerPlayerCurrentMovementComponent const,
        ::UserEntityIdentifierComponent const,
        ::ActorOwnerComponent> view
);
// NOLINTEND

} // namespace ProcessPlayerActionPacketSystemImpl
