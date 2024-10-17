#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpdateServerPlayerInputSystemImpl {
// NOLINTBEGIN
MCAPI void _handlePlayerAuthInputPacket(
    struct StateVectorComponent const&           stateVector,
    struct ActorHeadRotationComponent&           actorHeadRotationComponent,
    struct ActorRotationComponent&               actorRotationComponent,
    struct PlayerInputModeComponent&             playerInputModeComponent,
    struct PlayerInteractionModelComponent&      playerInteractionModelComponent,
    struct ServerPlayerCurrentMovementComponent& serverPlayerCurrentMovementComponent
);
// NOLINTEND

}; // namespace UpdateServerPlayerInputSystemImpl
