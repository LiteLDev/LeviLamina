/**
 * @file  MC/WoodlandMansionFeature.hpp
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
 * @brief MC class WoodlandMansionFeature.
 *
 */
class WoodlandMansionFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODLANDMANSIONFEATURE
public:
    class WoodlandMansionFeature& operator=(class WoodlandMansionFeature const &) = delete;
    WoodlandMansionFeature(class WoodlandMansionFeature const &) = delete;
    WoodlandMansionFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WoodlandMansionFeature();
    /**
     * @hash   1392596232
     * @vftbl  2
     * @symbol ?shouldPostProcessMobs@WoodlandMansionFeature@@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @hash   -947852808
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@WoodlandMansionFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   -252773710
     * @vftbl  5
     * @symbol ?isFeatureChunk@WoodlandMansionFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1201421128
     * @vftbl  6
     * @symbol ?createStructureStart@WoodlandMansionFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   1597617130
     * @symbol ??0WoodlandMansionFeature@@QEAA@I@Z
     */
    MCAPI WoodlandMansionFeature(unsigned int);

};