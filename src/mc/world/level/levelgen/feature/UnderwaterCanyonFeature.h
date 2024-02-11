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
    // vIndex: 0, symbol: __gen_??1UnderwaterCanyonFeature@@UEAA@XZ
    virtual ~UnderwaterCanyonFeature() = default;

    // vIndex: 1, symbol:
    // ?carve@UnderwaterCanyonFeature@@MEBA_NAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4HHHHHHMMV?$span@$$CBM$0?0@gsl@@AEBUWorldGenContext@@@Z
    virtual bool carve(
        class BlockVolume&            blocks,
        class BiomeSource const&      localBiomeSource,
        class Random&                 random,
        class ChunkPos const&         pos,
        class Vec3 const&             startPos,
        class Vec3 const&             originalStartPos,
        int                           x0,
        int                           x1,
        int                           y0,
        int                           y1,
        int                           z0,
        int                           z1,
        float                         rad,
        float                         yRad,
        gsl::span<float const>        rs,
        struct WorldGenContext const& context
    ) const;

    // symbol: ??0UnderwaterCanyonFeature@@QEAA@F@Z
    MCAPI explicit UnderwaterCanyonFeature(short seaLevel);

    // symbol: ?isDiggable@UnderwaterCanyonFeature@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDiggable(class Block const& block);

    // NOLINTEND
};
