#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UseItemGoalUtility {
/**
 * @symbol ?finishUsingItem\@UseItemGoalUtility\@\@YAXAEAVMob\@\@AEAUTick\@\@\@Z
 */
MCAPI void finishUsingItem(class Mob&, struct Tick&); // NOLINT
/**
 * @symbol ?isUsingItem\@UseItemGoalUtility\@\@YA_NAEBVMob\@\@\@Z
 */
MCAPI bool isUsingItem(class Mob const&); // NOLINT
/**
 * @symbol ?setUsingItem\@UseItemGoalUtility\@\@YAXAEAVMob\@\@_N\@Z
 */
MCAPI void setUsingItem(class Mob&, bool); // NOLINT
/**
 * @symbol ?startUsingItem\@UseItemGoalUtility\@\@YA_NAEAVMob\@\@AEBVItemStack\@\@AEAUTick\@\@\@Z
 */
MCAPI bool startUsingItem(class Mob&, class ItemStack const&, struct Tick&); // NOLINT

}; // namespace UseItemGoalUtility
