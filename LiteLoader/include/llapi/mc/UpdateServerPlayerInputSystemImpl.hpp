/**
 * @file  UpdateServerPlayerInputSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace UpdateServerPlayerInputSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_handlePlayerAuthInputPacket\@UpdateServerPlayerInputSystemImpl\@\@YAXAEBUStateVectorComponent\@\@AEAUActorHeadRotationComponent\@\@AEAUActorRotationComponent\@\@AEAUPlayerInputModeComponent\@\@AEAUPlayerInteractionModelComponent\@\@AEAUServerPlayerCurrentMovementComponent\@\@\@Z
     */
    MCAPI void _handlePlayerAuthInputPacket(struct StateVectorComponent const &, struct ActorHeadRotationComponent &, struct ActorRotationComponent &, struct PlayerInputModeComponent &, struct PlayerInteractionModelComponent &, struct ServerPlayerCurrentMovementComponent &);
    /**
     * @symbol ?_updateServerPlayerSneaking\@UpdateServerPlayerInputSystemImpl\@\@YAXAEBUSynchedActorDataComponent\@\@AEAUServerPlayerCurrentMovementComponent\@\@\@Z
     */
    MCAPI void _updateServerPlayerSneaking(struct SynchedActorDataComponent const &, struct ServerPlayerCurrentMovementComponent &);

};