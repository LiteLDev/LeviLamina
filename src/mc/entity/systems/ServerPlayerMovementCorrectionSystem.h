#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerMovementCorrectionSystem {
// NOLINTBEGIN
MCAPI void
_afterMovementSimulation(class UserEntityIdentifierComponent const&, class Actor&, class PlayerAuthInputPacket const&, class ReplayStateComponent&, struct ActorRotationComponent const*, struct StateVectorComponent&);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace ServerPlayerMovementCorrectionSystem
