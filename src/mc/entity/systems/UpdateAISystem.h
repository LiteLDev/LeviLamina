#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MobFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace UpdateAISystem {
// functions
// NOLINTBEGIN
MCAPI void _tick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::MobFlagComponent>,
        ::ActorOwnerComponent> view
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace UpdateAISystem
