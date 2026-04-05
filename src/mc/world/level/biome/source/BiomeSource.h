#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSourceType.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/newbiome/OperationGraphResult.h"

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
// clang-format on

class BiomeSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeSource() = default;

    virtual ::ChunkVolume::VolumeOf<::Biome> getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const;

    virtual ::std::optional<::OperationGraphResult<::Biome const*> const>
    getBiomeAreaToFill(::LevelChunk const& levelChunk) const;

    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const& box, uint scale) const = 0;

    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& box, uint scale, ::GetBiomeOptions const& getBiomeOptionsIn) const = 0;

    virtual bool containsOnly(int xo, int yo, int zo, int r, ::gsl::span<::BiomeIdType const> allowed) const = 0;

    virtual bool hasBiomeById(::BiomeIdType id) const = 0;

    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const = 0;

    virtual ::BiomeSourceType const getType() const = 0;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const& getBiomeOptions) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ChunkVolume::VolumeOf<::Biome> $getBiomeVolumeToFill(
        short                         chunkHeight,
        ::BlockPos                    chunkMin,
        uint                          levelSeed,
        ::ChunkLocalNoiseCache const* chunkLocalNoiseCache
    ) const;

    MCFOLD ::std::optional<::OperationGraphResult<::Biome const*> const>
    $getBiomeAreaToFill(::LevelChunk const& levelChunk) const;


    // NOLINTEND
};
