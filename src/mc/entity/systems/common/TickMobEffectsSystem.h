#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace TickMobEffectsSystem { struct RemoveMobEffectsRequestComponent; }
// clang-format on

namespace TickMobEffectsSystem {
// NOLINTBEGIN
MCAPI void
_onEffectRemoved(struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent const&, class ActorOwnerComponent&, struct MobEffectsComponent&);

MCAPI void
_removeMobEffects(struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent const&, struct AttributesComponent&, struct MobEffectsComponent&);

MCAPI void
_tickMobEffects(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct MobEffectsComponent&, class EntityModifier<struct TickMobEffectsSystem::RemoveMobEffectsRequestComponent>);

MCAPI void registerSystems(class EntitySystems&);
// NOLINTEND

}; // namespace TickMobEffectsSystem
