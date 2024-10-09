#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/synth/ParityImprovedNoiseImpl.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"

class ChunkBlender {
public:
    // prevent constructor by default
    ChunkBlender& operator=(ChunkBlender const&);
    ChunkBlender(ChunkBlender const&);
    ChunkBlender();

public:
    // NOLINTBEGIN
    MCAPI float attenuateDensity(class DividedPos2d<4> const& worldQuartPos, int cellY, float defaultDensity) const;

    MCAPI struct TerrainInfo attenuateTerrainInfo(
        class DividedPos2d<4> const& worldQuartPos,
        struct TerrainInfo const&    defaultTerrainInfo
    ) const;

    MCAPI class Biome const* tryGetAttenuatedBiome(
        class DividedPos<4> const&                                                                       worldQuartPos,
        class BiomeRegistry const&                                                                       biomeRegistry,
        class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const& shiftNoise
    ) const;

    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const tryMoveWaterEdges(
        class BlockPos const&                                      blockPos,
        struct OverworldGeneratorMultinoise::BlockGenerationResult defaultBlockGenerationResult
    ) const;

    MCAPI ~ChunkBlender();

    // NOLINTEND
};
