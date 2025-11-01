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
// clang-format on

class UpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _upgrade(
        ::StrictEntityContext& strictEntityContext,
        ::ActorOwnerComponent& actorOwnerComponent,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>& modifier
    );
    // NOLINTEND
};
