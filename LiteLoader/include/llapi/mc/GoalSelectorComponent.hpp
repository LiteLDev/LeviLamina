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
     * @hash   -847714883
     * @symbol  ?addGoal\@GoalSelectorComponent\@\@QEAAXHV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addGoal(int, std::unique_ptr<class Goal>);
    /**
     * @hash   443402524
     * @symbol  ?buildDebugInfo\@GoalSelectorComponent\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugInfo(std::string &) const;
    /**
     * @hash   1277849213
     * @symbol  ?clearAllGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearAllGoals();
    /**
     * @hash   -11454363
     * @symbol  ?clearNonTargetedGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearNonTargetedGoals();
    /**
     * @hash   -2037306313
     * @symbol  ?clearTargetGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void clearTargetGoals();
    /**
     * @hash   873820407
     * @symbol  ?getGoalMap\@GoalSelectorComponent\@\@QEAAAEAV?$vector\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@V?$allocator\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<unsigned short, class PrioritizedGoal>> & getGoalMap();
    /**
     * @hash   -1599607431
     * @symbol  ?onPlayerDimensionChanged\@GoalSelectorComponent\@\@QEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?removeGoal\@GoalSelectorComponent\@\@QEAA_NG\@Z
     */
    MCAPI bool removeGoal(unsigned short);
    /**
     * @hash   -1258108107
     * @symbol  ?stopAllGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void stopAllGoals();
    /**
     * @hash   -2063707891
     * @symbol  ?stopNonTargetedGoals\@GoalSelectorComponent\@\@QEAAXXZ
     */
    MCAPI void stopNonTargetedGoals();

//private:
    /**
     * @hash   -1040173393
     * @symbol  ?_eraseGoals\@GoalSelectorComponent\@\@AEAAXP6A_NAEAU?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@Z\@Z
     */
    MCAPI void _eraseGoals(bool ( *)(struct std::pair<unsigned short, class PrioritizedGoal> &));
    /**
     * @hash   -1725506896
     * @symbol  ?_findGoalByKey\@GoalSelectorComponent\@\@AEBA?AV?$_Vector_const_iterator\@V?$_Vector_val\@U?$_Simple_types\@U?$pair\@GVPrioritizedGoal\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@G\@Z
     */
    MCAPI class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<struct std::pair<unsigned short, class PrioritizedGoal>>>> _findGoalByKey(unsigned short) const;

private:

};