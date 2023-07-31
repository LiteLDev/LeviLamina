#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UseItemGoalUtility {
// NOLINTBEGIN
/**
 * @symbol ?finishUsingItem\@UseItemGoalUtility\@\@YAXAEAVMob\@\@AEAUTick\@\@\@Z
 */
MCAPI void finishUsingItem(class Mob&, struct Tick&);
/**
 * @symbol ?isUsingItem\@UseItemGoalUtility\@\@YA_NAEBVMob\@\@\@Z
 */
MCAPI bool isUsingItem(class Mob const&);
/**
 * @symbol ?setUsingItem\@UseItemGoalUtility\@\@YAXAEAVMob\@\@_N\@Z
 */
MCAPI void setUsingItem(class Mob&, bool);
/**
 * @symbol ?startUsingItem\@UseItemGoalUtility\@\@YA_NAEAVMob\@\@AEBVItemStack\@\@AEAUTick\@\@\@Z
 */
MCAPI bool startUsingItem(class Mob&, class ItemStack const&, struct Tick&);
// NOLINTEND

}; // namespace UseItemGoalUtility
