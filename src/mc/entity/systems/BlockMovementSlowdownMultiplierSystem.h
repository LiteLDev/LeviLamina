#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct FallDistanceComponent;
struct MobEffectsComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace BlockMovementSlowdownMultiplierSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createAdjustFallDistanceSystem();

MCAPI ::TickingSystemWithInfo createApplySlowdownOnMoveSystem();

MCAPI ::TickingSystemWithInfo createCleanupSystem();

MCAPI ::TickingSystemWithInfo createImmunePlayerSystem();

MCAPI ::TickingSystemWithInfo createImmuneSpiderSystem();

MCAPI ::TickingSystemWithInfo createImmuneWitherBossSystem();

MCAPI ::TickingSystemWithInfo createWeavingMobSystem();

MCAPI void tickAdjustFallDistance(
    ::BlockMovementSlowdownAppliedComponent const& applied,
    ::FallDistanceComponent&                       fallDistanceComponent
);

MCAPI void tickApplySlowdownOnMove(
    ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    ::MoveRequestComponent&                     moveRequestComponent,
    ::StateVectorComponent&                     stateComponent
);

MCAPI void tickImmunePlayer(
    ::StrictEntityContext const&                              entity,
    ::BlockMovementSlowdownMultiplierComponent&               blockMovementSlowdownMultiplierComponent,
    ::MovementAbilitiesComponent const&                       abilitiesComponent,
    ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier
);

MCAPI void tickImmuneSlowdown(
    ::StrictEntityContext const&                              entity,
    ::BlockMovementSlowdownMultiplierComponent&               blockMovementSlowdownMultiplierComponent,
    ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier
);

MCAPI void tickWeavingSlowdownOverride(
    ::StrictEntityContext const&,
    ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    ::MobEffectsComponent const&                mobEffectsComponent
);
// NOLINTEND

} // namespace BlockMovementSlowdownMultiplierSystem
