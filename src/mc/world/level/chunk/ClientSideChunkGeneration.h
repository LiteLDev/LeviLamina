#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientSideChunkGeneration {
// NOLINTBEGIN
/**
 * @symbol ?LowTierRadiusThreshold\@ClientSideChunkGeneration\@\@3EB
 */
MCAPI extern uint8_t const LowTierRadiusThreshold;
/**
 * @symbol ?ServerBuildRatioOverride\@ClientSideChunkGeneration\@\@3V?$optional\@M\@std\@\@A
 */
MCAPI extern std::optional<float> ServerBuildRatioOverride;
/**
 * @symbol ?getMaxChunkBuildRadius\@ClientSideChunkGeneration\@\@YAEAEBVPlayer\@\@\@Z
 */
MCAPI uint8_t getMaxChunkBuildRadius(class Player const&);
/**
 * @symbol ?getOptimalServerChunkBuildRadiusRatio\@ClientSideChunkGeneration\@\@YAMEE\@Z
 */
MCAPI float getOptimalServerChunkBuildRadiusRatio(uint8_t, uint8_t);
// NOLINTEND

}; // namespace ClientSideChunkGeneration
