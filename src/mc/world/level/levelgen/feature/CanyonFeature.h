#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class CanyonFeature {
public:
    short mSeaLevel;         // this+0x8
    bool  mAllowMegaRavines; // this+0xA

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

    // vIndex: 2, symbol:
    // ?addFeature@CanyonFeature@@MEAAXAEAVBlockVolume@@AEBVBiomeSource@@AEBUCanyonConfiguration@CanyonFeatureUtils@@AEBVChunkPos@@AEAVRandom@@HHAEBUWorldGenContext@@@Z
    virtual void addFeature(
        class BlockVolume&       blocks,
        class BiomeSource const& localBiomeSource,
        struct CanyonFeatureUtils::CanyonConfiguration const&,
        class ChunkPos const&         pos,
        class Random&                 random,
        int                           x,
        int                           z,
        struct WorldGenContext const& context
    );

    // symbol: ??0CanyonFeature@@QEAA@F@Z
    MCAPI explicit CanyonFeature(short seaLevel);

    // symbol:
    // ?apply@CanyonFeature@@QEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVBiomeSource@@AEBUCanyonConfiguration@CanyonFeatureUtils@@AEAVRandom@@IAEBUWorldGenContext@@@Z
    MCAPI void apply(
        class BlockVolume&       blocks,
        class ChunkPos const&    pos,
        class BiomeSource const& biomeSource,
        struct CanyonFeatureUtils::CanyonConfiguration const&,
        class Random&                 random,
        uint                          levelSeed,
        struct WorldGenContext const& context
    );

    // symbol: ?isDiggable@CanyonFeature@@SA_NAEBVBlock@@0@Z
    MCAPI static bool isDiggable(class Block const& block, class Block const& above);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?addTunnel@CanyonFeature@@IEBAXAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4MMMHHMAEBUWorldGenContext@@@Z
    MCAPI void addTunnel(
        class BlockVolume&            blocks,
        class BiomeSource const&      localBiomeSource,
        class Random&                 _random,
        class ChunkPos const&         pos,
        class Vec3 const&             startPos,
        class Vec3 const&             originalStartPos,
        float                         thickness,
        float                         yRot,
        float                         xRot,
        int                           step,
        int                           dist,
        float                         yScale,
        struct WorldGenContext const& context
    ) const;

    // NOLINTEND
};
