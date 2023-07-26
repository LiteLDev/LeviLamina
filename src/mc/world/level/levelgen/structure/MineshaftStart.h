#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class MineshaftStart : public ::StructureStart {

public:
    // prevent constructor by default
    MineshaftStart& operator=(MineshaftStart const&) = delete;
    MineshaftStart(MineshaftStart const&)            = delete;
    MineshaftStart()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @symbol
     * ??0MineshaftStart\@\@QEAA\@AEBVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI
    MineshaftStart(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&); // NOLINT
};
