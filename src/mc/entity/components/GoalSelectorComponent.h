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
    MCAPI void addGoal(int priority, std::unique_ptr<class Goal> goal);

    MCAPI void buildDebugInfo(std::string& out) const;

    MCAPI void clearAllGoals();

    MCAPI void clearNonTargetedGoals();

    MCAPI void clearTargetGoals();

    MCAPI std::vector<std::pair<ushort, class PrioritizedGoal>>& getGoalMap();

    MCAPI void onPlayerDimensionChanged(class Player* player, DimensionType fromDimension, DimensionType toDimension);

    MCAPI bool removeGoal(ushort typeId);

    MCAPI void stopAllGoals();

    MCAPI void stopNonTargetedGoals();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _eraseGoals(bool (*condition)(std::pair<ushort, class PrioritizedGoal>&));

    MCAPI std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<ushort, class PrioritizedGoal>>>>
          _findGoalByKey(ushort key) const;

    // NOLINTEND
};
