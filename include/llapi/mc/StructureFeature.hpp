/**
 * @file  StructureFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureFeature.
 *
 */
class StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREFEATURE
public:
    class StructureFeature& operator=(class StructureFeature const &) = delete;
    StructureFeature(class StructureFeature const &) = delete;
    StructureFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureFeature();
    /**
     * @vftbl  1
     * @symbol  ?shouldAddHardcodedSpawnAreas\@StructureFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @vftbl  2
     * @symbol  ?shouldPostProcessMobs\@StructureFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @vftbl  3
     * @symbol  ?getNearestGeneratedFeature\@StructureFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  4
     * @symbol  ?initMobSpawnTypes\@StructureFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @vftbl  5
     * @symbol  ?isFeatureChunk\@WoodlandMansionFeature\@\@MEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &) = 0;
    /**
     * @vftbl  6
     * @symbol  ?createStructureStart\@WoodlandMansionFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &) = 0;
    /**
     * @vftbl  7
     * @symbol  ?getStructureAt\@StructureFeature\@\@MEAAPEAVStructureStart\@\@HHH\@Z
     */
    virtual class StructureStart * getStructureAt(int, int, int);
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  ?_Get\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEBAPEBXXZ
     */
    virtual void const * _Get() const;
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @symbol  ??0StructureFeature\@\@QEAA\@IW4StructureFeatureType\@\@\@Z
     */
    MCAPI StructureFeature(unsigned int, enum class StructureFeatureType);
    /**
     * @symbol  ?addHardcodedSpawnAreas\@StructureFeature\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void addHardcodedSpawnAreas(class LevelChunk &);
    /**
     * @symbol  ?chunkStartAtSurfaceLevel\@StructureFeature\@\@QEAA?AVBlockPos\@\@AEBVIPreliminarySurfaceProvider\@\@VChunkPos\@\@H\@Z
     */
    MCAPI class BlockPos chunkStartAtSurfaceLevel(class IPreliminarySurfaceProvider const &, class ChunkPos, int);
    /**
     * @symbol  ?createBlueprints\@StructureFeature\@\@QEAAXAEAVDimension\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void createBlueprints(class Dimension &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol  ?debugRender\@StructureFeature\@\@QEAAXXZ
     */
    MCAPI void debugRender();
    /**
     * @symbol  ?findFarAwayStructures\@StructureFeature\@\@QEAA?AV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@V?$buffer_span\@VChunkPos\@\@\@\@I\@Z
     */
    MCAPI std::vector<class ChunkPos> findFarAwayStructures(class buffer_span<class ChunkPos>, unsigned int);
    /**
     * @symbol  ?foreachIntersectingStructureStart\@StructureFeature\@\@QEAAXAEBVBoundingBox\@\@V?$function\@$$A6AXAEAVStructureStart\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachIntersectingStructureStart(class BoundingBox const &, class std::function<void (class StructureStart &)>);
    /**
     * @symbol  ?garbageCollectBlueprints\@StructureFeature\@\@QEAAXV?$buffer_span\@VChunkPos\@\@\@\@I\@Z
     */
    MCAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>, unsigned int);
    /**
     * @symbol  ?getType\@StructureFeature\@\@QEBA?AW4StructureFeatureType\@\@XZ
     */
    MCAPI enum class StructureFeatureType getType() const;
    /**
     * @symbol  ?isInsideBoundingFeature\@StructureFeature\@\@QEAA_NHHH\@Z
     */
    MCAPI bool isInsideBoundingFeature(int, int, int);
    /**
     * @symbol  ?postProcess\@StructureFeature\@\@QEAA_NAEAVBlockSource\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI bool postProcess(class BlockSource &, class Random &, int, int);
    /**
     * @symbol  ?postProcessMobsAt\@StructureFeature\@\@QEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /**
     * @symbol  ?waitForFeatureBlueprints\@StructureFeature\@\@QEAAXXZ
     */
    MCAPI void waitForFeatureBlueprints();
    /**
     * @symbol  ?findNearestFeaturePositionBySpacing\@StructureFeature\@\@SA_NAEAVDimension\@\@AEBVIPreliminarySurfaceProvider\@\@AEAV1\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV5\@HHH_NH6\@Z
     */
    MCAPI static bool findNearestFeaturePositionBySpacing(class Dimension &, class IPreliminarySurfaceProvider const &, class StructureFeature &, class BiomeSource const &, class BlockPos const &, class BlockPos &, int, int, int, bool, int, bool);
    /**
     * @symbol  ?getChunkPosInSpace\@StructureFeature\@\@SA?AVChunkPos\@\@AEBV2\@AEAVRandom\@\@IHHH_N\@Z
     */
    MCAPI static class ChunkPos getChunkPosInSpace(class ChunkPos const &, class Random &, unsigned int, int, int, int, bool);
    /**
     * @symbol  ?setRandomSeedFor\@StructureFeature\@\@SAXAEAVRandom\@\@HHHI\@Z
     */
    MCAPI static void setRandomSeedFor(class Random &, int, int, int, unsigned int);

//protected:
    /**
     * @symbol  ?addFeature\@StructureFeature\@\@IEAAXAEAVDimension\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void addFeature(class Dimension &, class Random &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);

protected:

};