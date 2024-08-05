#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace BlockPosNotificationSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createFilterSystem();

MCAPI struct TickingSystemWithInfo createGenericStandOnSystem();

MCAPI struct TickingSystemWithInfo createHoneyOrSlimeStandOnSystem();

MCAPI void onStandOnSlowingBlock(class Vec3&, bool);

MCAPI void tickNotifierFilter(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct OnGroundFlagComponent>>, class StrictEntityContext const&, struct BlockPosTrackerComponent const&, class Optional<struct VehicleInputIntentComponent const> const&, class EntityModifier<class FlagComponent<struct StandOnHoneyOrSlimeBlock>, class FlagComponent<struct StandOnOtherBlock>>);
// NOLINTEND

}; // namespace BlockPosNotificationSystem
