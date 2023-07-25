#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class OceanMonumentFeature : public ::StructureFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTFEATURE
public:
    OceanMonumentFeature& operator=(OceanMonumentFeature const&) = delete;
    OceanMonumentFeature(OceanMonumentFeature const&)            = delete;
    OceanMonumentFeature()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?shouldAddHardcodedSpawnAreas\@OceanMonumentFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @vftbl 2
     * @symbol ?shouldPostProcessMobs\@OceanMonumentFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @vftbl 3
     * @symbol
     * ?getNearestGeneratedFeature\@OceanMonumentFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(
        class Dimension&,
        class BiomeSource const&,
        class BlockPos const&,
        class BlockPos&,
        class IPreliminarySurfaceProvider const&,
        bool
    );
    /**
     * @vftbl 4
     * @symbol ?initMobSpawnTypes\@OceanMonumentFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&);
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@OceanMonumentFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&);
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@OceanMonumentFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /**
     * @symbol ??0OceanMonumentFeature\@\@QEAA\@I\@Z
     */
    MCAPI OceanMonumentFeature(unsigned int);
};
