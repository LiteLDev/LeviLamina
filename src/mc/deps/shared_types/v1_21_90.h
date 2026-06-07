#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_21_90 { struct BreedGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCFOLD void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_21_90::BreedGoalDefinition& sharedGoal);
// NOLINTEND

} // namespace SharedTypes::v1_21_90
