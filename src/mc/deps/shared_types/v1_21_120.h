#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AvoidBlockGoal;
class AvoidMobTypeGoal;
class DigGoal;
class DrinkMilkGoal;
class EntityContext;
class Mob;
class UseKineticWeaponGoal;
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
namespace SharedTypes::v1_21_120 { struct AvoidBlockGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct AvoidMobTypeGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DrinkMilkGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct EntityTypes; }
namespace SharedTypes::v1_21_120 { struct MeleeAttackBaseGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct MobDescriptor; }
namespace SharedTypes::v1_21_120 { struct UseKineticWeaponGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void
initialize(::EntityContext&, ::AvoidBlockGoal& goal, ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition definition);

MCAPI void
initialize(::EntityContext&, ::AvoidMobTypeGoal& goal, ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition definition);

MCAPI void initialize(::EntityContext&, ::DigGoal& goal, ::SharedTypes::v1_21_120::DigGoalDefinition definition);

MCAPI void
initialize(::EntityContext&, ::DrinkMilkGoal& goal, ::SharedTypes::v1_21_120::DrinkMilkGoalDefinition definition);

MCAPI void initialize(
    ::EntityContext&,
    ::UseKineticWeaponGoal&                                  goal,
    ::SharedTypes::v1_21_120::UseKineticWeaponGoalDefinition definition
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_120::ActorDefinitionTrigger const&,
    ::SharedTypes::v1_21_120::ActorDefinitionTrigger const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition const&,
    ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&,
    ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&
);

MCAPI bool operator==(::SharedTypes::v1_21_120::EntityTypes const&, ::SharedTypes::v1_21_120::EntityTypes const&);

MCAPI bool operator==(
    ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&,
    ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const&
);

MCAPI bool operator==(::SharedTypes::v1_21_120::MobDescriptor const&, ::SharedTypes::v1_21_120::MobDescriptor const&);

MCFOLD bool validate(::SharedTypes::v1_21_120::AvoidBlockGoalDefinition const&, ::Mob const&);

MCFOLD bool validate(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&, ::Mob const&);

MCFOLD bool validate(::SharedTypes::v1_21_120::DigGoalDefinition const&, ::Mob const&);

MCFOLD bool validate(::SharedTypes::v1_21_120::DrinkMilkGoalDefinition const&, ::Mob const&);

MCAPI bool validate(::SharedTypes::v1_21_120::UseKineticWeaponGoalDefinition const& definition, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_120::AvoidBlockGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_120::DigGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_120::DrinkMilkGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_120::UseKineticWeaponGoalDefinition const&, ::Mob const&);
// NOLINTEND

} // namespace SharedTypes::v1_21_120
