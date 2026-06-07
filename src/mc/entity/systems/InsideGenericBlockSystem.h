#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct InsideGenericBlockComponent;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace InsideGenericBlockSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void insideGenericBlockSystemSingleEntity(
    ::StrictEntityContext const& entityContext,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent>,
        ::InsideGenericBlockComponent,
        ::ActorOwnerComponent> view
);

MCAPI void tickInsideGenericBlock(
    ::InsideGenericBlockComponent& insideGenericBlockComponent,
    ::ActorOwnerComponent&         actorOwnerComponent
);
// NOLINTEND

} // namespace InsideGenericBlockSystem
