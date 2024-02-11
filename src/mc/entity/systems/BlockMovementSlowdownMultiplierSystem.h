#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace BlockMovementSlowdownMultiplierSystem {
// NOLINTBEGIN
// symbol: ?createAdjustFallDistanceSystem@BlockMovementSlowdownMultiplierSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createAdjustFallDistanceSystem();

// symbol: ?createApplySlowdownOnMoveSystem@BlockMovementSlowdownMultiplierSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createApplySlowdownOnMoveSystem();

// symbol: ?createCleanupSystem@BlockMovementSlowdownMultiplierSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCleanupSystem();

// symbol: ?createImmunePlayerSystem@BlockMovementSlowdownMultiplierSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createImmunePlayerSystem();

// symbol: ?createImmuneSpiderSystem@BlockMovementSlowdownMultiplierSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createImmuneSpiderSystem();

// symbol: ?createImmuneWitherBossSystem@BlockMovementSlowdownMultiplierSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createImmuneWitherBossSystem();

// symbol:
// ?tickAdjustFallDistance@BlockMovementSlowdownMultiplierSystem@@YAXAEBUBlockMovementSlowdownAppliedComponent@@AEAUFallDistanceComponent@@@Z
MCAPI void tickAdjustFallDistance(struct BlockMovementSlowdownAppliedComponent const&, struct FallDistanceComponent&);

// symbol:
// ?tickApplySlowdownOnMove@BlockMovementSlowdownMultiplierSystem@@YAXAEAUBlockMovementSlowdownMultiplierComponent@@AEAUMoveRequestComponent@@AEAUStateVectorComponent@@@Z
MCAPI void
tickApplySlowdownOnMove(struct BlockMovementSlowdownMultiplierComponent&, struct MoveRequestComponent&, struct StateVectorComponent&);

// symbol:
// ?tickImmunePlayer@BlockMovementSlowdownMultiplierSystem@@YAXAEBVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@AEBUMovementAbilitiesComponent@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@@@@Z
MCAPI void
tickImmunePlayer(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, struct MovementAbilitiesComponent const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent>);

// symbol:
// ?tickImmuneSlowdown@BlockMovementSlowdownMultiplierSystem@@YAXAEBVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@@@@Z
MCAPI void
tickImmuneSlowdown(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent>);
// NOLINTEND

}; // namespace BlockMovementSlowdownMultiplierSystem
