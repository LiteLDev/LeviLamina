#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ItemInUseComponent;
struct ItemInUseTicksDuringMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ItemInUseComponentRemoveSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickItemInUseComponentRemoveSystem(
    ::entt::type_list<::Include<::ItemInUseComponent, ::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                                                    entity,
    ::ActorDataFlagComponent const&                                                 actorDataFlagComponent,
    ::EntityModifier<::ItemInUseComponent, ::ItemInUseTicksDuringMovementComponent> modifier
);

MCAPI ::TickingSystemWithInfo createRemoveItemInUseSystem();

MCAPI ::TickingSystemWithInfo createStartOrStopUsingItemSystem();
// NOLINTEND

} // namespace ItemInUseComponentRemoveSystem
