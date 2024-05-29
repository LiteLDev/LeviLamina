#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace BlockPosNotificationSystem {
// NOLINTBEGIN
// symbol: ?createCleanupSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCleanupSystem();

// symbol: ?createFilterSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createFilterSystem();

// symbol: ?createGenericStandOnSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createGenericStandOnSystem();

// symbol: ?createHoneyOrSlimeStandOnSystem@BlockPosNotificationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createHoneyOrSlimeStandOnSystem();

// symbol: ?onStandOnSlowingBlock@BlockPosNotificationSystem@@YAXAEAVVec3@@_N@Z
MCAPI void onStandOnSlowingBlock(class Vec3&, bool);

// symbol:
// ?tickNotifierFilter@BlockPosNotificationSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UOnGroundFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUBlockPosTrackerComponent@@AEBV?$Optional@$$CBUVehicleInputIntentComponent@@@@V?$EntityModifier@V?$FlagComponent@UStandOnHoneyOrSlimeBlock@@@@V?$FlagComponent@UStandOnOtherBlock@@@@@@@Z
MCAPI void tickNotifierFilter(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct OnGroundFlag>>>, class StrictEntityContext const&, struct BlockPosTrackerComponent const&, class Optional<struct VehicleInputIntentComponent const> const&, class EntityModifier<class FlagComponent<struct StandOnHoneyOrSlimeBlock>, class FlagComponent<struct StandOnOtherBlock>>);
// NOLINTEND

}; // namespace BlockPosNotificationSystem
