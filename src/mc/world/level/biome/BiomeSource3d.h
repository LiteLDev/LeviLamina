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
    // vIndex: 0, symbol: __gen_??1BiomeSource3d@@UEAA@XZ
    virtual ~BiomeSource3d() = default;

    // vIndex: 1, symbol: ?fillBiomes@BiomeSource3d@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
    virtual void fillBiomes(class LevelChunk& levelChunk, class ChunkLocalNoiseCache const&) const;

    // vIndex: 2, symbol: ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& box, uint scale) const;

    // vIndex: 3, symbol: ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& box, uint scale, struct GetBiomeOptions const&) const;

    // vIndex: 4, symbol: ?containsOnly@BiomeSource3d@@UEBA_NHHHHV?$span@$$CB_K$0?0@gsl@@@Z
    virtual bool containsOnly(int xo, int yo, int zo, int r, gsl::span<uint64 const> allowed) const;

    // vIndex: 5, symbol: ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const& blockPos) const;

    // vIndex: 6, symbol: ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
    virtual class Biome const* getBiome(struct GetBiomeOptions const&) const;

    // vIndex: 7, symbol: ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@HHH@Z
    virtual class Biome const* getBiome(int blockX, int, int blockZ) const;

    // vIndex: 8, symbol: ?has@BiomeSource3d@@UEBA_N_K@Z
    virtual bool has(uint64) const;

    // vIndex: 9, symbol: ?hasByHashId@BiomeSource3d@@UEBA_N_K@Z
    virtual bool hasByHashId(uint64) const;

    // NOLINTEND
};
