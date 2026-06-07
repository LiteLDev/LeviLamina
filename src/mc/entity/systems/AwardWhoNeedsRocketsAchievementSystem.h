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
struct TickingSystemWithInfo;
// clang-format on

namespace AwardWhoNeedsRocketsAchievementSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void sendEvent(
    ::entt::type_list<::Include<::PlayerComponent, ::ShouldAwardWhoNeedsRocketsAchievementFlagComponent>> entity,
    ::StrictEntityContext const&                                                                          actorOwner,
    ::ActorOwnerComponent&                                                                                id,
    ::UserEntityIdentifierComponent const&                                                                modifier,
    ::EntityModifier<::ShouldAwardWhoNeedsRocketsAchievementFlagComponent>
);
// NOLINTEND

} // namespace AwardWhoNeedsRocketsAchievementSystem
