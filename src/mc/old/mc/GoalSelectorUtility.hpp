/**
 * @file  GoalSelectorUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace GoalSelectorUtility.
 *
 */
namespace GoalSelectorUtility {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?canUseInSystem\@GoalSelectorUtility\@\@YA_NAEAVPrioritizedGoal\@\@AEAV?$vector\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@V?$allocator\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool canUseInSystem(class PrioritizedGoal &, std::vector<struct std::pair<unsigned short, class PrioritizedGoal>> &);
    /**
     * @symbol  ?tickGoals\@GoalSelectorUtility\@\@YAXAEAVMob\@\@_N\@Z
     */
    MCAPI void tickGoals(class Mob &, bool);
    /**
     * @symbol  ?tryStartGoals\@GoalSelectorUtility\@\@YAXAEAVMob\@\@_N\@Z
     */
    MCAPI void tryStartGoals(class Mob &, bool);

};