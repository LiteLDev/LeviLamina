#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_10 { struct ActorDocument; }
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
// clang-format on

namespace SharedTypes::v1_26_10 {
// functions
// NOLINTBEGIN
MCAPI bool
operator==(::SharedTypes::v1_26_10::ActorDocument const& __P0, ::SharedTypes::v1_26_10::ActorDocument const& __P1);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_10::LayEggGoalDefinition& sharedGoal);
// NOLINTEND

} // namespace SharedTypes::v1_26_10
