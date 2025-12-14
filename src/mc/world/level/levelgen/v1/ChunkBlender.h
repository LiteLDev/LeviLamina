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
namespace ChunkBlenderUtil { struct AttenuationData; }
// clang-format on

class ChunkBlender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::array<::ChunkBlenderUtil::AttenuationData, 4>>>
                                                      mChunkAttenuationData;
    ::ll::TypedStorage<4, 8, ::DividedPos2d<4> const> mMinPos;
    ::ll::TypedStorage<2, 2, short const>             mMinHeight;
    // NOLINTEND

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
