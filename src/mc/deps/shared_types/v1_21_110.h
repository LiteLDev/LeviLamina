#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_110 { struct ExperienceRewardComponentDefinition; }
namespace SharedTypes::v1_21_110 { struct SonicBoomGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&,
    ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_110::SonicBoomGoalDefinition const&,
    ::SharedTypes::v1_21_110::SonicBoomGoalDefinition const&
);
// NOLINTEND

} // namespace SharedTypes::v1_21_110
