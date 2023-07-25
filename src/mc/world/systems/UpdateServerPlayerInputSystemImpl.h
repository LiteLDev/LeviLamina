#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpdateServerPlayerInputSystemImpl {
/**
 * @symbol
 * ?_handlePlayerAuthInputPacket\@UpdateServerPlayerInputSystemImpl\@\@YAXAEBUStateVectorComponent\@\@AEAUActorHeadRotationComponent\@\@AEAUActorRotationComponent\@\@AEAUPlayerInputModeComponent\@\@AEAUPlayerInteractionModelComponent\@\@AEAUServerPlayerCurrentMovementComponent\@\@\@Z
 */
MCAPI void
_handlePlayerAuthInputPacket(struct StateVectorComponent const&, struct ActorHeadRotationComponent&, struct ActorRotationComponent&, struct PlayerInputModeComponent&, struct PlayerInteractionModelComponent&, struct ServerPlayerCurrentMovementComponent&);
/**
 * @symbol
 * ?_updateServerPlayerSneaking\@UpdateServerPlayerInputSystemImpl\@\@YAXAEBUSynchedActorDataComponent\@\@AEAUServerPlayerCurrentMovementComponent\@\@\@Z
 */
MCAPI void
_updateServerPlayerSneaking(struct SynchedActorDataComponent const&, struct ServerPlayerCurrentMovementComponent&);

}; // namespace UpdateServerPlayerInputSystemImpl
