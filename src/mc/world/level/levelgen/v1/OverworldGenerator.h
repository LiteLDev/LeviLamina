#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/feature/CanyonFeature.h"
#include "mc/world/level/levelgen/feature/MonsterRoomFeature.h"
#include "mc/world/level/levelgen/feature/UnderwaterCanyonFeature.h"

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

    float mBiomeBlendKernel[9]; // this+0x188
    bool  mIsLegacyWorld;
    // Bedrock::Threading::InstancedThreadLocal<ThreadData> generatorHelpersPool;
    char                    mGeneratorHelpersPool[168];
    MonsterRoomFeature      mMonsterRoomFeature;
    CanyonFeature           mCanyonFeature;
    UnderwaterCanyonFeature mUnderwaterCanyonFeature; // this+0x288

public:
    // prevent constructor by default
    OverworldGenerator& operator=(OverworldGenerator const&);
    OverworldGenerator(OverworldGenerator const&);
    OverworldGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 9, symbol: ?postProcess@OverworldGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 11, symbol: ?loadChunk@OverworldGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 38,  symbol: ?prepareHeights@OverworldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // vIndex: 39, symbol:
    // ?prepareAndComputeHeights@OverworldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // vIndex: 40, symbol: ?getBiomeArea@OverworldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 42, symbol: ?getBlockVolumeDimensions@OverworldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenLoadChunk@OverworldGenerator@@MEBAXAEBVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void decorateWorldGenLoadChunk(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // vIndex: 48
    virtual class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const = 0;

    // vIndex: 49
    virtual int getLevelGenHeight() const = 0;

    // vIndex: 50
    virtual std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const = 0;

    // vIndex: 51, symbol:
    // ?tryMakeAquifer@OverworldGenerator@@MEBA?AV?$unique_ptr@VAquifer@@U?$default_delete@VAquifer@@@std@@@std@@AEBVChunkPos@@AEBVSurfaceLevelCache@@FFF@Z
    virtual std::unique_ptr<class Aquifer> tryMakeAquifer(
        class ChunkPos const&          chunkPos,
        class SurfaceLevelCache const& surfaceLevelCache,
        short                          minHeight,
        short                          levelGenHeight,
        short                          seaLevel
    ) const;

    // vIndex: 52, symbol: ?createNoiseCache@OverworldGenerator@@MEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
    virtual class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    // vIndex: 53, symbol: ?createWorldGenCache@OverworldGenerator@@MEBA?AVWorldGenCache@@VChunkPos@@@Z
    virtual class WorldGenCache createWorldGenCache(class ChunkPos) const;

    // vIndex: 54
    virtual class PerlinSimplexNoise const& getSurfaceNoise() = 0;

    // vIndex: 55
    virtual std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const = 0;

    // vIndex: 56
    virtual void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    ) = 0;

    // symbol: ??1OverworldGenerator@@UEAA@XZ
    virtual ~OverworldGenerator();

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
