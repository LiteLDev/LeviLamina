#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ClientSideChunkGeneration {
// functions
// NOLINTBEGIN
MCAPI uchar getMaxChunkBuildRadius(::Player const& player);

MCAPI float getOptimalServerChunkBuildRadiusRatio(uchar clientMaxBuildRadius, uchar serverMaxBuildRadius);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI uchar const& LowTierRadiusThreshold();

MCAPI ::std::optional<float>& ServerBuildRatioOverride();
// NOLINTEND

} // namespace ClientSideChunkGeneration
