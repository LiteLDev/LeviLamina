#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterTestData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {
// functions
// NOLINTBEGIN
MCAPI void bindDimensionPaddingTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindIntProviderTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool
operator==(::SharedTypes::v1_21_20::FilterGroupData const& __P0, ::SharedTypes::v1_21_20::FilterGroupData const& __P1);

MCAPI bool
operator==(::SharedTypes::v1_21_20::FilterTestData const& __P0, ::SharedTypes::v1_21_20::FilterTestData const& __P1);
// NOLINTEND

} // namespace SharedTypes::v1_21_20
