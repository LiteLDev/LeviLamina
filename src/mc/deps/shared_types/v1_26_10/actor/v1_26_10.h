#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaidGardenGoalDefinition; }
// clang-format on

namespace SharedTypes::v1_26_10 {
// functions
// NOLINTBEGIN
MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_10::LayEggGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_10::RaidGardenGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_10
