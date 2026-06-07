#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterGroupDataMap; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindDimensionPaddingTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindIntProviderTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(::SharedTypes::v1_21_20::FilterGroupData const&, ::SharedTypes::v1_21_20::FilterGroupData const&);

MCAPI bool operator==(::SharedTypes::v1_21_20::FilterTestData const&, ::SharedTypes::v1_21_20::FilterTestData const&);

MCAPI bool operator==(
    ::SharedTypes::v1_21_20::FilterGroupDataMap const& lhs,
    ::SharedTypes::v1_21_20::FilterGroupDataMap const& rhs
);
// NOLINTEND

} // namespace SharedTypes::v1_21_20
