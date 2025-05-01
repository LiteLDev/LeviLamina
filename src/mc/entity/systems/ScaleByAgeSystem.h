#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class AgeableComponent;
class BaseGameVersion;
class EntitySystems;
class ScaleByAgeComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorTickedComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
// clang-format on

namespace ScaleByAgeSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tick(
    ::entt::type_list<::Include<::ActorTickedComponent>>,
    ::StrictEntityContext const&                                entity,
    ::AgeableComponent const&                                   ageableComponent,
    ::ActorDataBoundingBoxComponent&                            actorDataBoundingBox,
    ::ActorDataDirtyFlagsComponent&                             actorDataDirtyFlags,
    ::ActorOwnerComponent&                                      actorOwnerComponent,
    ::ScaleByAgeComponent&                                      scaleByAgeComponent,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> mod
);

MCNAPI void registerSystems(::EntitySystems& systemRegistry, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

} // namespace ScaleByAgeSystem
