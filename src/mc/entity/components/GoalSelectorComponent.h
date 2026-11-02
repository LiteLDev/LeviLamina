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
    MCNAPI void addGoal(int priority, ::std::unique_ptr<::BaseGoal> goal);

    MCNAPI void buildDebugInfo(::std::string& out) const;

    MCNAPI void clearAllGoals();

    MCNAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCNAPI bool removeGoal(::GoalId typeId);

    MCNAPI void stopNonTargetedGoals();
    // NOLINTEND
};
