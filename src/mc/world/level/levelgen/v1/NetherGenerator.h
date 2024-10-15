#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/synth/PerlinNoise.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
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
    // vIndex: 45
    virtual void decorateWorldGenLoadChunk(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // vIndex: 46
    virtual void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // vIndex: 42
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 39
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 40
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    // vIndex: 9
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 38
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // vIndex: 37
    virtual void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    MCAPI NetherGenerator(class Dimension& dimension, uint seed, class Biome const* biomeOverride);

    MCAPI void buildSurfaces(class BlockVolume& blocks, class LevelChunk& levelChunk, class ChunkPos const& chunkPos);

    MCAPI class Util::MultidimensionalArray<float, 5, 5, 17> generateDensityCellsForChunk(class ChunkPos const& chunkPos
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _prepareHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        bool                  factorInBeardsAndShavers,
        std::vector<short>*   ZXheights,
        int                   skipTopN
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCAPI void* ctor$(class Dimension& dimension, uint seed, class Biome const* biomeOverride);

    MCAPI void decorateWorldGenLoadChunk$(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    MCAPI void decorateWorldGenPostProcess$(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    MCAPI class BlockPos findSpawnPosition$() const;

    MCAPI class BiomeArea getBiomeArea$(class BoundingBox const& area, uint scale) const;

    MCAPI class BiomeSource const& getBiomeSource$() const;

    MCAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions$() const;

    MCAPI void loadChunk$(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    MCAPI bool postProcess$(class ChunkViewSource& neighborhood);

    MCAPI void prepareAndComputeHeights$(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    MCAPI void prepareHeights$(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // NOLINTEND
};
