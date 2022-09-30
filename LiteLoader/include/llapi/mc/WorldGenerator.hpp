/**
 * @file  WorldGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1684004847
     * @symbol ?addHardcodedSpawnAreas@WorldGenerator@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk &);
    /**
     * @hash   -916125025
     * @symbol ?debugRender@WorldGenerator@@UEAAXXZ
     */
    MCVAPI void debugRender();
    /**
     * @hash   -949838222
     * @symbol ?findNearestStructureFeature@WorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_N@Z
     */
    MCVAPI bool findNearestStructureFeature(enum class StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    /**
     * @hash   1865120126
     * @symbol ?findStructureFeatureTypeAt@WorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
     */
    MCVAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    /**
     * @hash   -1001505884
     * @symbol ?garbageCollectBlueprints@WorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    /**
     * @hash   -703417892
     * @symbol ?getPreliminarySurfaceLevel@WorldGenerator@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    /**
     * @hash   404441294
     * @symbol ?isStructureFeatureTypeAt@WorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum class StructureFeatureType) const;
    /**
     * @hash   -1730541976
     * @symbol ?postProcessMobsAt@WorldGenerator@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
     */
    MCVAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /**
     * @hash   2129122788
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldGenerator();
#endif
    /**
     * @hash   -1741218529
     * @symbol ??0WorldGenerator@@QEAA@AEAVDimension@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
     */
    MCAPI WorldGenerator(class Dimension &, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @hash   48134864
     * @symbol ??0WorldGenerator@@QEAA@AEAVDimension@@@Z
     */
    MCAPI WorldGenerator(class Dimension &);
    /**
     * @hash   -555208263
     * @symbol ?computeChunkHeightMap@WorldGenerator@@QEAA?AV?$vector@FV?$allocator@F@std@@@std@@AEBVChunkPos@@@Z
     */
    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const &);
    /**
     * @hash   -1016223864
     * @symbol ?getStructureFeatureRegistry@WorldGenerator@@QEBAAEAVStructureFeatureRegistry@@XZ
     */
    MCAPI class StructureFeatureRegistry & getStructureFeatureRegistry() const;

//protected:
    /**
     * @hash   1559362968
     * @symbol ?postProcessStructureFeatures@WorldGenerator@@IEAAXAEAVBlockSource@@AEAVRandom@@HH@Z
     */
    MCAPI void postProcessStructureFeatures(class BlockSource &, class Random &, int, int);
    /**
     * @hash   2026790946
     * @symbol ?prepareStructureFeatureBlueprints@WorldGenerator@@IEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    MCAPI void prepareStructureFeatureBlueprints(class Dimension &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);

protected:
    /**
     * @hash   -95545315
     * @symbol ?TICKING_QUEUE_PASS_LIMIT@WorldGenerator@@1_KB
     */
    MCAPI static unsigned __int64 const TICKING_QUEUE_PASS_LIMIT;

};