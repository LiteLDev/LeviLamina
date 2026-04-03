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
MCAPI void bindDimensionPaddingTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindIntProviderTypes(::cereal::ReflectionCtx& ctx);

MCFOLD bool
operator==(::SharedTypes::v1_21_20::FilterGroupData const& __P0, ::SharedTypes::v1_21_20::FilterGroupData const& __P1);

MCAPI bool
operator==(::SharedTypes::v1_21_20::FilterTestData const& __P0, ::SharedTypes::v1_21_20::FilterTestData const& __P1);

MCAPI bool operator==(
    ::SharedTypes::v1_21_20::FilterGroupDataMap const& lhs,
    ::SharedTypes::v1_21_20::FilterGroupDataMap const& rhs
);
// NOLINTEND

} // namespace SharedTypes::v1_21_20
