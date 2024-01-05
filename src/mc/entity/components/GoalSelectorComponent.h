#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class GoalSelectorComponent {
public:
    // prevent constructor by default
    GoalSelectorComponent& operator=(GoalSelectorComponent const&);
    GoalSelectorComponent(GoalSelectorComponent const&);
    GoalSelectorComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addGoal@GoalSelectorComponent@@QEAAXHV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@@Z
    MCAPI void addGoal(int priority, std::unique_ptr<class Goal> goal);

    // symbol:
    // ?buildDebugInfo@GoalSelectorComponent@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void buildDebugInfo(std::string& out) const;

    // symbol: ?clearAllGoals@GoalSelectorComponent@@QEAAXXZ
    MCAPI void clearAllGoals();

    // symbol: ?clearNonTargetedGoals@GoalSelectorComponent@@QEAAXXZ
    MCAPI void clearNonTargetedGoals();

    // symbol: ?clearTargetGoals@GoalSelectorComponent@@QEAAXXZ
    MCAPI void clearTargetGoals();

    // symbol:
    // ?getGoalMap@GoalSelectorComponent@@QEAAAEAV?$vector@U?$pair@GVPrioritizedGoal@@@std@@V?$allocator@U?$pair@GVPrioritizedGoal@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::pair<ushort, class PrioritizedGoal>>& getGoalMap();

    // symbol: ?onPlayerDimensionChanged@GoalSelectorComponent@@QEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCAPI void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    // symbol: ?removeGoal@GoalSelectorComponent@@QEAA_NG@Z
    MCAPI bool removeGoal(ushort typeId);

    // symbol: ?stopAllGoals@GoalSelectorComponent@@QEAAXXZ
    MCAPI void stopAllGoals();

    // symbol: ?stopNonTargetedGoals@GoalSelectorComponent@@QEAAXXZ
    MCAPI void stopNonTargetedGoals();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_eraseGoals@GoalSelectorComponent@@AEAAXP6A_NAEAU?$pair@GVPrioritizedGoal@@@std@@@Z@Z
    MCAPI void _eraseGoals(bool (*condition)(std::pair<ushort, class PrioritizedGoal>&));

    // symbol:
    // ?_findGoalByKey@GoalSelectorComponent@@AEBA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@GVPrioritizedGoal@@@std@@@std@@@std@@@std@@G@Z
    MCAPI std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<ushort, class PrioritizedGoal>>>>
          _findGoalByKey(ushort key) const;

    // NOLINTEND
};
