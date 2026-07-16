#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGoal;
class Player;
class PrioritizedGoal;
struct DimensionType;
struct GoalId;
// clang-format on

class GoalSelectorComponent {
public:
    // GoalSelectorComponent inner types define
    using GoalCondition = bool (*)(::std::pair<::GoalId, ::PrioritizedGoal>&);

    using GoalElement = ::std::pair<::GoalId, ::PrioritizedGoal>;

    using GoalMap = ::std::vector<::std::pair<::GoalId, ::PrioritizedGoal>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::GoalId, ::PrioritizedGoal>>> mGoalMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addGoal(int priority, ::std::unique_ptr<::BaseGoal> goal);

    MCAPI void buildDebugInfo(::std::string& out) const;

    MCAPI void clearAllGoals();

    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI bool removeGoal(::GoalId typeId);

    MCAPI void stopNonTargetedGoals();
    // NOLINTEND
};
