/**
 * @file  GoalSelectorUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1587052928
     * @symbol  ?canUseInSystem\@GoalSelectorUtility\@\@YA_NAEAVPrioritizedGoal\@\@AEAV?$vector\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@V?$allocator\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool canUseInSystem(class PrioritizedGoal &, std::vector<struct std::pair<unsigned short, class PrioritizedGoal>> &);
    /**
     * @hash   1687670338
     * @symbol  ?tickGoals\@GoalSelectorUtility\@\@YAXAEAVMob\@\@_N\@Z
     */
    MCAPI void tickGoals(class Mob &, bool);
    /**
     * @hash   -22091870
     * @symbol  ?tryStartGoals\@GoalSelectorUtility\@\@YAXAEAVMob\@\@_N\@Z
     */
    MCAPI void tryStartGoals(class Mob &, bool);

};