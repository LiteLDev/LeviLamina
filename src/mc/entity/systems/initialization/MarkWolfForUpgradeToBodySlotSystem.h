#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct EntityNeedsInitializeFlagComponent;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
struct WolfFlagComponent;
// clang-format on

class MarkWolfForUpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _markForUpgrade(
        ::StrictEntityContext&                                   strictEntityContext,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent>& modifier
    );

    MCAPI static void _tick(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::EntityNeedsInitializeFlagComponent, ::WolfFlagComponent>,
            ::Exclude<::SkipBodySlotUpgradeFlagComponent>>      view,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent> modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
