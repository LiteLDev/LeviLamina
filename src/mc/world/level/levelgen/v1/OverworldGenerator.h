#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/MultidimensionalArray.h"
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
    // vIndex: 9
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    // vIndex: 38
    virtual void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // vIndex: 39
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // vIndex: 40
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 42
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 46
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

    // vIndex: 51
    virtual std::unique_ptr<class Aquifer>
    tryMakeAquifer(class ChunkPos const&, class SurfaceLevelCache const&, short, short, short) const;

    // vIndex: 52
    virtual class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    // vIndex: 53
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

    virtual ~OverworldGenerator();

    MCAPI OverworldGenerator(class Dimension& dimension, bool isLegacyWorld);

    MCAPI void buildSurfaces(
        struct OverworldGenerator::ThreadData& thread,
        class BlockVolume&                     blocks,
        class LevelChunk&                      levelChunk,
        class ChunkPos const&                  chunkPos,
        class SurfaceLevelCache const&         surfaceLevelCache
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class ChunkLocalNoiseCache createNoiseCache$(class ChunkPos) const;

    MCAPI class WorldGenCache createWorldGenCache$(class ChunkPos chunkPos) const;

    MCAPI void decorateWorldGenLoadChunk$(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    MCAPI class BiomeArea getBiomeArea$(class BoundingBox const& area, uint scale) const;

    MCAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions$() const;

    MCAPI void loadChunk$(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI bool postProcess$(class ChunkViewSource& neighborhoodIn);

    MCAPI void prepareAndComputeHeights$(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCAPI void prepareHeights$(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCAPI std::unique_ptr<class Aquifer>
          tryMakeAquifer$(class ChunkPos const&, class SurfaceLevelCache const&, short, short, short) const;

    // NOLINTEND
};
