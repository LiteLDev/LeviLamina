/**
 * @file  GoalSelectorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GoalSelectorComponent.
 *
 */
class GoalSelectorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOALSELECTORCOMPONENT
public:
    class GoalSelectorComponent& operator=(class GoalSelectorComponent const &) = delete;
    GoalSelectorComponent(class GoalSelectorComponent const &) = delete;
    GoalSelectorComponent() = delete;
#endif

public:
    /**
     * @symbol  ?addGoal\@GoalSelectorComponent\@\@QEAAXHV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addGoal(int, std::unique_ptr<class Goal>);
    /**
     * @symbol  ?buildDebugInfo\@GoalSelectorComponent\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugInfo(std::string &) const;
    /**
     * @symbol  ?clearAllGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearAllGoals();
    /**
     * @symbol  ?clearNonTargetedGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearNonTargetedGoals();
    /**
     * @symbol  ?clearTargetGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearTargetGoals();
    /**
     * @symbol  ?getGoalMap\@GoalSelectorComponent\@\@QEAAAEAV?$vector\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@V?$allocator\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<unsigned short, class PrioritizedGoal>> & getGoalMap();
    /**
     * @symbol  ?onPlayerDimensionChanged\@GoalSelectorComponent\@\@QEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?removeGoal\@GoalSelectorComponent\@\@QEAA_NG\@Z
     */
    MCAPI bool removeGoal(unsigned short);
    /**
     * @symbol  ?stopAllGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void stopAllGoals();
    /**
     * @symbol  ?stopNonTargetedGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void stopNonTargetedGoals();

//private:
    /**
     * @symbol  ?_eraseGoals\@GoalSelectorComponent\@\@AEAAXP6A_NAEAU?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@Z\@Z
     */
    MCAPI void _eraseGoals(bool ( *)(struct std::pair<unsigned short, class PrioritizedGoal> &));
    /**
     * @symbol  ?_findGoalByKey\@GoalSelectorComponent\@\@AEBA?AV?$_Vector_const_iterator\@V?$_Vector_val\@U?$_Simple_types\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@G\@Z
     */
    MCAPI class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct std::pair<unsigned short, class PrioritizedGoal>>>> _findGoalByKey(unsigned short) const;

private:

};