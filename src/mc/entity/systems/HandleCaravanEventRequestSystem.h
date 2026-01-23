#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct PendingCaravanEventRequestComponent;
// clang-format on

namespace HandleCaravanEventRequestSystem {
// functions
// NOLINTBEGIN
MCNAPI void tickEntity(
    ::StrictEntityContext const&                             context,
    ::ActorOwnerComponent&                                   actorOwnerComponent,
    ::PendingCaravanEventRequestComponent const&             pendingCaravanEventRequestComponent,
    ::EntityModifier<::PendingCaravanEventRequestComponent>& pendingCaravanEventRequestComponentModifier
);

MCNAPI void tickView(
    ::ViewT<::StrictEntityContext, ::ActorOwnerComponent, ::PendingCaravanEventRequestComponent const> view,
    ::EntityModifier<::PendingCaravanEventRequestComponent> pendingCaravanEventRequestComponentModifier
);
// NOLINTEND

} // namespace HandleCaravanEventRequestSystem
