#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class CanyonFeature {
public:
    // prevent constructor by default
    CanyonFeature& operator=(CanyonFeature const&);
    CanyonFeature(CanyonFeature const&);
    CanyonFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CanyonFeature@@UEAA@XZ
    virtual ~CanyonFeature();

    // vIndex: 1, symbol:
    // ?carve@CanyonFeature@@MEBA_NAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4HHHHHHMMV?$span@$$CBM$0?0@gsl@@AEBUWorldGenContext@@@Z
    virtual bool
    carve(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const>, struct WorldGenContext const&)
        const;

    // vIndex: 2, symbol:
    // ?addFeature@CanyonFeature@@MEAAXAEAVBlockVolume@@AEBVBiomeSource@@AEBUCanyonConfiguration@CanyonFeatureUtils@@AEBVChunkPos@@AEAVRandom@@HHAEBUWorldGenContext@@@Z
    virtual void
    addFeature(class BlockVolume&, class BiomeSource const&, struct CanyonFeatureUtils::CanyonConfiguration const&, class ChunkPos const&, class Random&, int, int, struct WorldGenContext const&);

    // symbol: ??0CanyonFeature@@QEAA@F@Z
    MCAPI explicit CanyonFeature(short);

    // symbol:
    // ?apply@CanyonFeature@@QEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVBiomeSource@@AEBUCanyonConfiguration@CanyonFeatureUtils@@AEAVRandom@@IAEBUWorldGenContext@@@Z
    MCAPI void
    apply(class BlockVolume&, class ChunkPos const&, class BiomeSource const&, struct CanyonFeatureUtils::CanyonConfiguration const&, class Random&, uint, struct WorldGenContext const&);

    // symbol: ?isDiggable@CanyonFeature@@SA_NAEBVBlock@@0@Z
    MCAPI static bool isDiggable(class Block const&, class Block const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?addTunnel@CanyonFeature@@IEBAXAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4MMMHHMAEBUWorldGenContext@@@Z
    MCAPI void
    addTunnel(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, float, float, float, int, int, float, struct WorldGenContext const&)
        const;

    // NOLINTEND
};
