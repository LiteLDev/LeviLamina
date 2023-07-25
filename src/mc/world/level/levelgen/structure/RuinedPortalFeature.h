#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class RuinedPortalFeature : public ::StructureFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALFEATURE
public:
    RuinedPortalFeature& operator=(RuinedPortalFeature const&) = delete;
    RuinedPortalFeature(RuinedPortalFeature const&)            = delete;
    RuinedPortalFeature()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol
     * ?getNearestGeneratedFeature\@RuinedPortalFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
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
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@RuinedPortalFeature\@\@MEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&);
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@RuinedPortalFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /**
     * @symbol ??0RuinedPortalFeature\@\@QEAA\@I_N\@Z
     */
    MCAPI RuinedPortalFeature(unsigned int, bool);
};
