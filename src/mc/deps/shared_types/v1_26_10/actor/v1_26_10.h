#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaidGardenGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {
// functions
// NOLINTBEGIN
MCNAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCNAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_10::LayEggGoalDefinition& sharedGoal);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_10::RaidGardenGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_10
