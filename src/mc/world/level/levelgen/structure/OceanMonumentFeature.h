#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class OceanMonumentFeature : public ::StructureFeature {

public:
    // prevent constructor by default
    OceanMonumentFeature& operator=(OceanMonumentFeature const&) = delete;
    OceanMonumentFeature(OceanMonumentFeature const&)            = delete;
    OceanMonumentFeature()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?shouldAddHardcodedSpawnAreas\@OceanMonumentFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?shouldPostProcessMobs\@OceanMonumentFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const; // NOLINT
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
    ); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?initMobSpawnTypes\@OceanMonumentFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@OceanMonumentFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@OceanMonumentFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&); // NOLINT
    /**
     * @symbol ??0OceanMonumentFeature\@\@QEAA\@I\@Z
     */
    MCAPI OceanMonumentFeature(unsigned int); // NOLINT
};
