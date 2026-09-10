#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IConstBlockSource;
// clang-format on

namespace PotentSulfurUtils {
// functions
// NOLINTBEGIN
MCAPI int getUnobstructedWaterColumnHeight(::IConstBlockSource const& region, ::BlockPos const& pos);

MCAPI int getWaterColumnHeight(::IConstBlockSource const& region, ::BlockPos const& pos);

MCAPI bool isCollisionlessWaterSource(::IConstBlockSource const& region, ::BlockPos const& pos);

MCAPI bool isEmissionObstructed(::IConstBlockSource const& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace PotentSulfurUtils
