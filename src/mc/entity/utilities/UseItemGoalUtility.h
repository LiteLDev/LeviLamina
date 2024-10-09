#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UseItemGoalUtility {
// NOLINTBEGIN
MCAPI void finishUsingItem(class Mob& mob, struct Tick& finishUsingItemTick);

MCAPI bool isUsingItem(class Mob const& mob);

MCAPI void setUsingItem(class Mob& mob, bool isUsingItem);

MCAPI bool startUsingItem(class Mob& mob, class ItemStack const& item, struct Tick& finishUsingItemTick);
// NOLINTEND

}; // namespace UseItemGoalUtility
