#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/entity/components/FlagComponent.h"

namespace ProcessPlayerActionPacketSystemImpl {
// NOLINTBEGIN
MCAPI void doProcessPlayerActionPacket(
    class FlagComponent<struct PlayerComponentFlag> const& playerComponent,
    struct ServerPlayerCurrentMovementComponent const&     serverPlayerCurrentMovementComponent,
    class UserEntityIdentifierComponent const&             userIdentifierComponent,
    class Optional<class ReplayStateComponent const>       replayStateComponent,
    class ActorOwnerComponent&                             actorOwnerComponent
);
// NOLINTEND

}; // namespace ProcessPlayerActionPacketSystemImpl
