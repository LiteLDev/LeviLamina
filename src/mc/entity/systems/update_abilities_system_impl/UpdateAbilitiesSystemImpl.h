#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AbilitiesRequestComponent;
struct ActorMovementTickNeededComponent;
struct AntiCheatRewindFlagComponent;
struct MovementAbilitiesComponent;
// clang-format on

namespace UpdateAbilitiesSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickAntiCheatProcessRequests(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::AntiCheatRewindFlagComponent>>,
    ::StrictEntityContext const&                  entity,
    ::MovementAbilitiesComponent&                 abilities,
    ::AbilitiesRequestComponent const&            abilitiesRequest,
    ::EntityModifier<::AbilitiesRequestComponent> modifier
);
// NOLINTEND

} // namespace UpdateAbilitiesSystemImpl
