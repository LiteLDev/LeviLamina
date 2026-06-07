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
struct AntiCheatRewindFlagComponent;
struct MovementAbilitiesComponent;
// clang-format on

namespace UpdateAbilitiesSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickClientProcessRequests(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::AntiCheatRewindFlagComponent>> entity,
    ::StrictEntityContext const&                                                                     abilities,
    ::MovementAbilitiesComponent&                                                                    abilitiesRequest,
    ::AbilitiesRequestComponent const&                                                               modifier,
    ::EntityModifier<::AbilitiesRequestComponent>
);

MCAPI void tickProcessRequests(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     abilities,
    ::AbilitiesComponent&                                            abilitiesRequest,
    ::AbilitiesRequestComponent const&                               modifier,
    ::EntityModifier<::AbilitiesRequestComponent>
);
// NOLINTEND

} // namespace UpdateAbilitiesSystemImpl
