#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace AwardWhoNeedsRocketsAchievementSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void sendEvent(
    entt::type_list<struct Include<
        class FlagComponent<struct PlayerComponentFlag>,
        class FlagComponent<struct ShouldAwardWhoNeedsRocketsAchievementFlag>>>,
    class StrictEntityContext const&                                                            entity,
    class ActorOwnerComponent&                                                                  actorOwner,
    class UserEntityIdentifierComponent const&                                                  id,
    class EntityModifier<class FlagComponent<struct ShouldAwardWhoNeedsRocketsAchievementFlag>> modifier
);
// NOLINTEND

}; // namespace AwardWhoNeedsRocketsAchievementSystem
