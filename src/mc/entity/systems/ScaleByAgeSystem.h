#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ScaleByAgeSystem {
// NOLINTBEGIN
MCAPI void _tick(
    entt::type_list<struct Include<class FlagComponent<struct ActorTickedFlag>>>,
    class StrictEntityContext const&                                     entity,
    class AgeableComponent const&                                        ageableComponent,
    struct ActorDataBoundingBoxComponent&                                actorDataBoundingBox,
    struct ActorDataDirtyFlagsComponent&                                 actorDataDirtyFlags,
    class ActorOwnerComponent&                                           actorOwnerComponent,
    class ScaleByAgeComponent&                                           scaleByAgeComponent,
    class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent> mod
);

MCAPI void registerSystems(class EntitySystems& systemRegistry, class BaseGameVersion const& baseGameVersion);
// NOLINTEND

}; // namespace ScaleByAgeSystem
