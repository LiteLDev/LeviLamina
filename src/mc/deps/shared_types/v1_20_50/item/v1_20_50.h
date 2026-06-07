#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct ItemDeprecatedComponentData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_20_50::ItemDeprecatedComponentData const&,
    ::SharedTypes::v1_20_50::ItemDeprecatedComponentData const&
);
// NOLINTEND

} // namespace SharedTypes::v1_20_50
