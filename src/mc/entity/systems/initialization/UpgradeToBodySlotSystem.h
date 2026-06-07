#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class UpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _upgrade(
        ::StrictEntityContext& strictEntityContext,
        ::ActorOwnerComponent& actorOwnerComponent,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>& modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
