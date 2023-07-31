#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlySpeedControlSystem {
// NOLINTBEGIN
/**
 * @symbol ?createSystem\@FlySpeedControlSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createSystem();
/**
 * @symbol
 * ?doFlySpeedControlSystem\@FlySpeedControlSystem\@\@YAXAEBVStrictEntityContext\@\@AEBUAbilitiesComponent\@\@AEBUMoveInputComponent\@\@AEBUActorGameTypeComponent\@\@AEAUFrictionModifierComponent\@\@AEAUStateVectorComponent\@\@AEBUExternalDataInterface\@\@\@Z
 */
MCAPI void
doFlySpeedControlSystem(class StrictEntityContext const&, struct AbilitiesComponent const&, struct MoveInputComponent const&, struct ActorGameTypeComponent const&, struct FrictionModifierComponent&, struct StateVectorComponent&, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace FlySpeedControlSystem
