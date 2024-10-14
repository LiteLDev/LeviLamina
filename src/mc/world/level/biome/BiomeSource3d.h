#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"

class BiomeSource3d : public ::BiomeSource {
public:
    // prevent constructor by default
    BiomeSource3d& operator=(BiomeSource3d const&);
    BiomeSource3d(BiomeSource3d const&);
    BiomeSource3d();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeSource3d() = default;

    // vIndex: 1
    virtual void fillBiomes(class LevelChunk& levelChunk, class ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;

    // vIndex: 2
    virtual class BiomeArea getBiomeArea(class BoundingBox const& box, uint scale) const;

    // vIndex: 3
    virtual class BiomeArea
    getBiomeArea(class BoundingBox const& box, uint scale, struct GetBiomeOptions const& getBiomeOptionsIn) const;

    // vIndex: 4
    virtual bool containsOnly(int, int, int, int, gsl::span<uint64 const>) const;

    // vIndex: 5
    virtual class Biome const* getBiome(class BlockPos const& blockPos) const;

    // vIndex: 6
    virtual class Biome const* getBiome(struct GetBiomeOptions const& getBiomeOptions) const;

    // vIndex: 7
    virtual class Biome const* getBiome(int blockX, int blockY, int blockZ) const;

    // vIndex: 8
    virtual bool has(uint64 id) const;

    // vIndex: 9
    virtual bool hasByHashId(uint64 id) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool containsOnly$(int, int, int, int, gsl::span<uint64 const>) const;

    MCAPI void fillBiomes$(class LevelChunk& levelChunk, class ChunkLocalNoiseCache const& chunkLocalNoiseCache) const;

    MCAPI class Biome const* getBiome$(class BlockPos const& blockPos) const;

    MCAPI class Biome const* getBiome$(struct GetBiomeOptions const& getBiomeOptions) const;

    MCAPI class Biome const* getBiome$(int blockX, int blockY, int blockZ) const;

    MCAPI class BiomeArea getBiomeArea$(class BoundingBox const& box, uint scale) const;

    MCAPI class BiomeArea
    getBiomeArea$(class BoundingBox const& box, uint scale, struct GetBiomeOptions const& getBiomeOptionsIn) const;

    MCAPI bool has$(uint64 id) const;

    MCAPI bool hasByHashId$(uint64 id) const;

    // NOLINTEND
};
