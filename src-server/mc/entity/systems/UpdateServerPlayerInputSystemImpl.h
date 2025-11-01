#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorHeadRotationComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct PlayerComponent;
struct PlayerInputModeComponent;
struct PlayerInteractionModelComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
// clang-format on

namespace UpdateServerPlayerInputSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void _handlePlayerAuthInputPacket(::StateVectorComponent const& stateVector, ::ActorHeadRotationComponent& actorHeadRotationComponent, ::ActorRotationComponent& actorRotationComponent, ::PlayerInputModeComponent& playerInputModeComponent, ::PlayerInteractionModelComponent& playerInteractionModelComponent, ::ServerPlayerCurrentMovementComponent& serverPlayerCurrentMovementComponent);

MCAPI void _tickUpdateServerPlayerInputSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>, ::StateVectorComponent const, ::ActorHeadRotationComponent, ::ActorRotationComponent, ::PlayerInputModeComponent, ::PlayerInteractionModelComponent, ::ServerPlayerCurrentMovementComponent> view);
// NOLINTEND

}
