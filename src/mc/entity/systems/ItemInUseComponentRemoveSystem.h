#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ItemInUseComponent;
struct ItemInUseTicksDuringMovementComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ItemInUseComponentRemoveSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickItemInUseComponentRemoveSystem(
    ::entt::type_list<::Include<::ItemInUseComponent, ::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                                           actorDataFlagComponent,
    ::ActorDataFlagComponent const&                                                        modifier,
    ::EntityModifier<::ItemInUseComponent, ::ItemInUseTicksDuringMovementComponent>
);

MCAPI void _tickStartOrStopUsingItemSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> playerComponent,
    ::StrictEntityContext const&                                     actorDataFlagComponent,
    ::PlayerComponent const&                                         actorOwnerComponent,
    ::ActorDataFlagComponent const&,
    ::ActorOwnerComponent&
);

MCAPI ::TickingSystemWithInfo createRemoveItemInUseSystem();

MCAPI ::TickingSystemWithInfo createStartOrStopUsingItemSystem();
// NOLINTEND

} // namespace ItemInUseComponentRemoveSystem
