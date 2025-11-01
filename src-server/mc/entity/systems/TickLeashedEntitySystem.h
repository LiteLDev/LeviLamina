#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class LeashableComponent;
class NavigationComponent;
class StrictEntityContext;
struct ActorTickedComponent;
struct CurrentTickComponent;
// clang-format on

namespace TickLeashedEntitySystem {
// functions
// NOLINTBEGIN
MCNAPI void tickEntity(
    ::LeashableComponent&             leashableComponent,
    ::ActorOwnerComponent&            actorOwnerComponent,
    ::Optional<::NavigationComponent> navigationComponent,
    ::CurrentTickComponent const&     currentTick
);

MCNAPI void tickView(
    ::OptionalGlobal<::CurrentTickComponent const> currentTickComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorTickedComponent const>,
        ::LeashableComponent,
        ::ActorOwnerComponent,
        ::Optional<::NavigationComponent>> view
);
// NOLINTEND

} // namespace TickLeashedEntitySystem
