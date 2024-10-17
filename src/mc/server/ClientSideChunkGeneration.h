#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientSideChunkGeneration {
// NOLINTBEGIN
MCAPI uchar getMaxChunkBuildRadius(class Player const& player);

MCAPI float getOptimalServerChunkBuildRadiusRatio(uchar clientMaxBuildRadius, uchar serverMaxBuildRadius);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI uchar const& LowTierRadiusThreshold();

MCAPI std::optional<float>& ServerBuildRatioOverride();
// NOLINTEND

}; // namespace ClientSideChunkGeneration
