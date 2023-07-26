#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"

class StructureFeature {

public:
    // prevent constructor by default
    StructureFeature& operator=(StructureFeature const&) = delete;
    StructureFeature(StructureFeature const&)            = delete;
    StructureFeature()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?shouldAddHardcodedSpawnAreas\@StructureFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?shouldPostProcessMobs\@StructureFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getNearestGeneratedFeature\@StructureFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(
        class Dimension&,
        class BiomeSource const&,
        class BlockPos const&,
        class BlockPos&,
        class IPreliminarySurfaceProvider const&,
        bool
    ); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?initMobSpawnTypes\@StructureFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@AncientCityFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&) = 0; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@AncientCityFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&) = 0; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getStructureAt\@StructureFeature\@\@MEAAPEAVStructureStart\@\@HHH\@Z
     */
    virtual class StructureStart* getStructureAt(int, int, int); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureFeature(); // NOLINT
#endif
    /**
     * @symbol ??0StructureFeature\@\@QEAA\@IW4StructureFeatureType\@\@\@Z
     */
    MCAPI StructureFeature(unsigned int, enum class StructureFeatureType); // NOLINT
    /**
     * @symbol ?addHardcodedSpawnAreas\@StructureFeature\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void addHardcodedSpawnAreas(class LevelChunk&); // NOLINT
    /**
     * @symbol
     * ?chunkStartAtSurfaceLevel\@StructureFeature\@\@QEAA?AVBlockPos\@\@AEBVIPreliminarySurfaceProvider\@\@VChunkPos\@\@H\@Z
     */
    MCAPI class BlockPos
    chunkStartAtSurfaceLevel(class IPreliminarySurfaceProvider const&, class ChunkPos, int); // NOLINT
    /**
     * @symbol
     * ?createBlueprints\@StructureFeature\@\@QEAAXAEAVDimension\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void
    createBlueprints(class Dimension&, class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&); // NOLINT
    /**
     * @symbol ?debugRender\@StructureFeature\@\@QEAAXXZ
     */
    MCAPI void debugRender(); // NOLINT
    /**
     * @symbol
     * ?findFarAwayStructures\@StructureFeature\@\@QEAA?AV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@V?$buffer_span\@VChunkPos\@\@\@\@I\@Z
     */
    MCAPI std::vector<class ChunkPos> findFarAwayStructures(class buffer_span<class ChunkPos>, unsigned int); // NOLINT
    /**
     * @symbol
     * ?foreachIntersectingStructureStart\@StructureFeature\@\@QEAAXAEBVBoundingBox\@\@V?$function\@$$A6AXAEAVStructureStart\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    foreachIntersectingStructureStart(class BoundingBox const&, class std::function<void(class StructureStart&)>); // NOLINT
    /**
     * @symbol ?garbageCollectBlueprints\@StructureFeature\@\@QEAAXV?$buffer_span\@VChunkPos\@\@\@\@I\@Z
     */
    MCAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>, unsigned int); // NOLINT
    /**
     * @symbol ?isInsideBoundingFeature\@StructureFeature\@\@QEAA_NHHH\@Z
     */
    MCAPI bool isInsideBoundingFeature(int, int, int); // NOLINT
    /**
     * @symbol ?postProcess\@StructureFeature\@\@QEAA_NAEAVBlockSource\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI bool postProcess(class BlockSource&, class Random&, int, int); // NOLINT
    /**
     * @symbol ?postProcessMobsAt\@StructureFeature\@\@QEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource&, int, int, class Random&); // NOLINT
    /**
     * @symbol ?waitForFeatureBlueprints\@StructureFeature\@\@QEAAXXZ
     */
    MCAPI void waitForFeatureBlueprints(); // NOLINT
    /**
     * @symbol
     * ?findNearestFeaturePositionBySpacing\@StructureFeature\@\@SA_NAEAVDimension\@\@AEBVIPreliminarySurfaceProvider\@\@AEAV1\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV5\@HHH_NH6\@Z
     */
    MCAPI static bool findNearestFeaturePositionBySpacing(
        class Dimension&,
        class IPreliminarySurfaceProvider const&,
        class StructureFeature&,
        class BiomeSource const&,
        class BlockPos const&,
        class BlockPos&,
        int,
        int,
        int,
        bool,
        int,
        bool
    ); // NOLINT
    /**
     * @symbol ?getChunkPosInSpace\@StructureFeature\@\@SA?AVChunkPos\@\@AEBV2\@AEAVRandom\@\@IHHH_N\@Z
     */
    MCAPI static class ChunkPos
    getChunkPosInSpace(class ChunkPos const&, class Random&, unsigned int, int, int, int, bool); // NOLINT
    /**
     * @symbol ?setRandomSeedFor\@StructureFeature\@\@SAXAEAVRandom\@\@HHHI\@Z
     */
    MCAPI static void setRandomSeedFor(class Random&, int, int, int, unsigned int); // NOLINT

    // protected:
    /**
     * @symbol
     * ?addFeature\@StructureFeature\@\@IEAAXAEAVDimension\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void
    addFeature(class Dimension&, class Random&, class ChunkPos const&, class BiomeSource const&, class IPreliminarySurfaceProvider const&); // NOLINT

protected:
};
