#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/biomeproviders/BlendedMultiNoiseBiomeProvider.h"
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
namespace BiomeChunkVolume { struct BiomeSamplesContainer; }
// clang-format on

class BiomeSource3d : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::BlendedMultiNoiseBiomeProvider> mBiomeProvider;
    ::ll::TypedStorage<2, 4, ::DimensionHeightRange const>       mDimensionHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSource3d();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ChunkVolume::VolumeOf<::Biome> getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const /*override*/;

    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const
        /*override*/;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale) const /*override*/;

    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const /*override*/;

    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const
        /*override*/;

    virtual bool collectBiomesInColumn(int x, int z, int minY, int maxY, ::std::vector<::BiomeIdType>& out) const
        /*override*/;

    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;

    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;

    virtual ::BiomeSourceType const getType() const /*override*/;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeSource3d(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);

    MCNAPI void _populateBiomeSamples(
        ::BiomeChunkVolume::BiomeSamplesContainer& biomeSamples,
        ::ChunkLocalNoiseCache const&              chunkLocalNoiseCache
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlendedMultiNoiseBiomeProvider biomeProvider, ::DimensionHeightRange dimensionHeight);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ChunkVolume::VolumeOf<::Biome> $getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const;

    MCNAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const& box, uint scale) const;

    MCNAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const;

    MCNAPI bool $containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const;

    MCNAPI bool $collectBiomesInColumn(int x, int z, int minY, int maxY, ::std::vector<::BiomeIdType>& out) const;

    MCNAPI bool $hasBiomeById(::BiomeIdType id) const;

    MCNAPI bool $hasBiomeByNameHash(::BiomeHashType hash) const;

    MCNAPI ::BiomeSourceType const $getType() const;

    MCNAPI ::Biome const* $_getBiome(::GetBiomeOptions const& getBiomeOptions) const;


    // NOLINTEND
};
