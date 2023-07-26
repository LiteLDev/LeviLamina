#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class NetherFortressFeature : public ::StructureFeature {

public:
    // prevent constructor by default
    NetherFortressFeature& operator=(NetherFortressFeature const&) = delete;
    NetherFortressFeature(NetherFortressFeature const&)            = delete;
    NetherFortressFeature()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?shouldAddHardcodedSpawnAreas\@NetherFortressFeature\@\@UEBA_NXZ
     */
    virtual bool shouldAddHardcodedSpawnAreas() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?initMobSpawnTypes\@NetherFortressFeature\@\@UEAAXAEAVHardcodedSpawnAreaRegistry\@\@\@Z
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@NetherFortressFeature\@\@MEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@NetherFortressFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&); // NOLINT
    /**
     * @symbol ??0NetherFortressFeature\@\@QEAA\@AEAIAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI NetherFortressFeature(unsigned int&, class BaseGameVersion const&); // NOLINT
};
