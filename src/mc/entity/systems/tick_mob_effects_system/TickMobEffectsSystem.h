#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct AttributesComponent;
struct MobEffectsComponent;
namespace TickMobEffectsSystem { struct RemoveMobEffectsRequestComponent; }
// clang-format on

namespace TickMobEffectsSystem {
// functions
// NOLINTBEGIN
MCAPI void _removeMobEffects(
    ::TickMobEffectsSystem::RemoveMobEffectsRequestComponent const& removeMobEffectsRequest,
    ::AttributesComponent&                                          attributesComponent,
    ::MobEffectsComponent&                                          mobEffectsComponent
);

MCAPI void registerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace TickMobEffectsSystem
