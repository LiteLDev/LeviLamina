#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

MCNAPI void teleportTo(::StrictEntityContext& entityContext, ::ActorOwnerComponent& actorOwnerComponent, ::TeleportToRequestComponent const& teleportToRequestComponent, ::EntityModifier<::TeleportToRequestComponent> modifier);
// NOLINTEND

}
