#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace ProcessPlayerActionPacketSystemImpl {
/**
 * @symbol
 * ?doProcessPlayerActionPacket\@ProcessPlayerActionPacketSystemImpl\@\@YAXAEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEBUServerPlayerCurrentMovementComponent\@\@AEBVUserEntityIdentifierComponent\@\@V?$Optional\@$$CBVReplayStateComponent\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
 */
MCAPI void
doProcessPlayerActionPacket(class FlagComponent<struct PlayerComponentFlag> const&, struct ServerPlayerCurrentMovementComponent const&, class UserEntityIdentifierComponent const&, class Optional<class ReplayStateComponent const>, class ActorOwnerComponent&); // NOLINT

}; // namespace ProcessPlayerActionPacketSystemImpl
