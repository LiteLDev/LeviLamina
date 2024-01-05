#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class VoidGenerator : public ::WorldGenerator {
public:
    // prevent constructor by default
    VoidGenerator& operator=(VoidGenerator const&);
    VoidGenerator(VoidGenerator const&);
    VoidGenerator();

public:
    // NOLINTBEGIN
    // symbol: ?createNoiseCache@VoidGenerator@@MEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    // symbol: ?createWorldGenCache@VoidGenerator@@MEBA?AVWorldGenCache@@VChunkPos@@@Z
    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos chunkPos) const;

    // symbol:
    // ?decorateWorldGenLoadChunk@VoidGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    MCVAPI void decorateWorldGenLoadChunk(
        class Biome&             biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // symbol:
    // ?decorateWorldGenPostProcess@VoidGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    MCVAPI void decorateWorldGenPostProcess(
        class Biome&       biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // symbol: ?findSpawnPosition@VoidGenerator@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos findSpawnPosition() const;

    // symbol: ?getBiomeArea@VoidGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // symbol: ?getBiomeSource@VoidGenerator@@UEBAAEBVBiomeSource@@XZ
    MCVAPI class BiomeSource const& getBiomeSource() const;

    // symbol: ?getBlockVolumeDimensions@VoidGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // symbol: ?loadChunk@VoidGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    MCVAPI void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // symbol: ?postProcess@VoidGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    MCVAPI bool postProcess(class ChunkViewSource& neighborhood);

    // symbol:
    // ?prepareAndComputeHeights@VoidGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    MCVAPI void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // symbol: ?prepareHeights@VoidGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    MCVAPI void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // symbol: ??0VoidGenerator@@QEAA@AEAVDimension@@@Z
    MCAPI explicit VoidGenerator(class Dimension& dimension);

    // NOLINTEND
};
