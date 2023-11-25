#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/block/BlockVolume.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class VoidGenerator : public ::WorldGenerator {
public:
    const Biome*                      mBiome;           // this+136
    std::unique_ptr<FixedBiomeSource> mBiomeSource;     // this+144
    void*                             unk_152;          // this+152
    std::vector<Block const*>         mPrototypeBlocks; // this+160
    BlockVolume                       mPrototype;       // this+184
    bool                              unk_224;          // this+224
    // prevent constructor by default
    VoidGenerator& operator=(VoidGenerator const&);
    VoidGenerator(VoidGenerator const&);
    VoidGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 47, symbol: ?createNoiseCache@VoidGenerator@@MEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
    virtual class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;

    // vIndex: 48, symbol: ?createWorldGenCache@VoidGenerator@@MEBA?AVWorldGenCache@@VChunkPos@@@Z
    virtual class WorldGenCache createWorldGenCache(class ChunkPos) const;

    // vIndex: 45, symbol:
    // ?decorateWorldGenLoadChunk@VoidGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void
    decorateWorldGenLoadChunk(class Biome&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@VoidGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(class Biome&, class LevelChunk&, class BlockSource&, class Random&) const;

    // vIndex: 42, symbol: ?findSpawnPosition@VoidGenerator@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 39, symbol: ?getBiomeArea@VoidGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const;

    // vIndex: 40, symbol: ?getBiomeSource@VoidGenerator@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41, symbol: ?getBlockVolumeDimensions@VoidGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 11, symbol: ?loadChunk@VoidGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk&, bool);

    // vIndex: 9, symbol: ?postProcess@VoidGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource&);

    // vIndex: 38, symbol:
    // ?prepareAndComputeHeights@VoidGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);

    // vIndex: 37, symbol: ?prepareHeights@VoidGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);

    // symbol: ??0VoidGenerator@@QEAA@AEAVDimension@@@Z
    MCAPI VoidGenerator(class Dimension&);

    // NOLINTEND
};
