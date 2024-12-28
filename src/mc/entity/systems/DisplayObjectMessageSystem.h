#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySystems;
struct DisplayObjectMessageRequestComponent;
struct LocalPlayerComponent;
// clang-format on

namespace DisplayObjectMessageSystem {
// functions
// NOLINTBEGIN
MCAPI void createSystems(::EntitySystems& systemRegistry);

MCAPI void tick(
    ::entt::type_list<::Include<::LocalPlayerComponent>>,
    ::DisplayObjectMessageRequestComponent const& request,
    ::ActorOwnerComponent&                        actorOwner
);
// NOLINTEND

} // namespace DisplayObjectMessageSystem
