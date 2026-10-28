#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct NeedsUpgradeToBodySlotFlagComponent;
// clang-format on

class MarkWolfForUpgradeToBodySlotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void _markForUpgrade(
        ::StrictEntityContext&                                         strictEntityContext,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent> const& modifier
    );
    // NOLINTEND
};
