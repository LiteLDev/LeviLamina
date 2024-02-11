#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UseItemGoalUtility {
// NOLINTBEGIN
// symbol: ?finishUsingItem@UseItemGoalUtility@@YAXAEAVMob@@AEAUTick@@@Z
MCAPI void finishUsingItem(class Mob& mob, struct Tick&);

// symbol: ?isUsingItem@UseItemGoalUtility@@YA_NAEBVMob@@@Z
MCAPI bool isUsingItem(class Mob const& mob);

// symbol: ?setUsingItem@UseItemGoalUtility@@YAXAEAVMob@@_N@Z
MCAPI void setUsingItem(class Mob& mob, bool isUsingItem);

// symbol: ?startUsingItem@UseItemGoalUtility@@YA_NAEAVMob@@AEBVItemStack@@AEAUTick@@@Z
MCAPI bool startUsingItem(class Mob& mob, class ItemStack const& item, struct Tick&);
// NOLINTEND

}; // namespace UseItemGoalUtility
