#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class UnderwaterCaveFeature : public ::CaveFeature {
public:
    // prevent constructor by default
    UnderwaterCaveFeature& operator=(UnderwaterCaveFeature const&);
    UnderwaterCaveFeature(UnderwaterCaveFeature const&);
    UnderwaterCaveFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnderwaterCaveFeature@@UEAA@XZ
    virtual ~UnderwaterCaveFeature() = default;

    // vIndex: 5, symbol:
    // ?carveEllipsoidVolume@UnderwaterCaveFeature@@MEBA_NAEAVIBlockWorldGenAPI@@AEBUCarverConfiguration@CaveFeatureUtils@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@AEBVBoundingBox@@MMAEBUCarvingParameters@4@@Z
    virtual bool
    carveEllipsoidVolume(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&)
        const;

    // symbol: ?isDiggable@UnderwaterCaveFeature@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDiggable(class Block const&);

    // NOLINTEND
};
