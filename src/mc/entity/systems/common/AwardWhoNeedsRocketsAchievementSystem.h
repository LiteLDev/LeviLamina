#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace AwardWhoNeedsRocketsAchievementSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void
sendEvent(entt::type_list<struct Include<class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ShouldAwardWhoNeedsRocketsAchievementFlag>>>, class StrictEntityContext const&, class ActorOwnerComponent&, class UserEntityIdentifierComponent const&, class EntityModifier<class FlagComponent<struct ShouldAwardWhoNeedsRocketsAchievementFlag>>);
// NOLINTEND

}; // namespace AwardWhoNeedsRocketsAchievementSystem
