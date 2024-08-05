#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VerticalFlySpeedControlSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void
doFlySpeedControlSystem(class StrictEntityContext const&, struct MoveInputComponent const&, struct PlayerInputRequestComponent const&, struct ActorGameTypeComponent const&, struct FrictionModifierComponent&, struct StateVectorComponent&, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace VerticalFlySpeedControlSystem
