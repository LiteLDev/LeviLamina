/**
 * @file  ChunkBlender.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "OverworldGeneratorMultinoise.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ChunkBlender {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLENDER
public:
    class ChunkBlender& operator=(class ChunkBlender const &) = delete;
    ChunkBlender(class ChunkBlender const &) = delete;
    ChunkBlender() = delete;
#endif

public:
    /**
     * @symbol  ??0ChunkBlender\@\@QEAA\@VChunkPos\@\@$$QEAV?$vector\@V?$array\@UAttenuationData\@ChunkBlenderUtil\@\@$03\@std\@\@V?$allocator\@V?$array\@UAttenuationData\@ChunkBlenderUtil\@\@$03\@std\@\@\@2\@\@std\@\@F\@Z
     */
    MCAPI ChunkBlender(class ChunkPos, std::vector<class std::array<struct ChunkBlenderUtil::AttenuationData, 4>> &&, short);
    /**
     * @symbol  ?attenuateDensity\@ChunkBlender\@\@QEBAMAEBV?$DividedPos2d\@$03\@\@HM\@Z
     */
    MCAPI float attenuateDensity(class DividedPos2d<4> const &, int, float) const;
    /**
     * @symbol  ?attenuateTerrainInfo\@ChunkBlender\@\@QEBA?AUTerrainInfo\@\@AEBV?$DividedPos2d\@$03\@\@AEBU2\@\@Z
     */
    MCAPI struct TerrainInfo attenuateTerrainInfo(class DividedPos2d<4> const &, struct TerrainInfo const &) const;
    /**
     * @symbol  ?tryGetAttenuatedBiome\@ChunkBlender\@\@QEBAPEBVBiome\@\@AEBV?$DividedPos\@$03\@\@AEBVBiomeRegistry\@\@AEBV?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@\@Z
     */
    MCAPI class Biome const * tryGetAttenuatedBiome(class DividedPos<4> const &, class BiomeRegistry const &, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const &) const;
    /**
     * @symbol  ?tryMoveWaterEdges\@ChunkBlender\@\@QEBA?BUBlockGenerationResult\@OverworldGeneratorMultinoise\@\@AEBVBlockPos\@\@U23\@\@Z
     */
    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const tryMoveWaterEdges(class BlockPos const &, struct OverworldGeneratorMultinoise::BlockGenerationResult) const;
    /**
     * @symbol  ??1ChunkBlender\@\@QEAA\@XZ
     */
    MCAPI ~ChunkBlender();

};