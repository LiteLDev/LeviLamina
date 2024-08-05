#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace BlockMovementSlowdownMultiplierSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createAdjustFallDistanceSystem();

MCAPI struct TickingSystemWithInfo createApplySlowdownOnMoveSystem();

MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createImmunePlayerSystem();

MCAPI struct TickingSystemWithInfo createImmuneSpiderSystem();

MCAPI struct TickingSystemWithInfo createImmuneWitherBossSystem();

MCAPI struct TickingSystemWithInfo createWeavingMobSystem();

MCAPI void tickAdjustFallDistance(struct BlockMovementSlowdownAppliedComponent const&, struct FallDistanceComponent&);

MCAPI void
tickApplySlowdownOnMove(struct BlockMovementSlowdownMultiplierComponent&, struct MoveRequestComponent&, struct StateVectorComponent&);

MCAPI void
tickImmunePlayer(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, struct MovementAbilitiesComponent const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent>);

MCAPI void
tickImmuneSlowdown(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent>);

MCAPI void
tickWeavingSlowdownOverride(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, struct MobEffectsComponent const&);
// NOLINTEND

}; // namespace BlockMovementSlowdownMultiplierSystem
