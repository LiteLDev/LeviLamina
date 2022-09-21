/**
 * @file  MC/StructureFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~StructureFeature();
    /**
     * @hash   871266846
     * @vftbl  1
     * @symbol ?shouldAddHardcodedSpawnAreas@StructureFeature@@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @hash   -515111292
     * @vftbl  2
     * @symbol ?shouldPostProcessMobs@StructureFeature@@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @hash   300070948
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@StructureFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   605576265
     * @vftbl  4
     * @symbol ?initMobSpawnTypes@StructureFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @hash   -1692041655
     * @vftbl  5
     * @symbol ?isFeatureChunk@WoodlandMansionFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &) = 0;
    /**
     * @hash   1341510503
     * @vftbl  6
     * @symbol ?createStructureStart@WoodlandMansionFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &) = 0;
    /**
     * @hash   -141044917
     * @vftbl  7
     * @symbol ?getStructureAt@StructureFeature@@MEAAPEAVStructureStart@@HHH@Z
     */
    virtual class StructureStart * getStructureAt(int, int, int);
    /**
     * @hash   -981081989
     * @symbol ??0StructureFeature@@QEAA@IW4StructureFeatureType@@@Z
     */
    MCAPI StructureFeature(unsigned int, enum StructureFeatureType);
    /**
     * @hash   -1539610652
     * @symbol ?addHardcodedSpawnAreas@StructureFeature@@QEAAXAEAVLevelChunk@@@Z
     */
    MCAPI void addHardcodedSpawnAreas(class LevelChunk &);
    /**
     * @hash   -2146096473
     * @symbol ?chunkStartAtSurfaceLevel@StructureFeature@@QEAA?AVBlockPos@@AEBVIPreliminarySurfaceProvider@@VChunkPos@@H@Z
     */
    MCAPI class BlockPos chunkStartAtSurfaceLevel(class IPreliminarySurfaceProvider const &, class ChunkPos, int);
    /**
     * @hash   -1583738823
     * @symbol ?createBlueprints@StructureFeature@@QEAAXAEAVDimension@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    MCAPI void createBlueprints(class Dimension &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   -63949389
     * @symbol ?debugRender@StructureFeature@@QEAAXXZ
     */
    MCAPI void debugRender();
    /**
     * @hash   201400135
     * @symbol ?findFarAwayStructures@StructureFeature@@QEAA?AV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@V?$buffer_span@VChunkPos@@@@I@Z
     */
    MCAPI std::vector<class ChunkPos> findFarAwayStructures(class buffer_span<class ChunkPos>, unsigned int);
    /**
     * @hash   -373346116
     * @symbol ?foreachIntersectingStructureStart@StructureFeature@@QEAAXAEBVBoundingBox@@V?$function@$$A6AXAEAVStructureStart@@@Z@std@@@Z
     */
    MCAPI void foreachIntersectingStructureStart(class BoundingBox const &, class std::function<void (class StructureStart &)>);
    /**
     * @hash   -1085205076
     * @symbol ?garbageCollectBlueprints@StructureFeature@@QEAAXV?$buffer_span@VChunkPos@@@@I@Z
     */
    MCAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>, unsigned int);
    /**
     * @hash   6699992
     * @symbol ?getType@StructureFeature@@QEBA?AW4StructureFeatureType@@XZ
     */
    MCAPI enum StructureFeatureType getType() const;
    /**
     * @hash   -2050408279
     * @symbol ?isInsideBoundingFeature@StructureFeature@@QEAA_NHHH@Z
     */
    MCAPI bool isInsideBoundingFeature(int, int, int);
    /**
     * @hash   -1256489338
     * @symbol ?postProcess@StructureFeature@@QEAA_NAEAVBlockSource@@AEAVRandom@@HH@Z
     */
    MCAPI bool postProcess(class BlockSource &, class Random &, int, int);
    /**
     * @hash   -318578237
     * @symbol ?postProcessMobsAt@StructureFeature@@QEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /**
     * @hash   -2069898571
     * @symbol ?waitForFeatureBlueprints@StructureFeature@@QEAAXXZ
     */
    MCAPI void waitForFeatureBlueprints();
    /**
     * @hash   357830305
     * @symbol ?findNearestFeaturePositionBySpacing@StructureFeature@@SA_NAEAVDimension@@AEBVIPreliminarySurfaceProvider@@AEAV1@AEBVBiomeSource@@AEBVBlockPos@@AEAV5@HHH_NH6@Z
     */
    MCAPI static bool findNearestFeaturePositionBySpacing(class Dimension &, class IPreliminarySurfaceProvider const &, class StructureFeature &, class BiomeSource const &, class BlockPos const &, class BlockPos &, int, int, int, bool, int, bool);
    /**
     * @hash   -145383548
     * @symbol ?getChunkPosInSpace@StructureFeature@@SA?AVChunkPos@@AEBV2@AEAVRandom@@IHHH_N@Z
     */
    MCAPI static class ChunkPos getChunkPosInSpace(class ChunkPos const &, class Random &, unsigned int, int, int, int, bool);
    /**
     * @hash   -871402934
     * @symbol ?setRandomSeedFor@StructureFeature@@SAXAEAVRandom@@HHHI@Z
     */
    MCAPI static void setRandomSeedFor(class Random &, int, int, int, unsigned int);

//protected:
    /**
     * @hash   913221364
     * @symbol ?addFeature@StructureFeature@@IEAAXAEAVDimension@@AEAVRandom@@AEBVChunkPos@@AEBVBiomeSource@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    MCAPI void addFeature(class Dimension &, class Random &, class ChunkPos const &, class BiomeSource const &, class IPreliminarySurfaceProvider const &);

protected:

};