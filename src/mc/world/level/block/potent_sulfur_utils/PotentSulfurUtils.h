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
MCNAPI int getUnobstructedWaterColumnHeight(::IConstBlockSource const& region, ::BlockPos const& pos);

MCNAPI int getWaterColumnHeight(::IConstBlockSource const& region, ::BlockPos const& pos);

MCNAPI bool isCollisionlessWaterSource(::IConstBlockSource const& region, ::BlockPos const& pos);

MCNAPI bool isEmissionObstructed(::IConstBlockSource const& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace PotentSulfurUtils
