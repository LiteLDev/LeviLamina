#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLocalNoiseCache;
struct GetBiomeOptions;

class BiomeSource {
public:
    // prevent constructor by default
    BiomeSource& operator=(BiomeSource const&);
    BiomeSource(BiomeSource const&);
    BiomeSource();

public:
    virtual ~BiomeSource() = default;

    // vIndex: 1
    virtual void fillBiomes(class LevelChunk&, class ChunkLocalNoiseCache const&) const = 0;

    // vIndex: 2
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint, struct GetBiomeOptions const&) const = 0;

    // vIndex: 3
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const = 0;

    // vIndex: 4
    virtual bool containsOnly(int, int, int, int, gsl::span<uint64 const>) const = 0;

    // vIndex: 5
    virtual class Biome const* getBiome(int, int, int) const = 0;

    // vIndex: 6
    virtual class Biome const* getBiome(struct GetBiomeOptions const&) const = 0;

    // vIndex: 7
    virtual class Biome const* getBiome(class BlockPos const&) const = 0;

    // NOLINTBEGIN
    // symbol: ?getAreaIterator@BiomeSource@@SA?AVBlockPosIterator@@AEBVBoundingBox@@I@Z
    MCAPI static class BlockPosIterator getAreaIterator(class BoundingBox const&, uint scale);

    // NOLINTEND
};
