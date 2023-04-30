/**
 * @file  ClientSideChunkGeneration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ClientSideChunkGeneration {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?LowTierRadiusThreshold\@ClientSideChunkGeneration\@\@3EB
     */
    MCAPI extern unsigned char const LowTierRadiusThreshold;
    /**
     * @symbol ?ServerBuildRatioOverride\@ClientSideChunkGeneration\@\@3V?$optional\@M\@std\@\@A
     */
    MCAPI extern class std::optional<float> ServerBuildRatioOverride;
    /**
     * @symbol ?getMaxChunkBuildRadius\@ClientSideChunkGeneration\@\@YAEAEBVPlayer\@\@\@Z
     */
    MCAPI unsigned char getMaxChunkBuildRadius(class Player const &);
    /**
     * @symbol ?getOptimalServerChunkBuildRadiusRatio\@ClientSideChunkGeneration\@\@YAMEE\@Z
     */
    MCAPI float getOptimalServerChunkBuildRadiusRatio(unsigned char, unsigned char);

};