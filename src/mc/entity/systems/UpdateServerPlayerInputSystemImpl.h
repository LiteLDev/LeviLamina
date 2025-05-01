#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct PlayerInputModeComponent;
struct PlayerInteractionModelComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
// clang-format on

namespace UpdateServerPlayerInputSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void _handlePlayerAuthInputPacket(
    ::StateVectorComponent const&           stateVector,
    ::ActorHeadRotationComponent&           actorHeadRotationComponent,
    ::ActorRotationComponent&               actorRotationComponent,
    ::PlayerInputModeComponent&             playerInputModeComponent,
    ::PlayerInteractionModelComponent&      playerInteractionModelComponent,
    ::ServerPlayerCurrentMovementComponent& serverPlayerCurrentMovementComponent
);
// NOLINTEND

} // namespace UpdateServerPlayerInputSystemImpl
