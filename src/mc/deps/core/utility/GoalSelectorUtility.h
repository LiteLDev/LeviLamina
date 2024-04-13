#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GoalSelectorUtility {
// NOLINTBEGIN
// symbol:
// ?canUseInSystem@GoalSelectorUtility@@YA_NAEAVPrioritizedGoal@@AEAV?$vector@U?$pair@GVPrioritizedGoal@@@std@@V?$allocator@U?$pair@GVPrioritizedGoal@@@std@@@2@@std@@@Z
MCAPI bool canUseInSystem(class PrioritizedGoal& goal, std::vector<std::pair<ushort, class PrioritizedGoal>>& goalSet);

// symbol: ?tickGoals@GoalSelectorUtility@@YAXAEAVMob@@_N@Z
MCAPI void tickGoals(class Mob& owner, bool isTarget);

// symbol: ?tryStartGoals@GoalSelectorUtility@@YAXAEAVMob@@_N@Z
MCAPI void tryStartGoals(class Mob& owner, bool isTarget);
// NOLINTEND

}; // namespace GoalSelectorUtility
