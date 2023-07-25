#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class MineshaftFeature : public ::StructureFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTFEATURE
public:
    MineshaftFeature& operator=(MineshaftFeature const&) = delete;
    MineshaftFeature(MineshaftFeature const&)            = delete;
    MineshaftFeature()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?shouldPostProcessMobs\@MineshaftFeature\@\@UEBA_NXZ
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@MineshaftFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&);
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@MineshaftFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
};
