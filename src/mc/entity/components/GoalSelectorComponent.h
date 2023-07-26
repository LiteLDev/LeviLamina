#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class GoalSelectorComponent {

public:
    // prevent constructor by default
    GoalSelectorComponent& operator=(GoalSelectorComponent const&) = delete;
    GoalSelectorComponent(GoalSelectorComponent const&)            = delete;
    GoalSelectorComponent()                                        = delete;

public:
    /**
     * @symbol
     * ?addGoal\@GoalSelectorComponent\@\@QEAAXHV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addGoal(int, std::unique_ptr<class Goal>); // NOLINT
    /**
     * @symbol
     * ?buildDebugInfo\@GoalSelectorComponent\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ?clearAllGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearAllGoals(); // NOLINT
    /**
     * @symbol ?clearNonTargetedGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearNonTargetedGoals(); // NOLINT
    /**
     * @symbol ?clearTargetGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearTargetGoals(); // NOLINT
    /**
     * @symbol
     * ?getGoalMap\@GoalSelectorComponent\@\@QEAAAEAV?$vector\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@V?$allocator\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<unsigned short, class PrioritizedGoal>>& getGoalMap(); // NOLINT
    /**
     * @symbol
     * ?onPlayerDimensionChanged\@GoalSelectorComponent\@\@QEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCAPI void
    onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?removeGoal\@GoalSelectorComponent\@\@QEAA_NG\@Z
     */
    MCAPI bool removeGoal(unsigned short); // NOLINT
    /**
     * @symbol ?stopAllGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void stopAllGoals(); // NOLINT
    /**
     * @symbol ?stopNonTargetedGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void stopNonTargetedGoals(); // NOLINT

    // private:
    /**
     * @symbol ?_eraseGoals\@GoalSelectorComponent\@\@AEAAXP6A_NAEAU?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@Z\@Z
     */
    MCAPI void _eraseGoals(bool (*)(struct std::pair<unsigned short, class PrioritizedGoal>&)); // NOLINT
    /**
     * @symbol
     * ?_findGoalByKey\@GoalSelectorComponent\@\@AEBA?AV?$_Vector_const_iterator\@V?$_Vector_val\@U?$_Simple_types\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@G\@Z
     */
    MCAPI class std::_Vector_const_iterator<
        class std::_Vector_val<struct std::_Simple_types<struct std::pair<unsigned short, class PrioritizedGoal>>>>
    _findGoalByKey(unsigned short) const; // NOLINT

private:
};
