#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
class PrioritizedGoal;
// clang-format on

namespace GoalSelectorUtility {
// functions
// NOLINTBEGIN
MCAPI bool canUseInSystem(::PrioritizedGoal& goal, ::std::vector<::std::pair<ushort, ::PrioritizedGoal>>& goalSet);

MCAPI void tickGoals(::Mob& owner, bool isTarget);

MCAPI void tryStartGoals(::Mob& owner, bool isTarget);
// NOLINTEND

} // namespace GoalSelectorUtility
