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
    // vIndex: 0
    virtual ~CanyonFeature();

    // vIndex: 1
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

    // vIndex: 2
    virtual void addFeature(
        class BlockVolume&                                    blocks,
        class BiomeSource const&                              localBiomeSource,
        struct CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        class ChunkPos const&                                 pos,
        class Random&                                         random,
        int                                                   x,
        int                                                   z,
        struct WorldGenContext const&                         context
    );

    MCAPI explicit CanyonFeature(short seaLevel);

    MCAPI void apply(
        class BlockVolume&                                    blocks,
        class ChunkPos const&                                 pos,
        class BiomeSource const&                              biomeSource,
        struct CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        class Random&                                         random,
        uint                                                  levelSeed,
        struct WorldGenContext const&                         context
    );

    MCAPI static bool isDiggable(class Block const& block, class Block const& above);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(short seaLevel);

    MCAPI void dtor$();

    MCAPI void addFeature$(
        class BlockVolume&                                    blocks,
        class BiomeSource const&                              localBiomeSource,
        struct CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        class ChunkPos const&                                 pos,
        class Random&                                         random,
        int                                                   x,
        int                                                   z,
        struct WorldGenContext const&                         context
    );

    MCAPI bool carve$(
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

    // NOLINTEND
};
