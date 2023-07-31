#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class VillageStart : public ::StructureStart {

public:
    // prevent constructor by default
    VillageStart& operator=(VillageStart const&) = delete;
    VillageStart(VillageStart const&)            = delete;
    VillageStart()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?isValid\@VillageStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol
     * ??0VillageStart\@\@QEAA\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@HHAEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI
    VillageStart(class Dimension&, class BiomeSource const&, class Random&, int, int, class IPreliminarySurfaceProvider const&);
    // NOLINTEND
};
