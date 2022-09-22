/**
 * @file  GoalSelectorUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol ?canUseInSystem@GoalSelectorUtility@@YA_NAEAVPrioritizedGoal@@AEAV?$vector@U?$pair@GVPrioritizedGoal@@@std@@V?$allocator@U?$pair@GVPrioritizedGoal@@@std@@@2@@std@@@Z
     */
    MCAPI bool canUseInSystem(class PrioritizedGoal &, std::vector<struct std::pair<unsigned short, class PrioritizedGoal>> &);
    /**
     * @hash   1346784418
     * @symbol ?tickGoals@GoalSelectorUtility@@YAXAEAVMob@@_N@Z
     */
    MCAPI void tickGoals(class Mob &, bool);
    /**
     * @hash   -363023918
     * @symbol ?tryStartGoals@GoalSelectorUtility@@YAXAEAVMob@@_N@Z
     */
    MCAPI void tryStartGoals(class Mob &, bool);

};