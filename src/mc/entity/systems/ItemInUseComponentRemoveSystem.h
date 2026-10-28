#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ItemInUseComponent;
struct ItemInUseTicksDuringMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ItemInUseComponentRemoveSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickItemInUseComponentRemoveSystem(
    ::StrictEntityContext const&                                                           entity,
    ::ActorDataFlagComponent const&                                                        actorDataFlagComponent,
    ::EntityModifier<::ItemInUseComponent, ::ItemInUseTicksDuringMovementComponent> const& modifier
);

MCAPI ::TickingSystemWithInfo createRemoveItemInUseSystem();
// NOLINTEND

} // namespace ItemInUseComponentRemoveSystem
