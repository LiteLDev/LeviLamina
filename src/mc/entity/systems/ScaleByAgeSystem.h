#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class BaseGameVersion;
class EntitySystems;
class ScaleByAgeComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorTickedComponent;
struct AgeableComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
// clang-format on

namespace ScaleByAgeSystem {
// functions
// NOLINTBEGIN
MCAPI void _tick(
    ::entt::type_list<::Include<::ActorTickedComponent>> entity,
    ::StrictEntityContext const&                         ageableComponent,
    ::AgeableComponent const&                            actorDataBoundingBox,
    ::ActorDataBoundingBoxComponent&                     actorDataDirtyFlags,
    ::ActorDataDirtyFlagsComponent&                      actorOwnerComponent,
    ::ActorOwnerComponent&                               scaleByAgeComponent,
    ::ScaleByAgeComponent&                               mod,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>
);

MCAPI void registerSystems(::EntitySystems& systemRegistry, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

} // namespace ScaleByAgeSystem
