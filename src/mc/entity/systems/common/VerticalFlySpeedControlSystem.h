#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VerticalFlySpeedControlSystem {
// NOLINTBEGIN
// symbol: ?createSystem@VerticalFlySpeedControlSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doFlySpeedControlSystem@VerticalFlySpeedControlSystem@@YAXAEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUPlayerInputRequestComponent@@AEBUActorGameTypeComponent@@AEAUFrictionModifierComponent@@AEAUStateVectorComponent@@AEBUExternalDataInterface@@@Z
MCAPI void
doFlySpeedControlSystem(class StrictEntityContext const&, struct MoveInputComponent const&, struct PlayerInputRequestComponent const&, struct ActorGameTypeComponent const&, struct FrictionModifierComponent&, struct StateVectorComponent&, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace VerticalFlySpeedControlSystem
