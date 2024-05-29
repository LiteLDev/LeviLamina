#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/block/BlockVolume.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class VoidGenerator : public ::WorldGenerator {
public:
    const Biome*                      mBiome; // this+188
    std::unique_ptr<FixedBiomeSource> mBiomeSource;
    void*                             unk_408;
    std::vector<Block const*>         mPrototypeBlocks;
    BlockVolume                       mPrototype;
    bool                              unk_480;
    // prevent constructor by default
    VoidGenerator& operator=(VoidGenerator const&);
    VoidGenerator(VoidGenerator const&);
    VoidGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 47, symbol: ?createNoiseCache@VoidGenerator@@MEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
    virtual class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    // vIndex: 48, symbol: ?createWorldGenCache@VoidGenerator@@MEBA?AVWorldGenCache@@VChunkPos@@@Z
    virtual class WorldGenCache createWorldGenCache(class ChunkPos chunkPos) const;

    // vIndex: 45, symbol:
    // ?decorateWorldGenLoadChunk@VoidGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void decorateWorldGenLoadChunk(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@VoidGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // vIndex: 43, symbol: ?findSpawnPosition@VoidGenerator@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 40, symbol: ?getBiomeArea@VoidGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 41, symbol: ?getBiomeSource@VoidGenerator@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 42, symbol: ?getBlockVolumeDimensions@VoidGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 11, symbol: ?loadChunk@VoidGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 9, symbol: ?postProcess@VoidGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 39, symbol:
    // ?prepareAndComputeHeights@VoidGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // vIndex: 38, symbol: ?prepareHeights@VoidGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // symbol: ??0VoidGenerator@@QEAA@AEAVDimension@@@Z
    MCAPI VoidGenerator(class Dimension& dimension);

    // NOLINTEND
};
