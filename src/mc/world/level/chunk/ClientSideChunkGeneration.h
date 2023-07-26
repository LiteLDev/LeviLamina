#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientSideChunkGeneration {
/**
 * @symbol ?LowTierRadiusThreshold\@ClientSideChunkGeneration\@\@3EB
 */
MCAPI extern unsigned char const LowTierRadiusThreshold; // NOLINT
/**
 * @symbol ?ServerBuildRatioOverride\@ClientSideChunkGeneration\@\@3V?$optional\@M\@std\@\@A
 */
MCAPI extern class std::optional<float> ServerBuildRatioOverride; // NOLINT
/**
 * @symbol ?getMaxChunkBuildRadius\@ClientSideChunkGeneration\@\@YAEAEBVPlayer\@\@\@Z
 */
MCAPI unsigned char getMaxChunkBuildRadius(class Player const&); // NOLINT
/**
 * @symbol ?getOptimalServerChunkBuildRadiusRatio\@ClientSideChunkGeneration\@\@YAMEE\@Z
 */
MCAPI float getOptimalServerChunkBuildRadiusRatio(unsigned char, unsigned char); // NOLINT

}; // namespace ClientSideChunkGeneration
