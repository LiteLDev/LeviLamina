/**
 * @file  EndCityFeature.hpp
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
 * @brief MC class EndCityFeature.
 *
 */
class EndCityFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYFEATURE
public:
    class EndCityFeature& operator=(class EndCityFeature const &) = delete;
    EndCityFeature(class EndCityFeature const &) = delete;
    EndCityFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EndCityFeature();
    /**
     * @hash   -1726113337
     * @vftbl  2
     * @symbol  ?shouldPostProcessMobs\@EndCityFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @hash   1281477415
     * @vftbl  3
     * @symbol  ?getNearestGeneratedFeature\@EndCityFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   1279674401
     * @vftbl  5
     * @symbol  ?isFeatureChunk\@EndCityFeature\@\@MEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1476085833
     * @vftbl  6
     * @symbol  ?createStructureStart\@EndCityFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   1671976253
     * @symbol  ??0EndCityFeature\@\@QEAA\@AEAVDimension\@\@AEAI\@Z
     */
    MCAPI EndCityFeature(class Dimension &, unsigned int &);

};