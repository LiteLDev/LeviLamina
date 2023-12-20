#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ItemUseSlowdownSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doItemUseSlowdownSystem@ItemUseSlowdownSystemImpl@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPlayerInputRequestComponent@@@@U?$Exclude@UPassengerComponent@@@@@entt@@AEBVStrictEntityContext@@AEBUItemInUseComponent@@V?$EntityModifier@UItemUseSlowdownModifierComponent@@@@@Z
MCAPI void
doItemUseSlowdownSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent>, struct Exclude<struct PassengerComponent>>, class StrictEntityContext const&, struct ItemInUseComponent const&, class EntityModifier<struct ItemUseSlowdownModifierComponent>);
// NOLINTEND

}; // namespace ItemUseSlowdownSystemImpl
