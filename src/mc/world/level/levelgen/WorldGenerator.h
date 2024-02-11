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
    // symbol: ?addHardcodedSpawnAreas@WorldGenerator@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk& lc);

    // symbol: ?debugRender@WorldGenerator@@UEAAXXZ
    MCVAPI void debugRender();

    // symbol:
    // ?findNearestStructureFeature@WorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_NV?$optional@VHashedString@@@std@@@Z
    MCVAPI bool
    findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<class HashedString>);

    // symbol: ?findStructureFeatureTypeAt@WorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    MCVAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    // symbol: ?garbageCollectBlueprints@WorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos> activeChunks);

    // symbol: ?getPreliminarySurfaceLevel@WorldGenerator@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
    MCVAPI std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldPos) const;

    // symbol: ?init@WorldGenerator@@UEAAXXZ
    MCVAPI void init();

    // symbol: ?isStructureFeatureTypeAt@WorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    // symbol: ?postProcessMobsAt@WorldGenerator@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    MCVAPI void
    postProcessMobsAt(class BlockSource& blockSource, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    // symbol: ??1WorldGenerator@@UEAA@XZ
    MCVAPI ~WorldGenerator();

    // symbol: ??0WorldGenerator@@QEAA@AEAVDimension@@@Z
    MCAPI explicit WorldGenerator(class Dimension& dimension);

    // symbol:
    // ??0WorldGenerator@@QEAA@AEAVDimension@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI WorldGenerator(class Dimension& dimension, std::unique_ptr<class StructureFeatureRegistry>);

    // symbol: ?computeChunkHeightMap@WorldGenerator@@QEAA?AV?$vector@FV?$allocator@F@std@@@std@@AEBVChunkPos@@@Z
    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const& pos);

    // symbol: ?getStructureFeatureRegistry@WorldGenerator@@QEBAAEAVStructureFeatureRegistry@@XZ
    MCAPI class StructureFeatureRegistry& getStructureFeatureRegistry() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?postProcessStructureFeatures@WorldGenerator@@IEAAXAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI void postProcessStructureFeatures(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    // symbol: ?postProcessStructures@WorldGenerator@@IEAAXAEAVBlockSource@@AEAVRandom@@HH@Z
    MCAPI void postProcessStructures(class BlockSource&, class Random&, int, int);

    // symbol: ?preProcessStructures@WorldGenerator@@IEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@@Z
    MCAPI void preProcessStructures(class Dimension&, class ChunkPos const&, class BiomeSource const&);

    // symbol:
    // ?prepareStructureFeatureBlueprints@WorldGenerator@@IEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI void
    prepareStructureFeatureBlueprints(class Dimension& dimension, class ChunkPos const& cp, class BiomeSource const& biomeSource, class IPreliminarySurfaceProvider const&);

    // symbol: ?waitForStructures@WorldGenerator@@IEAAXXZ
    MCAPI void waitForStructures();

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?TICKING_QUEUE_PASS_LIMIT@WorldGenerator@@1_KB
    MCAPI static uint64 const TICKING_QUEUE_PASS_LIMIT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $TICKING_QUEUE_PASS_LIMIT() { return TICKING_QUEUE_PASS_LIMIT; }

    // NOLINTEND
};
