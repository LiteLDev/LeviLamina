#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Goal;
class Player;
class PrioritizedGoal;
// clang-format on

class GoalSelectorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk499863;
    // NOLINTEND

public:
    // prevent constructor by default
    GoalSelectorComponent& operator=(GoalSelectorComponent const&);
    GoalSelectorComponent(GoalSelectorComponent const&);
    GoalSelectorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _eraseGoals(bool (*condition)(::std::pair<ushort, ::PrioritizedGoal>&));

    MCAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::pair<ushort, ::PrioritizedGoal>>>>
    _findGoalByKey(ushort key) const;

    MCAPI void addGoal(int priority, ::std::unique_ptr<::Goal> goal);

    MCAPI void buildDebugInfo(::std::string& out) const;

    MCAPI void clearAllGoals();

    MCAPI void clearNonTargetedGoals();

    MCAPI void clearTargetGoals();

    MCFOLD ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>& getGoalMap();

    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI ::GoalSelectorComponent& operator=(::GoalSelectorComponent&&);

    MCAPI bool removeGoal(ushort typeId);

    MCAPI void stopAllGoals();

    MCAPI void stopNonTargetedGoals();
    // NOLINTEND
};
