/**
 * @file  ShipwreckFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShipwreckFeature.
 *
 */
class ShipwreckFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKFEATURE
public:
    class ShipwreckFeature& operator=(class ShipwreckFeature const &) = delete;
    ShipwreckFeature(class ShipwreckFeature const &) = delete;
    ShipwreckFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShipwreckFeature();
    /**
     * @vftbl  3
     * @symbol  ?getNearestGeneratedFeature\@ShipwreckFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  5
     * @symbol  ?isFeatureChunk\@ShipwreckFeature\@\@MEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vftbl  6
     * @symbol  ?createStructureStart\@ShipwreckFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol  ??0ShipwreckFeature\@\@QEAA\@AEAVOceanMonumentFeature\@\@IAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI ShipwreckFeature(class OceanMonumentFeature &, unsigned int, class BaseGameVersion const &);
    /**
     * @symbol  ?isShipwreckBeached\@ShipwreckFeature\@\@SA_NPEBVBiome\@\@\@Z
     */
    MCAPI static bool isShipwreckBeached(class Biome const *);

};