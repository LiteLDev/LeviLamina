#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSCATTEREDLARGEFEATUREDETAILS_SCATTEREDFEATURESTART
public:
    ScatteredFeatureStart& operator=(ScatteredFeatureStart const&) = delete;
    ScatteredFeatureStart(ScatteredFeatureStart const&)            = delete;
    ScatteredFeatureStart()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol
     * ??0ScatteredFeatureStart\@RandomScatteredLargeFeatureDetails\@\@QEAA\@AEBVBiomeSource\@\@FHHAEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI ScatteredFeatureStart(class BiomeSource const&, short, int, int, class IPreliminarySurfaceProvider const&);
};

}; // namespace RandomScatteredLargeFeatureDetails
