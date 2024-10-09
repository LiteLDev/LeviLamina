#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace BlockPosNotificationSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createFilterSystem();

MCAPI struct TickingSystemWithInfo createGenericStandOnSystem();

MCAPI struct TickingSystemWithInfo createHoneyOrSlimeStandOnSystem();

MCAPI void onStandOnSlowingBlock(class Vec3& entityPosDelta, bool isSneaking);

MCAPI void tickNotifierFilter(
    entt::type_list<
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct OnGroundFlagComponent>>,
    class StrictEntityContext const&                                strictEntityContext,
    struct BlockPosTrackerComponent const&                          tracker,
    class Optional<struct VehicleInputIntentComponent const> const& vehicleInputIntent,
    class EntityModifier<
        class FlagComponent<struct StandOnHoneyOrSlimeBlock>,
        class FlagComponent<struct StandOnOtherBlock>> mod
);
// NOLINTEND

}; // namespace BlockPosNotificationSystem
