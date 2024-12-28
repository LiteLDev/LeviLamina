#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct ConstantIntProvider; }
namespace SharedTypes::v1_21_20 { struct UniformIntProvider; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {
// functions
// NOLINTBEGIN
MCAPI void bindIntProviderTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::std::
        variant<int, ::SharedTypes::v1_21_20::ConstantIntProvider, ::SharedTypes::v1_21_20::UniformIntProvider> const&
            lhs,
    ::std::
        variant<int, ::SharedTypes::v1_21_20::ConstantIntProvider, ::SharedTypes::v1_21_20::UniformIntProvider> const&
            rhs
);
// NOLINTEND

} // namespace SharedTypes::v1_21_20
