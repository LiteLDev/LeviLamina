#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GoalSelectorUtility {
// NOLINTBEGIN
MCAPI bool canUseInSystem(class PrioritizedGoal& goal, std::vector<std::pair<ushort, class PrioritizedGoal>>& goalSet);

MCAPI void tickGoals(class Mob& owner, bool isTarget);

MCAPI void tryStartGoals(class Mob& owner, bool isTarget);
// NOLINTEND

}; // namespace GoalSelectorUtility
