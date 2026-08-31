#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IConstBlockSource;
namespace PotentSulfurUtils { struct EruptionFactors; }
// clang-format on

namespace PotentSulfurUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI ::PotentSulfurUtils::EruptionFactors getEruptionFactors(::BlockSource const& region, ::BlockPos const& pos);
#endif

MCAPI int getUnobstructedWaterColumnHeight(::IConstBlockSource const& region, ::BlockPos const& pos);

MCAPI int getWaterColumnHeight(::IConstBlockSource const& region, ::BlockPos const& pos);

MCAPI bool isCollisionlessWaterSource(::IConstBlockSource const& region, ::BlockPos const& pos);

MCAPI bool isEmissionObstructed(::IConstBlockSource const& region, ::BlockPos const& pos);
// NOLINTEND

} // namespace PotentSulfurUtils
