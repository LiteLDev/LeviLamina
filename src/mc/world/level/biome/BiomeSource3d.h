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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BiomeSource3d() = default;

    // vIndex: 1, symbol: ?fillBiomes@BiomeSource3d@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
    virtual void fillBiomes(class LevelChunk&, class ChunkLocalNoiseCache const&) const;

    // vIndex: 2, symbol: ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const;

    // vIndex: 3, symbol: ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint, struct GetBiomeOptions const&) const;

    // vIndex: 4, symbol: ?containsOnly@BiomeSource3d@@UEBA_NHHHHV?$span@$$CB_K$0?0@gsl@@@Z
    virtual bool containsOnly(int, int, int, int, gsl::span<uint64 const>) const;

    // vIndex: 5, symbol: ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
    virtual class Biome const* getBiome(class BlockPos const&) const;

    // vIndex: 6, symbol: ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
    virtual class Biome const* getBiome(struct GetBiomeOptions const&) const;

    // vIndex: 7, symbol: ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@HHH@Z
    virtual class Biome const* getBiome(int, int, int) const;

    // NOLINTEND
};
