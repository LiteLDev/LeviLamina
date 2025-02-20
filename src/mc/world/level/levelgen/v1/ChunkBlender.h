#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
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
    MCAPI ::TerrainInfo
    attenuateTerrainInfo(::DividedPos2d<4> const& worldQuartPos, ::TerrainInfo const& defaultTerrainInfo) const;

    MCAPI ::Biome const* tryGetAttenuatedBiome(
        ::DividedPos<4> const&                                                               worldQuartPos,
        ::BiomeRegistry const&                                                               biomeRegistry,
        ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const& shiftNoise
    ) const;
    // NOLINTEND
};
