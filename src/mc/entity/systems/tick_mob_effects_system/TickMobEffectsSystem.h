#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
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

MCAPI void _tickMobEffects(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                                               entity,
    ::MobEffectsComponent&                                                     mobEffectsComponent,
    ::EntityModifier<::TickMobEffectsSystem::RemoveMobEffectsRequestComponent> mod
);

MCAPI void registerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace TickMobEffectsSystem
