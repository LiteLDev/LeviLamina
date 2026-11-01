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
MCNAPI void _tickItemInUseComponentRemoveSystem(
    ::StrictEntityContext const&                                                           entity,
    ::ActorDataFlagComponent const&                                                        actorDataFlagComponent,
    ::EntityModifier<::ItemInUseComponent, ::ItemInUseTicksDuringMovementComponent> const& modifier
);

MCNAPI ::TickingSystemWithInfo createRemoveItemInUseSystem();
// NOLINTEND

} // namespace ItemInUseComponentRemoveSystem
