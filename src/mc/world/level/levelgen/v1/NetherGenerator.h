#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

class NetherGenerator : public ::WorldGenerator {
public:
    // NetherGenerator inner types declare
    // clang-format off
    struct ThreadData;
    // clang-format on

    // NetherGenerator inner types define
    struct ThreadData {
    public:
        // prevent constructor by default
        ThreadData& operator=(ThreadData const&);
        ThreadData(ThreadData const&);
        ThreadData();
    };

public:
    // prevent constructor by default
    NetherGenerator& operator=(NetherGenerator const&);
    NetherGenerator(NetherGenerator const&);
    NetherGenerator();

public:
    // NOLINTBEGIN
    // symbol:
    // ?decorateWorldGenLoadChunk@NetherGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    MCVAPI void decorateWorldGenLoadChunk(
        class Biome&             biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // symbol:
    // ?decorateWorldGenPostProcess@NetherGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    MCVAPI void decorateWorldGenPostProcess(
        class Biome&       biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // symbol: ?findSpawnPosition@NetherGenerator@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos findSpawnPosition() const;

    // symbol: ?getBiomeArea@NetherGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // symbol: ?getBiomeSource@NetherGenerator@@UEBAAEBVBiomeSource@@XZ
    MCVAPI class BiomeSource const& getBiomeSource() const;

    // symbol: ?getBlockVolumeDimensions@NetherGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // symbol: ?loadChunk@NetherGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    MCVAPI void loadChunk(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    // symbol: ?postProcess@NetherGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    MCVAPI bool postProcess(class ChunkViewSource& neighborhood);

    // symbol:
    // ?prepareAndComputeHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    MCVAPI void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // symbol: ?prepareHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    MCVAPI void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // symbol:
    // ??0NetherGenerator@@QEAA@AEAVDimension@@IPEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI
    NetherGenerator(class Dimension& dimension, uint seed, class Biome const*, std::unique_ptr<class StructureFeatureRegistry>);

    // symbol: ?buildSurfaces@NetherGenerator@@QEAAXAEAVBlockVolume@@AEAVLevelChunk@@AEBVChunkPos@@@Z
    MCAPI void buildSurfaces(class BlockVolume& blocks, class LevelChunk& levelChunk, class ChunkPos const& chunkPos);

    // symbol:
    // ?generateDensityCellsForChunk@NetherGenerator@@QEBA?AV?$MultidimensionalArray@M$04$04$0BB@@Util@@AEBVChunkPos@@@Z
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(class ChunkPos const& chunkPos
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_prepareHeights@NetherGenerator@@AEAAXAEAVBlockVolume@@AEBVChunkPos@@_NPEAV?$vector@FV?$allocator@F@std@@@std@@H@Z
    MCAPI void _prepareHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        bool                  factorInBeardsAndShavers,
        std::vector<short>*,
        int
    );

    // symbol:
    // ?_makeBiomeSource@NetherGenerator@@CA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@AEAVDimension@@@Z
    MCAPI static std::unique_ptr<class BiomeSource> _makeBiomeSource(class Dimension& dimension);

    // NOLINTEND
};
