#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ExploreOutskirtsGoal;
class InvestigateSuspiciousLocationGoal;
class Mob;
namespace SharedTypes::v1_21_130 { struct ActorDocument; }
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
namespace SharedTypes::v1_21_130 { struct ExploreOutskirtsGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct InvestigateSuspiciousLocationGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void initialize(
    ::EntityContext&,
    ::ExploreOutskirtsGoal&                                  goal,
    ::SharedTypes::v1_21_130::ExploreOutskirtsGoalDefinition definition
);

MCAPI void initialize(
    ::EntityContext&,
    ::InvestigateSuspiciousLocationGoal&                                  goal,
    ::SharedTypes::v1_21_130::InvestigateSuspiciousLocationGoalDefinition definition
);

MCFOLD bool operator==(::SharedTypes::v1_21_130::ActorDocument const&, ::SharedTypes::v1_21_130::ActorDocument const&);

MCAPI bool operator==(
    ::SharedTypes::v1_21_130::AddRiderComponentDefinition const&,
    ::SharedTypes::v1_21_130::AddRiderComponentDefinition const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_130::ExploreOutskirtsGoalDefinition const&,
    ::SharedTypes::v1_21_130::ExploreOutskirtsGoalDefinition const&
);

MCFOLD bool validate(::SharedTypes::v1_21_130::ExploreOutskirtsGoalDefinition const&, ::Mob const&);

MCFOLD bool validate(::SharedTypes::v1_21_130::InvestigateSuspiciousLocationGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_130::ExploreOutskirtsGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_21_130::InvestigateSuspiciousLocationGoalDefinition const&, ::Mob const&);
// NOLINTEND

} // namespace SharedTypes::v1_21_130
