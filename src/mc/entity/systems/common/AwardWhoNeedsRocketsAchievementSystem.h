#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace AwardWhoNeedsRocketsAchievementSystem {
// NOLINTBEGIN
// symbol: ?createSystem@AwardWhoNeedsRocketsAchievementSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?sendEvent@AwardWhoNeedsRocketsAchievementSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UShouldAwardWhoNeedsRocketsAchievementFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEAVActorOwnerComponent@@AEBVUserEntityIdentifierComponent@@V?$EntityModifier@V?$FlagComponent@UShouldAwardWhoNeedsRocketsAchievementFlag@@@@@@@Z
MCAPI void
sendEvent(entt::type_list<struct Include<class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ShouldAwardWhoNeedsRocketsAchievementFlag>>>, class StrictEntityContext const&, class ActorOwnerComponent&, class UserEntityIdentifierComponent const&, class EntityModifier<class FlagComponent<struct ShouldAwardWhoNeedsRocketsAchievementFlag>>);
// NOLINTEND

}; // namespace AwardWhoNeedsRocketsAchievementSystem
