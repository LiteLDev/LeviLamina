#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct ActorUniqueIDComponent;
struct InterpolateMovementNeededComponent;
struct SheepFlagComponent;
struct SynchedActorDataComponent;
struct TintColorComponent;
// clang-format on

namespace SheepAnimationSystemsImpl {
// functions
// NOLINTBEGIN
MCAPI void tickJebification(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::SheepFlagComponent>>,
    ::TintColorComponent&              tintColorComponent,
    ::SynchedActorDataComponent const& synchedActorDataComponent,
    ::ActorUniqueIDComponent&          actorUniqueIDComponent,
    ::ActorOwnerComponent&             actorOwnerForTickCountOnly
);
// NOLINTEND

} // namespace SheepAnimationSystemsImpl
