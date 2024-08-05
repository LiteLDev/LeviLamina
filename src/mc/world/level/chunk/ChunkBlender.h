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
    ChunkBlender& operator=(ChunkBlender const&);
    ChunkBlender(ChunkBlender const&);
    ChunkBlender();

public:
    // NOLINTBEGIN
    MCAPI float attenuateDensity(class DividedPos2d<4> const&, int cellY, float) const;

    MCAPI struct TerrainInfo attenuateTerrainInfo(class DividedPos2d<4> const&, struct TerrainInfo const&) const;

    MCAPI class Biome const*
    tryGetAttenuatedBiome(class DividedPos<4> const&, class BiomeRegistry const& biomeRegistry, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const&)
        const;

    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const
    tryMoveWaterEdges(class BlockPos const& blockPos, struct OverworldGeneratorMultinoise::BlockGenerationResult) const;

    MCAPI ~ChunkBlender();

    // NOLINTEND
};
