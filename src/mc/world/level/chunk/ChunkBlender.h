#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos.h"
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/world/components/MultiOctaveNoiseImpl.h"
#include "mc/world/components/NormalNoiseImpl.h"
#include "mc/world/components/ParityImprovedNoiseImpl.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"

class ChunkBlender {

public:
    // prevent constructor by default
    ChunkBlender& operator=(ChunkBlender const&) = delete;
    ChunkBlender(ChunkBlender const&)            = delete;
    ChunkBlender()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?attenuateDensity\@ChunkBlender\@\@QEBAMAEBV?$DividedPos2d\@$03\@\@HM\@Z
     */
    MCAPI float attenuateDensity(class DividedPos2d<4> const&, int, float) const;
    /**
     * @symbol ?attenuateTerrainInfo\@ChunkBlender\@\@QEBA?AUTerrainInfo\@\@AEBV?$DividedPos2d\@$03\@\@AEBU2\@\@Z
     */
    MCAPI struct TerrainInfo attenuateTerrainInfo(class DividedPos2d<4> const&, struct TerrainInfo const&) const;
    /**
     * @symbol
     * ?tryGetAttenuatedBiome\@ChunkBlender\@\@QEBAPEBVBiome\@\@AEBV?$DividedPos\@$03\@\@AEBVBiomeRegistry\@\@AEBV?$NormalNoiseImpl\@$0A\@V?$MultiOctaveNoiseImpl\@$0A\@V?$ParityImprovedNoiseImpl\@$0A\@\@\@\@\@\@\@\@Z
     */
    MCAPI class Biome const*
    tryGetAttenuatedBiome(class DividedPos<4> const&, class BiomeRegistry const&, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const&)
        const;
    /**
     * @symbol
     * ?tryMoveWaterEdges\@ChunkBlender\@\@QEBA?BUBlockGenerationResult\@OverworldGeneratorMultinoise\@\@AEBVBlockPos\@\@U23\@\@Z
     */
    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const
    tryMoveWaterEdges(class BlockPos const&, struct OverworldGeneratorMultinoise::BlockGenerationResult) const;
    /**
     * @symbol ??1ChunkBlender\@\@QEAA\@XZ
     */
    MCAPI ~ChunkBlender();
    // NOLINTEND
};
