#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace TickMobEffectsSystem { struct RemoveMobEffectsRequestComponent; }
// clang-format on

namespace TickMobEffectsSystem {
// NOLINTBEGIN
MCAPI void _onEffectRemoved(
    struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent const& removeMobEffectsRequest,
    class ActorOwnerComponent&                                           actorOwnerComponent,
    struct MobEffectsComponent&                                          mobEffectsComponent
);

MCAPI void _removeMobEffects(
    struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent const& removeMobEffectsRequest,
    struct AttributesComponent&                                          attributesComponent,
    struct MobEffectsComponent&                                          mobEffectsComponent
);

MCAPI void _tickMobEffects(
    entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>,
    class StrictEntityContext const&                                                    entity,
    struct MobEffectsComponent&                                                         mobEffectsComponent,
    class EntityModifier<struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent> mod
);

MCAPI void registerSystems(class EntitySystems& systemRegistry);
// NOLINTEND

}; // namespace TickMobEffectsSystem
