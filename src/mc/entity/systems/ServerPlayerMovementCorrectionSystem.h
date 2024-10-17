#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerMovementCorrectionSystem {
// NOLINTBEGIN
MCAPI void _afterMovementSimulation(
    class UserEntityIdentifierComponent const& userIdentifier,
    class Actor&                               actor,
    class PlayerAuthInputPacket const&         packet,
    class ReplayStateComponent&                replay,
    struct ActorRotationComponent const*       actorRotation,
    struct StateVectorComponent&               stateVector
);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace ServerPlayerMovementCorrectionSystem
