#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
namespace SharedTypes::v1_21_100 { struct TickWorldDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {
// functions
// NOLINTBEGIN
MCNAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPlayerViewMode(::cereal::ReflectionCtx& ctx);

MCNAPI void bindRotationSpace(::cereal::ReflectionCtx& ctx);

MCNAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_21_100::TickWorldDefinition& desc,
    ::DeserializeDataParams                        deserializeDataParams
);
// NOLINTEND

} // namespace SharedTypes::v1_21_100
