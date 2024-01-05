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
class StructureStart;
// clang-format on

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {
public:
    // prevent constructor by default
    ScatteredFeatureStart& operator=(ScatteredFeatureStart const&);
    ScatteredFeatureStart(ScatteredFeatureStart const&);
    ScatteredFeatureStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScatteredFeatureStart@RandomScatteredLargeFeatureDetails@@UEAA@XZ
    virtual ~ScatteredFeatureStart() = default;

    // symbol:
    // ??0ScatteredFeatureStart@RandomScatteredLargeFeatureDetails@@QEAA@AEBVBiomeSource@@FHHAEBVIPreliminarySurfaceProvider@@@Z
    MCAPI
    ScatteredFeatureStart(class BiomeSource const& source, short seaLevel, int chunkX, int chunkZ, class IPreliminarySurfaceProvider const&);

    // NOLINTEND
};

}; // namespace RandomScatteredLargeFeatureDetails
