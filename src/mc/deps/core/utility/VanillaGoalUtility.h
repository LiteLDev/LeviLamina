#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaGoalUtility {
// NOLINTBEGIN
MCAPI void registerGoalsToFactory(
    class ActorGoalFactory&      factory,
    class BaseGameVersion const& baseGameVersion,
    class Experiments const&     experiments
);
// NOLINTEND

}; // namespace VanillaGoalUtility
