#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_40 { struct ComponentItemComponentData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_40 {
// functions
// NOLINTBEGIN
MCAPI void bindClientBiomeFoliageColorMapEnum(::cereal::ReflectionCtx& ctx);

MCAPI void bindClientBiomeGrassColorMapEnum(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_21_40::ComponentItemComponentData const& __P0,
    ::SharedTypes::v1_21_40::ComponentItemComponentData const& __P1
);
// NOLINTEND

} // namespace SharedTypes::v1_21_40
