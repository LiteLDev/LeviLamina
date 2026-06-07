#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct TickWorldDefinition; }
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindLookMode(::cereal::ReflectionCtx& ctx);

MCAPI void bindPlayerViewMode(::cereal::ReflectionCtx& ctx);

MCAPI void bindRotationSpace(::cereal::ReflectionCtx& ctx);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_21_100::TickWorldDefinition& desc,
    ::DeserializeDataParams                        deserializeDataParams
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_100::EatMobGoalDefinition const&,
    ::SharedTypes::v1_21_100::EatMobGoalDefinition const&
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&,
    ::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&
);
// NOLINTEND

} // namespace SharedTypes::v1_21_100
