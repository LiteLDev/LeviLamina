/**
 * @file  OceanMonumentFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentFeature.
 *
 */
class OceanMonumentFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTFEATURE
public:
    class OceanMonumentFeature& operator=(class OceanMonumentFeature const &) = delete;
    OceanMonumentFeature(class OceanMonumentFeature const &) = delete;
    OceanMonumentFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanMonumentFeature();
    /**
     * @hash   1119837440
     * @vftbl  1
     * @symbol  ?shouldAddHardcodedSpawnAreas\@OceanMonumentFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @hash   -1758369434
     * @vftbl  2
     * @symbol  ?shouldPostProcessMobs\@OceanMonumentFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @hash   -1922511434
     * @vftbl  3
     * @symbol  ?getNearestGeneratedFeature\@OceanMonumentFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   -1483514489
     * @vftbl  4
     * @symbol  ?initMobSpawnTypes\@OceanMonumentFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @hash   -2058895721
     * @vftbl  5
     * @symbol  ?isFeatureChunk\@OceanMonumentFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   -444592582
     * @vftbl  6
     * @symbol  ?createStructureStart\@OceanMonumentFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   1504969576
     * @symbol  ??0OceanMonumentFeature\@\@QEAA\@I\@Z
     */
    MCAPI OceanMonumentFeature(unsigned int);

};