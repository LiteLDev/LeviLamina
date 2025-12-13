#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AvoidBlockGoal;
class AvoidMobTypeGoal;
class DigGoal;
class EntityContext;
namespace SharedTypes::v1_21_120 { struct AvoidBlockGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct AvoidMobTypeGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
// clang-format on

namespace SharedTypes::v1_21_120 {
// functions
// NOLINTBEGIN
MCNAPI void
initialize(::EntityContext&, ::AvoidMobTypeGoal& goal, ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition definition);

MCNAPI void initialize(::EntityContext&, ::DigGoal& goal, ::SharedTypes::v1_21_120::DigGoalDefinition definition);

MCNAPI void
initialize(::EntityContext&, ::AvoidBlockGoal& goal, ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition definition);
// NOLINTEND

} // namespace SharedTypes::v1_21_120
