#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class TrailRuinsFeature : public ::StructureFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILRUINSFEATURE
public:
    TrailRuinsFeature& operator=(TrailRuinsFeature const&) = delete;
    TrailRuinsFeature(TrailRuinsFeature const&)            = delete;
    TrailRuinsFeature()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@TrailRuinsFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&);
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@TrailRuinsFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /**
     * @symbol ??0TrailRuinsFeature\@\@QEAA\@IAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI TrailRuinsFeature(unsigned int, class BaseGameVersion const&);
};
