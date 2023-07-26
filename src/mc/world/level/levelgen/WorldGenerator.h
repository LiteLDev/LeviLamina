#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/buffer_span.h"

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
        BlockVolumeDimensions& operator=(BlockVolumeDimensions const&) = delete;
        BlockVolumeDimensions(BlockVolumeDimensions const&)            = delete;
        BlockVolumeDimensions()                                        = delete;
    };

public:
    // prevent constructor by default
    WorldGenerator& operator=(WorldGenerator const&) = delete;
    WorldGenerator(WorldGenerator const&)            = delete;
    WorldGenerator()                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDGENERATOR
    /**
     * @symbol ?addHardcodedSpawnAreas\@WorldGenerator\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk&); // NOLINT
    /**
     * @symbol ?debugRender\@WorldGenerator\@\@UEAAXXZ
     */
    MCVAPI void debugRender(); // NOLINT
    /**
     * @symbol
     * ?findNearestStructureFeature\@WorldGenerator\@\@UEAA_NW4StructureFeatureType\@\@AEBVBlockPos\@\@AEAV3\@_N\@Z
     */
    MCVAPI bool findNearestStructureFeature(
        enum class StructureFeatureType,
        class BlockPos const&,
        class BlockPos&,
        bool
    ); // NOLINT
    /**
     * @symbol ?findStructureFeatureTypeAt\@WorldGenerator\@\@UEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?garbageCollectBlueprints\@WorldGenerator\@\@UEAAXV?$buffer_span\@VChunkPos\@\@\@\@\@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>); // NOLINT
    /**
     * @symbol ?getPreliminarySurfaceLevel\@WorldGenerator\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const; // NOLINT
    /**
     * @symbol ?isStructureFeatureTypeAt\@WorldGenerator\@\@UEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const&, enum class StructureFeatureType) const; // NOLINT
    /**
     * @symbol ?postProcessMobsAt\@WorldGenerator\@\@UEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCVAPI void postProcessMobsAt(class BlockSource&, int, int, class Random&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldGenerator(); // NOLINT
#endif
    /**
     * @symbol ??0WorldGenerator\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI WorldGenerator(class Dimension&); // NOLINT
    /**
     * @symbol
     * ??0WorldGenerator\@\@QEAA\@AEAVDimension\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI WorldGenerator(class Dimension&, std::unique_ptr<class StructureFeatureRegistry>); // NOLINT
    /**
     * @symbol
     * ?computeChunkHeightMap\@WorldGenerator\@\@QEAA?AV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?getStructureFeatureRegistry\@WorldGenerator\@\@QEBAAEAVStructureFeatureRegistry\@\@XZ
     */
    MCAPI class StructureFeatureRegistry& getStructureFeatureRegistry() const; // NOLINT

    // protected:
    /**
     * @symbol ?postProcessStructureFeatures\@WorldGenerator\@\@IEAAXAEAVBlockSource\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void postProcessStructureFeatures(class BlockSource&, class Random&, int, int); // NOLINT
    /**
     * @symbol
     * ?prepareStructureFeatureBlueprints\@WorldGenerator\@\@IEAAXAEAVDimension\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void
    prepareStructureFeatureBlueprints(class Dimension&, class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&); // NOLINT

protected:
    /**
     * @symbol ?TICKING_QUEUE_PASS_LIMIT\@WorldGenerator\@\@1_KB
     */
    MCAPI static unsigned __int64 const TICKING_QUEUE_PASS_LIMIT; // NOLINT
};
