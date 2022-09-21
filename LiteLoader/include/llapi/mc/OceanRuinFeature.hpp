/**
 * @file  MC/OceanRuinFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanRuinFeature.
 *
 */
class OceanRuinFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANRUINFEATURE
public:
    class OceanRuinFeature& operator=(class OceanRuinFeature const &) = delete;
    OceanRuinFeature(class OceanRuinFeature const &) = delete;
    OceanRuinFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanRuinFeature();
    /**
     * @hash   532716407
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@OceanRuinFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   -2091844040
     * @vftbl  5
     * @symbol ?isFeatureChunk@OceanRuinFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1522541465
     * @vftbl  6
     * @symbol ?createStructureStart@OceanRuinFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   -1127872329
     * @symbol ??0OceanRuinFeature@@QEAA@AEAVOceanMonumentFeature@@IAEBVBaseGameVersion@@@Z
     */
    MCAPI OceanRuinFeature(class OceanMonumentFeature &, unsigned int, class BaseGameVersion const &);

};