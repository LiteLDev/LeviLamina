/**
 * @file  MC/SeamlessChunkBlendingAttenuator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OverworldGeneratorMultinoise.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SeamlessChunkBlendingAttenuator.
 *
 */
class SeamlessChunkBlendingAttenuator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAMLESSCHUNKBLENDINGATTENUATOR
public:
    class SeamlessChunkBlendingAttenuator& operator=(class SeamlessChunkBlendingAttenuator const &) = delete;
    SeamlessChunkBlendingAttenuator(class SeamlessChunkBlendingAttenuator const &) = delete;
    SeamlessChunkBlendingAttenuator() = delete;
#endif

public:
    /**
     * @hash   1107644999
     * @symbol ??0SeamlessChunkBlendingAttenuator@@QEAA@VChunkPos@@$$QEAV?$vector@V?$array@UAttenuationData@SeamlessChunkBlendingAttenuatorUtil@@$03@std@@V?$allocator@V?$array@UAttenuationData@SeamlessChunkBlendingAttenuatorUtil@@$03@std@@@2@@std@@F@Z
     */
    MCAPI SeamlessChunkBlendingAttenuator(class ChunkPos, std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorUtil::AttenuationData, 4>> &&, short);
    /**
     * @hash   -594685323
     * @symbol ?attenuateDensity@SeamlessChunkBlendingAttenuator@@QEBAMAEBV?$DividedPos2d@$03@@HM@Z
     */
    MCAPI float attenuateDensity(class DividedPos2d<4> const &, int, float) const;
    /**
     * @hash   -1950989155
     * @symbol ?attenuateTerrainInfo@SeamlessChunkBlendingAttenuator@@QEBA?AUTerrainInfo@@AEBV?$DividedPos2d@$03@@AEBU2@@Z
     */
    MCAPI struct TerrainInfo attenuateTerrainInfo(class DividedPos2d<4> const &, struct TerrainInfo const &) const;
    /**
     * @hash   848161536
     * @symbol ?tryGetAttenuatedBiome@SeamlessChunkBlendingAttenuator@@QEBAPEBVBiome@@AEBV?$DividedPos@$03@@AEBVBiomeRegistry@@AEBV?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@@Z
     */
    MCAPI class Biome const * tryGetAttenuatedBiome(class DividedPos<4> const &, class BiomeRegistry const &, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const &) const;
    /**
     * @hash   51328143
     * @symbol ?tryMoveWaterEdges@SeamlessChunkBlendingAttenuator@@QEBA?BUBlockGenerationResult@OverworldGeneratorMultinoise@@AEBVBlockPos@@U23@@Z
     */
    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const tryMoveWaterEdges(class BlockPos const &, struct OverworldGeneratorMultinoise::BlockGenerationResult) const;
    /**
     * @hash   -365298316
     * @symbol ??1SeamlessChunkBlendingAttenuator@@QEAA@XZ
     */
    MCAPI ~SeamlessChunkBlendingAttenuator();

};