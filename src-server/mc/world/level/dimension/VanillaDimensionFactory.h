#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct DerivedDimensionArguments;
// clang-format on

namespace VanillaDimensionFactory {
// functions
// NOLINTBEGIN
MCAPI void registerDimensionTypes(::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& dimensionFactory);
// NOLINTEND

} // namespace VanillaDimensionFactory
