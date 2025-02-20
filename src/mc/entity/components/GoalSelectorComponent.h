#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Goal;
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

    MCAPI void addGoal(int priority, ::std::unique_ptr<::Goal> goal);

    MCAPI void buildDebugInfo(::std::string& out) const;

    MCAPI ::GoalSelectorComponent& operator=(::GoalSelectorComponent&&);

    MCAPI bool removeGoal(ushort typeId);

    MCAPI void stopNonTargetedGoals();
    // NOLINTEND
};
