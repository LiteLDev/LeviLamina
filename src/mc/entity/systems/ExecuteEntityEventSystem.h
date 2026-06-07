#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ExecuteEntityEventRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ExecuteEntityEventSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tick(
    ::StrictEntityContext const&                           entity,
    ::ActorOwnerComponent&                                 actorOwnerComponent,
    ::ExecuteEntityEventRequestComponent const&            executeEventRequestComponent,
    ::EntityModifier<::ExecuteEntityEventRequestComponent> modifier
);
// NOLINTEND

} // namespace ExecuteEntityEventSystem
