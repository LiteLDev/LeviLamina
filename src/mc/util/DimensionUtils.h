#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DimensionIdType;
struct DimensionType;
// clang-format on

namespace DimensionUtils {
// functions
// NOLINTBEGIN
MCNAPI ::DimensionIdType convertDimensionTypeToRegistryId(::DimensionType dimensionType);

MCNAPI ::DimensionType convertRegistryIdToDimensionType(::DimensionIdType registryId);
// NOLINTEND

} // namespace DimensionUtils
