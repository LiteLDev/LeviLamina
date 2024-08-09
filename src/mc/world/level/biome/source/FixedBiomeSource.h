#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/Biome.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BiomeSource.h"

class Biome;

class FixedBiomeSource : public ::BiomeSource {
public:
    const Biome* mFixedBiome;

    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FixedBiomeSource() = default;

    // vIndex: 1
    virtual void fillBiomes(class LevelChunk& levelChunk, class ChunkLocalNoiseCache const&) const;

    // vIndex: 2
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 3
    virtual class BiomeArea
    getBiomeArea(class BoundingBox const& area, uint scale, struct GetBiomeOptions const&) const;

    // vIndex: 4
    virtual bool containsOnly(int, int, int, int, gsl::span<uint64 const> allowed) const;

    // vIndex: 5
    virtual class Biome const* getBiome(struct GetBiomeOptions const&) const;

    // vIndex: 6
    virtual class Biome const* getBiome(int blockX, int, int blockZ) const;

    // vIndex: 7
    virtual class Biome const* getBiome(class BlockPos const& blockPos) const;

    // vIndex: 8
    virtual bool has(uint64) const;

    // vIndex: 9
    virtual bool hasByHashId(uint64) const;

    MCAPI explicit FixedBiomeSource(class Biome const& fixedBiome);

    // NOLINTEND
};
