#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AvoidBlockGoal;
class AvoidMobTypeGoal;
class DigGoal;
class EntityContext;
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace SharedTypes::v1_21_120 { struct AvoidBlockGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct AvoidMobTypeGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct EntityTypes; }
namespace SharedTypes::v1_21_120 { struct MeleeAttackBaseGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct MobDescriptor; }
// clang-format on

namespace SharedTypes::v1_21_120 {
// functions
// NOLINTBEGIN
MCAPI void
initialize(::EntityContext&, ::AvoidBlockGoal& goal, ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition definition);

MCAPI void
initialize(::EntityContext&, ::AvoidMobTypeGoal& goal, ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition definition);

MCAPI void initialize(::EntityContext&, ::DigGoal& goal, ::SharedTypes::v1_21_120::DigGoalDefinition definition);

MCAPI bool operator==(
    ::SharedTypes::v1_21_120::ActorDefinitionTrigger const& __P0,
    ::SharedTypes::v1_21_120::ActorDefinitionTrigger const& __P1
);

MCAPI bool
operator==(::SharedTypes::v1_21_120::EntityTypes const& __P0, ::SharedTypes::v1_21_120::EntityTypes const& __P1);

MCAPI bool operator==(
    ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const& __P0,
    ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const& __P1
);

MCAPI bool
operator==(::SharedTypes::v1_21_120::MobDescriptor const& __P0, ::SharedTypes::v1_21_120::MobDescriptor const& __P1);
// NOLINTEND

} // namespace SharedTypes::v1_21_120
