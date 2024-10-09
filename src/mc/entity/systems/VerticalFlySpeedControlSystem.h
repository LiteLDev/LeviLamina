#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VerticalFlySpeedControlSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void doFlySpeedControlSystem(
    class StrictEntityContext const&,
    struct MoveInputComponent const&          moveInputComponent,
    struct PlayerInputRequestComponent const& playerInputRequestComponent,
    struct ActorGameTypeComponent const&      actorGameTypeComponent,
    struct FrictionModifierComponent&         frictionModifierComponent,
    struct StateVectorComponent&              stateVectorComponent,
    struct ExternalDataInterface const&       externalData
);
// NOLINTEND

}; // namespace VerticalFlySpeedControlSystem
