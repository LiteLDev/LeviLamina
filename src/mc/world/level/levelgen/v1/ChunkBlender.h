#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPos;
struct TerrainInfo;
// clang-format on

class ChunkBlender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5165a1;
    ::ll::UntypedStorage<4, 8>  mUnkadfbc8;
    ::ll::UntypedStorage<2, 2>  mUnk6cf752;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBlender& operator=(ChunkBlender const&);
    ChunkBlender(ChunkBlender const&);
    ChunkBlender();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float attenuateDensity(::DividedPos2d<4> const& worldQuartPos, int cellY, float defaultDensity) const;

    MCAPI ::TerrainInfo
    attenuateTerrainInfo(::DividedPos2d<4> const& worldQuartPos, ::TerrainInfo const& defaultTerrainInfo) const;

    MCAPI ::Biome const* tryGetAttenuatedBiome(
        ::DividedPos<4> const&                                                               worldQuartPos,
        ::BiomeRegistry const&                                                               biomeRegistry,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const& shiftNoise
    ) const;

    MCAPI ::OverworldGeneratorMultinoise::BlockGenerationResult const tryMoveWaterEdges(
        ::BlockPos const&                                     blockPos,
        ::OverworldGeneratorMultinoise::BlockGenerationResult defaultBlockGenerationResult
    ) const;

    MCAPI ~ChunkBlender();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
