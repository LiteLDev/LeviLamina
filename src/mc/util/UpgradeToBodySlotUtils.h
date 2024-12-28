#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Mob;
// clang-format on

namespace UpgradeToBodySlotUtils {
// functions
// NOLINTBEGIN
MCAPI void tryAddSkipBodySlotUpgradeSaveData(::CompoundTag& tag, ::Mob const& mob);

MCAPI void tryReadSkipBodySlotUpgradeSaveData(::CompoundTag const& tag, ::Mob& mob);
// NOLINTEND

} // namespace UpgradeToBodySlotUtils
