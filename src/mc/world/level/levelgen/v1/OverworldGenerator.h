#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/WorldGenerator.h"

class OverworldGenerator : public ::WorldGenerator {
public:
    // OverworldGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // OverworldGenerator inner types define
    struct ThreadData {
    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

public:
    // prevent constructor by default
    OverworldGenerator& operator=(OverworldGenerator const&);
    OverworldGenerator(OverworldGenerator const&);
    OverworldGenerator();

public:
    // NOLINTBEGIN
    // symbol: ?createNoiseCache@OverworldGenerator@@MEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    // symbol: ?createWorldGenCache@OverworldGenerator@@MEBA?AVWorldGenCache@@VChunkPos@@@Z
    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos chunkPos) const;

    // symbol:
    // ?decorateWorldGenLoadChunk@OverworldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    MCVAPI void decorateWorldGenLoadChunk(
        class Biome&             biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // symbol: ?getBiomeArea@OverworldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // symbol: ?getBlockVolumeDimensions@OverworldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // symbol: ?loadChunk@OverworldGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    MCVAPI void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // symbol: ?postProcess@OverworldGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    MCVAPI bool postProcess(class ChunkViewSource& neighborhoodIn);

    // symbol:
    // ?prepareAndComputeHeights@OverworldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    MCVAPI void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // symbol: ?prepareHeights@OverworldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    MCVAPI void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // symbol:
    // ?tryMakeAquifer@OverworldGenerator@@MEBA?AV?$unique_ptr@VAquifer@@U?$default_delete@VAquifer@@@std@@@std@@AEBVChunkPos@@AEBVSurfaceLevelCache@@FFF@Z
    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(
        class ChunkPos const&          chunkPos,
        class SurfaceLevelCache const& surfaceLevelCache,
        short                          minHeight,
        short                          levelGenHeight,
        short                          seaLevel
    ) const;

    // symbol: ??1OverworldGenerator@@UEAA@XZ
    MCVAPI ~OverworldGenerator();

    // symbol: ??0OverworldGenerator@@QEAA@AEAVDimension@@_N@Z
    MCAPI OverworldGenerator(class Dimension&, bool);

    // symbol:
    // ?buildSurfaces@OverworldGenerator@@QEAAXAEAUThreadData@1@AEAVBlockVolume@@AEAVLevelChunk@@AEBVChunkPos@@AEBVSurfaceLevelCache@@@Z
    MCAPI void buildSurfaces(
        struct OverworldGenerator::ThreadData& thread,
        class BlockVolume&                     blocks,
        class LevelChunk&                      levelChunk,
        class ChunkPos const&                  chunkPos,
        class SurfaceLevelCache const&         surfaceLevelCache
    );

    // NOLINTEND
};
