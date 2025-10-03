#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EatMobGoal;
class EntityContext;
class TransportItemsGoal;
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {
// functions
// NOLINTBEGIN
MCNAPI void bindLookMode(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPlayerViewMode(::cereal::ReflectionCtx& ctx);

MCNAPI void bindRotationSpace(::cereal::ReflectionCtx& ctx);

MCNAPI void initialize(::EntityContext&, ::EatMobGoal& goal, ::SharedTypes::v1_21_100::EatMobGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::TransportItemsGoal&                                         goal,
    ::SharedTypes::v1_21_100::TransportItemsGoalDefinition const& definition
);
// NOLINTEND

} // namespace SharedTypes::v1_21_100
