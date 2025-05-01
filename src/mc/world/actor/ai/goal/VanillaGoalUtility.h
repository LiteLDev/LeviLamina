#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorGoalFactory;
class BaseGameVersion;
class Experiments;
// clang-format on

namespace VanillaGoalUtility {
// functions
// NOLINTBEGIN
MCNAPI void registerGoalsToFactory(
    ::ActorGoalFactory&      factory,
    ::BaseGameVersion const& baseGameVersion,
    ::Experiments const&     experiments
);
// NOLINTEND

} // namespace VanillaGoalUtility
