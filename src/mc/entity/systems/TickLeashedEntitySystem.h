#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class LeashableComponent;
class NavigationComponent;
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
// NOLINTEND

} // namespace TickLeashedEntitySystem
