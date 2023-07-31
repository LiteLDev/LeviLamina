#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GoalSelectorUtility {
// NOLINTBEGIN
/**
 * @symbol
 * ?canUseInSystem\@GoalSelectorUtility\@\@YA_NAEAVPrioritizedGoal\@\@AEAV?$vector\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@V?$allocator\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@2\@\@std\@\@\@Z
 */
MCAPI bool canUseInSystem(class PrioritizedGoal&, std::vector<std::pair<unsigned short, class PrioritizedGoal>>&);
/**
 * @symbol ?tickGoals\@GoalSelectorUtility\@\@YAXAEAVMob\@\@_N\@Z
 */
MCAPI void tickGoals(class Mob&, bool);
/**
 * @symbol ?tryStartGoals\@GoalSelectorUtility\@\@YAXAEAVMob\@\@_N\@Z
 */
MCAPI void tryStartGoals(class Mob&, bool);
// NOLINTEND

}; // namespace GoalSelectorUtility
