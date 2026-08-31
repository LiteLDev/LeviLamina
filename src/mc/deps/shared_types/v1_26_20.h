#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_20 { struct PickupItemsGoalDefinition; }
// clang-format on

namespace SharedTypes::v1_26_20 {
// functions
// NOLINTBEGIN
MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_20::PickupItemsGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_20
