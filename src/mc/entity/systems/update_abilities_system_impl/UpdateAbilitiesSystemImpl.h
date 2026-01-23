#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AbilitiesComponent;
struct AbilitiesRequestComponent;
struct ActorMovementTickNeededComponent;
// clang-format on

namespace UpdateAbilitiesSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickProcessRequests(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                  entity,
    ::AbilitiesComponent&                         abilities,
    ::AbilitiesRequestComponent const&            abilitiesRequest,
    ::EntityModifier<::AbilitiesRequestComponent> modifier
);
// NOLINTEND

} // namespace UpdateAbilitiesSystemImpl
