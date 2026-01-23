#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct TeleportToRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace TeleportToSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void processAllTeleportToRequestsSystem(
    ::ViewT<::StrictEntityContext, ::ActorOwnerComponent, ::TeleportToRequestComponent const> view,
    ::EntityModifier<::TeleportToRequestComponent>                                            modifier
);

MCNAPI void teleportTo(
    ::StrictEntityContext&                         entityContext,
    ::ActorOwnerComponent&                         actorOwnerComponent,
    ::TeleportToRequestComponent const&            teleportToRequestComponent,
    ::EntityModifier<::TeleportToRequestComponent> modifier
);
// NOLINTEND

} // namespace TeleportToSystem
