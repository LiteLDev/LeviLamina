#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
class UserEntityIdentifierComponent;
struct PlayerComponent;
struct ShouldAwardWhoNeedsRocketsAchievementFlagComponent;
// clang-format on

namespace AwardWhoNeedsRocketsAchievementSystem {
// functions
// NOLINTBEGIN
MCAPI void sendEvent(
    ::entt::type_list<::Include<::PlayerComponent, ::ShouldAwardWhoNeedsRocketsAchievementFlagComponent>>,
    ::StrictEntityContext const&                                           entity,
    ::ActorOwnerComponent&                                                 actorOwner,
    ::UserEntityIdentifierComponent const&                                 id,
    ::EntityModifier<::ShouldAwardWhoNeedsRocketsAchievementFlagComponent> modifier
);
// NOLINTEND

} // namespace AwardWhoNeedsRocketsAchievementSystem
