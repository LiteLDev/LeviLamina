#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct SheepFlagComponent;
struct SynchedActorDataComponent;
struct TintColorComponent;
// clang-format on

namespace SheepAnimationSystemsImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickJebification(::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::SheepFlagComponent>>, ::TintColorComponent& tintColorComponent, ::SynchedActorDataComponent const& synchedActorDataComponent, ::ActorUniqueIDComponent& actorUniqueIDComponent, ::ActorOwnerComponent& actorOwnerForTickCountOnly);
// NOLINTEND

}
