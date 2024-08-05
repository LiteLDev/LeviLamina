#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BiomeSource.h"

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
    virtual void fillBiomes(class LevelChunk& levelChunk, class ChunkLocalNoiseCache const&) const;

    // vIndex: 2
    virtual class BiomeArea getBiomeArea(class BoundingBox const& box, uint scale) const;

    // vIndex: 3
    virtual class BiomeArea getBiomeArea(class BoundingBox const& box, uint scale, struct GetBiomeOptions const&) const;

    // vIndex: 4
    virtual bool containsOnly(int xo, int yo, int zo, int r, gsl::span<uint64 const> allowed) const;

    // vIndex: 5
    virtual class Biome const* getBiome(class BlockPos const& blockPos) const;

    // vIndex: 6
    virtual class Biome const* getBiome(struct GetBiomeOptions const&) const;

    // vIndex: 7
    virtual class Biome const* getBiome(int blockX, int, int blockZ) const;

    // vIndex: 8
    virtual bool has(uint64) const;

    // vIndex: 9
    virtual bool hasByHashId(uint64) const;

    // NOLINTEND
};
