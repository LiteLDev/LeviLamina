#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EquippableComponent;
class StrictEntityContext;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class MarkEquippableMobForUpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _markForUpgradeIfNeeded(
        ::StrictEntityContext& strictEntityContext,
        ::EquippableComponent& equippableComponent,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>& modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
