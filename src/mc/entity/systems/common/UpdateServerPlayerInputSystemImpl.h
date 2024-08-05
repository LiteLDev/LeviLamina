#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UpdateServerPlayerInputSystemImpl {
// NOLINTBEGIN
MCAPI void
_handlePlayerAuthInputPacket(struct StateVectorComponent const&, struct ActorHeadRotationComponent&, struct ActorRotationComponent&, struct PlayerInputModeComponent&, struct PlayerInteractionModelComponent&, struct ServerPlayerCurrentMovementComponent&);
// NOLINTEND

}; // namespace UpdateServerPlayerInputSystemImpl
