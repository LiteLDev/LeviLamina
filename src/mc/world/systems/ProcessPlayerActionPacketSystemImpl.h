#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace ProcessPlayerActionPacketSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doProcessPlayerActionPacket@ProcessPlayerActionPacketSystemImpl@@YAXAEBV?$FlagComponent@UPlayerComponentFlag@@@@AEBUServerPlayerCurrentMovementComponent@@AEBVUserEntityIdentifierComponent@@V?$Optional@$$CBVReplayStateComponent@@@@AEAVActorOwnerComponent@@@Z
MCAPI void
doProcessPlayerActionPacket(class FlagComponent<struct PlayerComponentFlag> const&, struct ServerPlayerCurrentMovementComponent const&, class UserEntityIdentifierComponent const&, class Optional<class ReplayStateComponent const>, class ActorOwnerComponent&);
// NOLINTEND

}; // namespace ProcessPlayerActionPacketSystemImpl
