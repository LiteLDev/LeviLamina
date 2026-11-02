#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct MobEffectsComponent;
struct MovementAbilitiesComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace BlockMovementSlowdownMultiplierSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createAdjustFallDistanceSystem();

MCNAPI ::TickingSystemWithInfo createImmunePlayerSystem();

MCNAPI ::TickingSystemWithInfo createImmuneWitherBossSystem();

MCNAPI ::TickingSystemWithInfo createWeavingMobSystem();

MCNAPI void tickImmunePlayer(
    ::StrictEntityContext const&                                     entity,
    ::BlockMovementSlowdownMultiplierComponent&                      blockMovementSlowdownMultiplierComponent,
    ::MovementAbilitiesComponent const&                              abilitiesComponent,
    ::EntityModifier<::BlockMovementSlowdownAppliedComponent> const& modifier
);

MCNAPI void tickImmuneSlowdown(
    ::StrictEntityContext const&                                     entity,
    ::BlockMovementSlowdownMultiplierComponent&                      blockMovementSlowdownMultiplierComponent,
    ::EntityModifier<::BlockMovementSlowdownAppliedComponent> const& modifier
);

MCNAPI void tickWeavingSlowdownOverride(
    ::StrictEntityContext const&,
    ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    ::MobEffectsComponent const&                mobEffectsComponent
);
// NOLINTEND

} // namespace BlockMovementSlowdownMultiplierSystem
