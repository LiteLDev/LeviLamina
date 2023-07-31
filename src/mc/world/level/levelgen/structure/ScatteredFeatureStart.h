#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockSource;
class BoundingBox;
class IPreliminarySurfaceProvider;
class Random;
// clang-format on

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {

public:
    // prevent constructor by default
    ScatteredFeatureStart& operator=(ScatteredFeatureStart const&) = delete;
    ScatteredFeatureStart(ScatteredFeatureStart const&)            = delete;
    ScatteredFeatureStart()                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};

}; // namespace RandomScatteredLargeFeatureDetails
