#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

class TheEndGenerator : public ::WorldGenerator {
public:
    std::unique_ptr<PerlinNoise>        mLPerlinNoise1; // this+0x188
    std::unique_ptr<PerlinNoise>        mLPerlinNoise2;
    std::unique_ptr<PerlinNoise>        mPerlinNoise1;
    std::unique_ptr<SimplexNoise>       mIslandNoise;
    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise;
    // Bedrock::Threading::InstancedThreadLocal<TheEndGenerator::ThreadData>
    char                              mGeneratorHelpersPool[168];
    std::unique_ptr<FixedBiomeSource> mBiomeSource; // this+0x258

    // prevent constructor by default
    TheEndGenerator& operator=(TheEndGenerator const&);
    TheEndGenerator(TheEndGenerator const&);
    TheEndGenerator();

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

    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const;

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    // vIndex: 9
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 12
    virtual void
    postProcessMobsAt(class BlockSource& blockSource, int chunkWestBlock, int chunkNorthBlock, class Random& random);

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

    MCAPI TheEndGenerator(class Dimension& dimension, uint seed, class Biome const* overrideBiome);

    MCAPI void buildSurfaces(class BlockVolume& box, class ChunkPos const& chunkPos, class LevelChunk& levelChunk);

    MCAPI class Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(class ChunkPos const& chunkPos
    ) const;

    MCAPI static bool isOutsideCentralIslandArea(class ChunkPos const& chunkPos);

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

    MCAPI float getIslandHeightValue(int chunkX, int chunkZ, int cellOffsetX, int cellOffsetZ) const;

    // NOLINTEND
};
