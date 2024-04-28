#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"

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

    std::unique_ptr<PerlinNoise>        mLperlinNoise1; // this+0x188
    std::unique_ptr<PerlinNoise>        mLperlinNoise2;
    std::unique_ptr<PerlinNoise>        mPerlinNoise1;
    std::unique_ptr<PerlinNoise>        mPerlinNoise2;
    std::unique_ptr<PerlinNoise>        mScaleNoise;
    std::unique_ptr<PerlinNoise>        mDepthNoise;
    std::unique_ptr<PerlinSimplexNoise> mSurfaceNoise;
    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise;
    // Bedrock::Threading::InstancedThreadLocal<NetherGenerator::ThreadData>
    char                         mGeneratorHelpersPool[168];
    std::unique_ptr<BiomeSource> mBiomeSource; // this+0x270

public:
    // prevent constructor by default
    NetherGenerator& operator=(NetherGenerator const&);
    NetherGenerator(NetherGenerator const&);
    NetherGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 45, symbol:
    // ?decorateWorldGenLoadChunk@NetherGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void decorateWorldGenLoadChunk(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@NetherGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // vIndex: 42, symbol: ?findSpawnPosition@NetherGenerator@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 39, symbol: ?getBiomeArea@NetherGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 40, symbol: ?getBiomeSource@NetherGenerator@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41, symbol: ?getBlockVolumeDimensions@NetherGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 11, symbol: ?loadChunk@NetherGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    // vIndex: 9, symbol: ?postProcess@NetherGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 38, symbol:
    // ?prepareAndComputeHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // vIndex: 37, symbol: ?prepareHeights@NetherGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // symbol: ??0NetherGenerator@@QEAA@AEAVDimension@@IPEBVBiome@@@Z
    MCAPI NetherGenerator(class Dimension&, uint, class Biome const*);

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
        std::vector<short>*   ZXheights,
        int                   skipTopN
    );

    // NOLINTEND
};
