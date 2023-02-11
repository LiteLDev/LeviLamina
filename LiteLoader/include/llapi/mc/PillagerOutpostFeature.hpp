/**
 * @file  PillagerOutpostFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PillagerOutpostFeature.
 *
 */
class PillagerOutpostFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTFEATURE
public:
    class PillagerOutpostFeature& operator=(class PillagerOutpostFeature const &) = delete;
    PillagerOutpostFeature(class PillagerOutpostFeature const &) = delete;
    PillagerOutpostFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PillagerOutpostFeature();
    /**
     * @hash   1823798845
     * @vftbl  1
     * @symbol  ?shouldAddHardcodedSpawnAreas\@PillagerOutpostFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @hash   -1487322461
     * @vftbl  2
     * @symbol  ?shouldPostProcessMobs\@PillagerOutpostFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @hash   542711507
     * @vftbl  3
     * @symbol  ?getNearestGeneratedFeature\@PillagerOutpostFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   2006260298
     * @vftbl  4
     * @symbol  ?initMobSpawnTypes\@PillagerOutpostFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @hash   -1062487484
     * @vftbl  5
     * @symbol  ?isFeatureChunk\@PillagerOutpostFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1453540525
     * @vftbl  6
     * @symbol  ?createStructureStart\@PillagerOutpostFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   245150437
     * @symbol  ??0PillagerOutpostFeature\@\@QEAA\@I\@Z
     */
    MCAPI PillagerOutpostFeature(unsigned int);

};