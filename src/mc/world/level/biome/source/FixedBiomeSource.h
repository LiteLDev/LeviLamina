#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BlockPos;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct GetBiomeOptions;
// clang-format on

class FixedBiomeSource : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const&> mFixedBiome;
    // NOLINTEND

public:
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const
        /*override*/;

    // vIndex: 4
    virtual bool containsOnly(int, int, int, int, ::gsl::span<uint64 const> allowed) const /*override*/;

    // vIndex: 7
    virtual ::Biome const* getBiome(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 6
    virtual ::Biome const* getBiome(::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    // vIndex: 5
    virtual ::Biome const* getBiome(int blockX, int blockY, int blockZ) const /*override*/;

    // vIndex: 3
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;

    // vIndex: 2
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const /*override*/;

    // vIndex: 8
    virtual bool has(uint64 id) const /*override*/;

    // vIndex: 9
    virtual bool hasByHashId(uint64 id) const /*override*/;

    // vIndex: 0
    virtual ~FixedBiomeSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;

    MCAPI bool $containsOnly(int, int, int, int, ::gsl::span<uint64 const> allowed) const;

    MCFOLD ::Biome const* $getBiome(::BlockPos const& blockPos) const;

    MCFOLD ::Biome const* $getBiome(::GetBiomeOptions const& getBiomeOptions) const;

    MCFOLD ::Biome const* $getBiome(int blockX, int blockY, int blockZ) const;

    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;

    MCAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const;

    MCAPI bool $has(uint64 id) const;

    MCAPI bool $hasByHashId(uint64 id) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
