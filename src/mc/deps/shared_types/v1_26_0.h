#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AquaticChargeAttackGoal;
class EntityContext;
class Mob;
namespace SharedTypes::v1_26_0 { struct ActorDocument; }
namespace SharedTypes::v1_26_0 { struct AquaticChargeAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtEntityGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCAPI void initialize(
    ::EntityContext&,
    ::AquaticChargeAttackGoal&                                       goal,
    ::SharedTypes::v1_26_0::AquaticChargeAttackGoalDefinition const& definition
);

MCFOLD bool operator==(::SharedTypes::v1_26_0::ActorDocument const&, ::SharedTypes::v1_26_0::ActorDocument const&);

MCAPI bool operator==(
    ::SharedTypes::v1_26_0::LookAtEntityGoalDefinition const&,
    ::SharedTypes::v1_26_0::LookAtEntityGoalDefinition const&
);

MCFOLD bool validate(::SharedTypes::v1_26_0::AquaticChargeAttackGoalDefinition const&, ::Mob const&);

MCFOLD bool validateMobType(::SharedTypes::v1_26_0::AquaticChargeAttackGoalDefinition const&, ::Mob const&);
// NOLINTEND

} // namespace SharedTypes::v1_26_0
