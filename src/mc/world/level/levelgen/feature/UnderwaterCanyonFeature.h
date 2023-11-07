#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CanyonFeature.h"

// auto generated forward declare list
// clang-format off
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class UnderwaterCanyonFeature : public ::CanyonFeature {
public:
    // prevent constructor by default
    UnderwaterCanyonFeature& operator=(UnderwaterCanyonFeature const&);
    UnderwaterCanyonFeature(UnderwaterCanyonFeature const&);
    UnderwaterCanyonFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UnderwaterCanyonFeature@@UEAA@XZ
    virtual ~UnderwaterCanyonFeature();

    // vIndex: 1, symbol:
    // ?carve@UnderwaterCanyonFeature@@MEBA_NAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4HHHHHHMMV?$span@$$CBM$0?0@gsl@@AEBUWorldGenContext@@@Z
    virtual bool
    carve(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const>, struct WorldGenContext const&)
        const;

    // symbol: ??0UnderwaterCanyonFeature@@QEAA@F@Z
    MCAPI explicit UnderwaterCanyonFeature(short);

    // symbol: ?isDiggable@UnderwaterCanyonFeature@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDiggable(class Block const&);

    // NOLINTEND
};
