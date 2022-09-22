/**
 * @file  RuinedPortalFeature.hpp
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
 * @brief MC class RuinedPortalFeature.
 *
 */
class RuinedPortalFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALFEATURE
public:
    class RuinedPortalFeature& operator=(class RuinedPortalFeature const &) = delete;
    RuinedPortalFeature(class RuinedPortalFeature const &) = delete;
    RuinedPortalFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RuinedPortalFeature();
    /**
     * @hash   -1000874236
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@RuinedPortalFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   405504110
     * @vftbl  5
     * @symbol ?isFeatureChunk@RuinedPortalFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   1446944268
     * @vftbl  6
     * @symbol ?createStructureStart@RuinedPortalFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   1157448027
     * @symbol ??0RuinedPortalFeature@@QEAA@I_N@Z
     */
    MCAPI RuinedPortalFeature(unsigned int, bool);

};