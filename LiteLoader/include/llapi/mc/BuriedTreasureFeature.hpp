/**
 * @file  BuriedTreasureFeature.hpp
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
 * @brief MC class BuriedTreasureFeature.
 *
 */
class BuriedTreasureFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASUREFEATURE
public:
    class BuriedTreasureFeature& operator=(class BuriedTreasureFeature const &) = delete;
    BuriedTreasureFeature(class BuriedTreasureFeature const &) = delete;
    BuriedTreasureFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BuriedTreasureFeature();
    /**
     * @hash   -1897436167
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@BuriedTreasureFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   -710017021
     * @vftbl  5
     * @symbol ?isFeatureChunk@BuriedTreasureFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   -1645866329
     * @vftbl  6
     * @symbol ?createStructureStart@BuriedTreasureFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   1969787051
     * @symbol ??0BuriedTreasureFeature@@QEAA@I@Z
     */
    MCAPI BuriedTreasureFeature(unsigned int);

};