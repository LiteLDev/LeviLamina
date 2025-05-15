#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Goal;
class PrioritizedGoal;
// clang-format on

class GoalSelectorComponent {
public:
    // GoalSelectorComponent inner types define
    using GoalElement = ::std::pair<ushort, ::PrioritizedGoal>;

    using GoalCondition = bool (*)(::std::pair<ushort, ::PrioritizedGoal>&);

    using GoalMap = ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>> mGoalMap;
    // NOLINTEND

public:
    // prevent constructor by default
    GoalSelectorComponent& operator=(GoalSelectorComponent const&);
    GoalSelectorComponent(GoalSelectorComponent const&);
    GoalSelectorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _eraseGoals(bool (*condition)(::std::pair<ushort, ::PrioritizedGoal>&));

    MCNAPI void addGoal(int priority, ::std::unique_ptr<::Goal> goal);

    MCNAPI void buildDebugInfo(::std::string& out) const;

    MCNAPI ::GoalSelectorComponent& operator=(::GoalSelectorComponent&&);

    MCNAPI bool removeGoal(ushort typeId);

    MCNAPI void stopNonTargetedGoals();
    // NOLINTEND
};
