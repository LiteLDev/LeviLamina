#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_80 { struct ComponentItemComponentData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {
// functions
// NOLINTBEGIN
MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCFOLD bool operator==(
    ::SharedTypes::v1_21_80::ComponentItemComponentData const& __P0,
    ::SharedTypes::v1_21_80::ComponentItemComponentData const& __P1
);
// NOLINTEND

} // namespace SharedTypes::v1_21_80
