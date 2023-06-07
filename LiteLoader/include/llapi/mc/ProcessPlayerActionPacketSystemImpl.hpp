/**
 * @file  ProcessPlayerActionPacketSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ProcessPlayerActionPacketSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doProcessPlayerActionPacket\@ProcessPlayerActionPacketSystemImpl\@\@YAXAEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEBUServerPlayerCurrentMovementComponent\@\@AEBVUserEntityIdentifierComponent\@\@V?$Optional\@$$CBVReplayStateComponent\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI void doProcessPlayerActionPacket(class FlagComponent<struct PlayerComponentFlag> const &, struct ServerPlayerCurrentMovementComponent const &, class UserEntityIdentifierComponent const &, class Optional<class ReplayStateComponent const>, class ActorOwnerComponent &);

};