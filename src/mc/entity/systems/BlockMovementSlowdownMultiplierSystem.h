#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace BlockMovementSlowdownMultiplierSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createAdjustFallDistanceSystem();

MCAPI struct TickingSystemWithInfo createApplySlowdownOnMoveSystem();

MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createImmunePlayerSystem();

MCAPI struct TickingSystemWithInfo createImmuneSpiderSystem();

MCAPI struct TickingSystemWithInfo createImmuneWitherBossSystem();

MCAPI struct TickingSystemWithInfo createWeavingMobSystem();

MCAPI void tickAdjustFallDistance(
    struct BlockMovementSlowdownAppliedComponent const& applied,
    struct FallDistanceComponent&                       fallDistanceComponent
);

MCAPI void tickApplySlowdownOnMove(
    struct BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    struct MoveRequestComponent&                     moveRequestComponent,
    struct StateVectorComponent&                     stateComponent
);

MCAPI void tickImmunePlayer(
    class StrictEntityContext const&                                   entity,
    struct BlockMovementSlowdownMultiplierComponent&                   blockMovementSlowdownMultiplierComponent,
    struct MovementAbilitiesComponent const&                           abilitiesComponent,
    class EntityModifier<struct BlockMovementSlowdownAppliedComponent> modifier
);

MCAPI void tickImmuneSlowdown(
    class StrictEntityContext const&                                   entity,
    struct BlockMovementSlowdownMultiplierComponent&                   blockMovementSlowdownMultiplierComponent,
    class EntityModifier<struct BlockMovementSlowdownAppliedComponent> modifier
);

MCAPI void tickWeavingSlowdownOverride(
    class StrictEntityContext const&,
    struct BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    struct MobEffectsComponent const&                mobEffectsComponent
);
// NOLINTEND

}; // namespace BlockMovementSlowdownMultiplierSystem
