/**
 * @file  WorldGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldGenerator.
 *
 */
class WorldGenerator {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockVolumeDimensions {
    BlockVolumeDimensions() = delete;
    BlockVolumeDimensions(BlockVolumeDimensions const&) = delete;
    BlockVolumeDimensions(BlockVolumeDimensions const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENERATOR
public:
    class WorldGenerator& operator=(class WorldGenerator const &) = delete;
    WorldGenerator(class WorldGenerator const &) = delete;
    WorldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDGENERATOR
    /**
     * @symbol  ?addHardcodedSpawnAreas\@WorldGenerator\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk &);
    /**
     * @symbol  ?debugRender\@WorldGenerator\@\@UEAAXXZ
     */
    MCVAPI void debugRender();
    /**
     * @symbol  ?findNearestStructureFeature\@WorldGenerator\@\@UEAA_NW4StructureFeatureType\@\@AEBVBlockPos\@\@AEAV3\@_N\@Z
     */
    MCVAPI bool findNearestStructureFeature(enum class StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    /**
     * @symbol  ?findStructureFeatureTypeAt\@WorldGenerator\@\@UEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    /**
     * @symbol  ?garbageCollectBlueprints\@WorldGenerator\@\@UEAAXV?$buffer_span\@VChunkPos\@\@\@\@\@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    /**
     * @symbol  ?getPreliminarySurfaceLevel\@WorldGenerator\@\@UEBA?AV?$optional\@F\@std\@\@V?$DividedPos2d\@$03\@\@\@Z
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    /**
     * @symbol  ?isStructureFeatureTypeAt\@WorldGenerator\@\@UEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum class StructureFeatureType) const;
    /**
     * @symbol  ?postProcessMobsAt\@WorldGenerator\@\@UEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCVAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~WorldGenerator();
#endif
    /**
     * @symbol  ??0WorldGenerator\@\@QEAA\@AEAVDimension\@\@V?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI WorldGenerator(class Dimension &, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @symbol  ??0WorldGenerator\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI WorldGenerator(class Dimension &);
    /**
     * @symbol  ?computeChunkHeightMap\@WorldGenerator\@\@QEAA?AV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const &);
    /**
     * @symbol  ?getStructureFeatureRegistry\@WorldGenerator\@\@QEBAAEAVStructureFeatureRegistry\@\@XZ
     */
    MCAPI class StructureFeatureRegistry & getStructureFeatureRegistry() const;

//protected:
    /**
     * @symbol  ?postProcessStructureFeatures\@WorldGenerator\@\@IEAAXAEAVBlockSource\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void postProcessStructureFeatures(class BlockSource &, class Random &, int, int);
    /**
     * @symbol  ?prepareStructureFeatureBlueprints\@WorldGenerator\@\@IEAAXAEAVDimension\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void prepareStructureFeatureBlueprints(class Dimension &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);

protected:
    /**
     * @symbol  ?TICKING_QUEUE_PASS_LIMIT\@WorldGenerator\@\@1_KB
     */
    MCAPI static unsigned __int64 const TICKING_QUEUE_PASS_LIMIT;

};