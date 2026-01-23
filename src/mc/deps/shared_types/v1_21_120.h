#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_120/actor/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class AvoidBlockGoal;
class AvoidMobTypeGoal;
class DigGoal;
class EntityContext;
class MeleeAttackBaseGoal;
namespace SharedTypes::v1_21_120 { struct AvoidBlockGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct AvoidMobTypeGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct MeleeAttackGoalBaseDefinition; }
// clang-format on

namespace SharedTypes::v1_21_120 {
// functions
// NOLINTBEGIN
MCAPI void
initialize(::EntityContext&, ::AvoidBlockGoal& goal, ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition definition);

MCAPI void
initialize(::EntityContext&, ::AvoidMobTypeGoal& goal, ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition definition);

MCAPI void initialize(::EntityContext&, ::DigGoal& goal, ::SharedTypes::v1_21_120::DigGoalDefinition definition);

MCAPI void initializeMeleeAttackGoalBase(
    ::MeleeAttackBaseGoal&                                         goal,
    ::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition const& definition
);

MCAPI bool
operator==(::SharedTypes::v1_21_120::MobDescriptor const& __P0, ::SharedTypes::v1_21_120::MobDescriptor const& __P1);
// NOLINTEND

} // namespace SharedTypes::v1_21_120
