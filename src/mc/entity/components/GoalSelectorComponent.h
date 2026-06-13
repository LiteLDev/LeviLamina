#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGoal;
class Player;
class PrioritizedGoal;
struct DimensionType;
// clang-format on

class GoalSelectorComponent {
public:
    // GoalSelectorComponent inner types define
    using GoalCondition = bool (*)(::std::pair<ushort, ::PrioritizedGoal>&);

    using GoalElement = ::std::pair<ushort, ::PrioritizedGoal>;

    using GoalMap = ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>> mGoalMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::pair<ushort, ::PrioritizedGoal>>>>
    _findGoalByKey(ushort key) const;

    MCAPI void addGoal(int priority, ::std::unique_ptr<::BaseGoal> goal);

    MCAPI void buildDebugInfo(::std::string& out) const;

    MCAPI void clearAllGoals();

    MCAPI void clearNonTargetedGoals();

    MCAPI void clearTargetGoals();

    MCFOLD ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>& getGoalMap();

    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI bool removeGoal(ushort typeId);

    MCAPI void stopAllGoals();

    MCAPI void stopNonTargetedGoals();
    // NOLINTEND
};
