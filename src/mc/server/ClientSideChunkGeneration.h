#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientSideChunkGeneration {
// NOLINTBEGIN
MCAPI extern uchar const LowTierRadiusThreshold;

MCAPI extern std::optional<float> ServerBuildRatioOverride;

MCAPI uchar getMaxChunkBuildRadius(class Player const& player);

MCAPI float getOptimalServerChunkBuildRadiusRatio(uchar clientMaxBuildRadius, uchar serverMaxBuildRadius);
// NOLINTEND

}; // namespace ClientSideChunkGeneration
