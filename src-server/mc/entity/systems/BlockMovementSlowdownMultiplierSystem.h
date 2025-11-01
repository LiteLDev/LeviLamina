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
MCNAPI ::TickingSystemWithInfo createAdjustFallDistanceSystem();

MCNAPI ::TickingSystemWithInfo createCleanupSystem();

MCNAPI ::TickingSystemWithInfo createWeavingMobSystem();

MCNAPI void tickAdjustFallDistance(::BlockMovementSlowdownAppliedComponent const& applied, ::FallDistanceComponent& fallDistanceComponent);

MCNAPI void tickApplySlowdownOnMove(::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent, ::MoveRequestComponent& moveRequestComponent, ::StateVectorComponent& stateComponent);

MCNAPI void tickImmunePlayer(::StrictEntityContext const& entity, ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent, ::MovementAbilitiesComponent const& abilitiesComponent, ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier);

MCNAPI void tickImmuneSlowdown(::StrictEntityContext const& entity, ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent, ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier);

MCNAPI void tickWeavingSlowdownOverride(::StrictEntityContext const&, ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent, ::MobEffectsComponent const& mobEffectsComponent);
// NOLINTEND

}
