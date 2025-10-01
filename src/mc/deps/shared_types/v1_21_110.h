#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SonicBoomGoal;
class SwimUpForBreathGoal;
namespace SharedTypes::v1_21_110 { struct SonicBoomGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
// clang-format on

namespace SharedTypes::v1_21_110 {
// functions
// NOLINTBEGIN
MCNAPI void
initialize(::EntityContext&, ::SonicBoomGoal& goal, ::SharedTypes::v1_21_110::SonicBoomGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimUpForBreathGoal&                                  goal,
    ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition definition
);
// NOLINTEND

} // namespace SharedTypes::v1_21_110
