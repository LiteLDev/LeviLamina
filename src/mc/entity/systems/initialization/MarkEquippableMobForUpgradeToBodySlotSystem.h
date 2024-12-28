#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EquippableComponent;
class StrictEntityContext;
struct EntityNeedsInitializeFlagComponent;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class MarkEquippableMobForUpgradeToBodySlotSystem {
public:
    // prevent constructor by default
    MarkEquippableMobForUpgradeToBodySlotSystem& operator=(MarkEquippableMobForUpgradeToBodySlotSystem const&);
    MarkEquippableMobForUpgradeToBodySlotSystem(MarkEquippableMobForUpgradeToBodySlotSystem const&);
    MarkEquippableMobForUpgradeToBodySlotSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _markForUpgradeIfNeeded(
        ::StrictEntityContext& strictEntityContext,
        ::EquippableComponent& equippableComponent,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>& modifier
    );

    MCAPI static void _tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::EntityNeedsInitializeFlagComponent>,
            ::Exclude<::SkipBodySlotUpgradeFlagComponent>,
            ::EquippableComponent>                                                                  view,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent> modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
