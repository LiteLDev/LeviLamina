#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct LeashKnotFlagComponent;
struct LeashedEntitiesComponent;
struct RemoveFromLeashedEntitiesRequestComponent;
// clang-format on

namespace RemoveKnotWithNoLeashedEntitiesSystem {
// functions
// NOLINTBEGIN
MCAPI void tickEntity(
    ::entt::type_list<
        ::Include<::LeashKnotFlagComponent, ::RemoveFromLeashedEntitiesRequestComponent>,
        ::Exclude<::LeashedEntitiesComponent>> actorOwnerComponent,
    ::ActorOwnerComponent&
);
// NOLINTEND

} // namespace RemoveKnotWithNoLeashedEntitiesSystem
