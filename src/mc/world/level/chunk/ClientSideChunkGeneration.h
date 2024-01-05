#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientSideChunkGeneration {
// NOLINTBEGIN
// symbol: ?LowTierRadiusThreshold@ClientSideChunkGeneration@@3EB
MCAPI extern uchar const LowTierRadiusThreshold;

// symbol: ?ServerBuildRatioOverride@ClientSideChunkGeneration@@3V?$optional@M@std@@A
MCAPI extern std::optional<float> ServerBuildRatioOverride;

// symbol: ?getMaxChunkBuildRadius@ClientSideChunkGeneration@@YAEAEBVPlayer@@@Z
MCAPI uchar getMaxChunkBuildRadius(class Player const& player);

// symbol: ?getOptimalServerChunkBuildRadiusRatio@ClientSideChunkGeneration@@YAMEE@Z
MCAPI float getOptimalServerChunkBuildRadiusRatio(uchar, uchar);
// NOLINTEND

}; // namespace ClientSideChunkGeneration
