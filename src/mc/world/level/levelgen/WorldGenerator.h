#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class WorldGenerator {
public:
    // WorldGenerator inner types declare
    // clang-format off
    struct BlockVolumeDimensions;
    // clang-format on

    // WorldGenerator inner types define
    struct BlockVolumeDimensions {
    public:
        // prevent constructor by default
        BlockVolumeDimensions& operator=(BlockVolumeDimensions const&);
        BlockVolumeDimensions(BlockVolumeDimensions const&);
        BlockVolumeDimensions();
    };

public:
    // prevent constructor by default
    WorldGenerator& operator=(WorldGenerator const&);
    WorldGenerator(WorldGenerator const&);
    WorldGenerator();

public:
    // NOLINTBEGIN
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk& lc);

    MCVAPI void debugRender();

    MCVAPI bool
    findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<class HashedString>);

    MCVAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos> activeChunks);

    MCVAPI std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldPos) const;

    MCVAPI void init();

    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    MCVAPI void
    postProcessMobsAt(class BlockSource& blockSource, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    MCVAPI ~WorldGenerator();

    MCAPI explicit WorldGenerator(class Dimension& dimension);

    MCAPI WorldGenerator(class Dimension& dimension, std::unique_ptr<class StructureFeatureRegistry>);

    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const& pos);

    MCAPI class StructureFeatureRegistry& getStructureFeatureRegistry() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void postProcessStructureFeatures(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    MCAPI void postProcessStructures(class BlockSource&, class Random&, int, int);

    MCAPI void preProcessStructures(class Dimension&, class ChunkPos const&, class BiomeSource const&);

    MCAPI void
    prepareStructureFeatureBlueprints(class Dimension& dimension, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    MCAPI void waitForStructures();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static uint64 const TICKING_QUEUE_PASS_LIMIT;

    // NOLINTEND
};
