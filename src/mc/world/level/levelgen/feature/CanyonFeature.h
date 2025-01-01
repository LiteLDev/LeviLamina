#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class Block;
class BlockVolume;
class ChunkPos;
class Random;
class Vec3;
struct WorldGenContext;
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class CanyonFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short const> mSeaLevel;
    ::ll::TypedStorage<1, 1, bool>        mAllowMegaRavines;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CanyonFeature();

    // vIndex: 1
    virtual bool carve(
        ::BlockVolume&           blocks,
        ::BiomeSource const&     localBiomeSource,
        ::Random&                random,
        ::ChunkPos const&        pos,
        ::Vec3 const&            startPos,
        ::Vec3 const&            originalStartPos,
        int                      x0,
        int                      x1,
        int                      y0,
        int                      y1,
        int                      z0,
        int                      z1,
        float                    rad,
        float                    yRad,
        ::gsl::span<float const> rs,
        ::WorldGenContext const& context
    ) const;

    // vIndex: 2
    virtual void addFeature(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::ChunkPos const&                                pos,
        ::Random&                                        random,
        int                                              x,
        int                                              z,
        ::WorldGenContext const&                         context
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CanyonFeature(short seaLevel);

    MCAPI void addTunnel(
        ::BlockVolume&           blocks,
        ::BiomeSource const&     localBiomeSource,
        ::Random&                _random,
        ::ChunkPos const&        pos,
        ::Vec3 const&            startPos,
        ::Vec3 const&            originalStartPos,
        float                    thickness,
        float                    yRot,
        float                    xRot,
        int                      step,
        int                      dist,
        float                    yScale,
        ::WorldGenContext const& context
    ) const;

    MCAPI void apply(
        ::BlockVolume&                                   blocks,
        ::ChunkPos const&                                pos,
        ::BiomeSource const&                             biomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        random,
        uint                                             levelSeed,
        ::WorldGenContext const&                         context
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDiggable(::Block const& block, ::Block const& above);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(short seaLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $carve(
        ::BlockVolume&           blocks,
        ::BiomeSource const&     localBiomeSource,
        ::Random&                random,
        ::ChunkPos const&        pos,
        ::Vec3 const&            startPos,
        ::Vec3 const&            originalStartPos,
        int                      x0,
        int                      x1,
        int                      y0,
        int                      y1,
        int                      z0,
        int                      z1,
        float                    rad,
        float                    yRad,
        ::gsl::span<float const> rs,
        ::WorldGenContext const& context
    ) const;

    MCAPI void $addFeature(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::ChunkPos const&                                pos,
        ::Random&                                        random,
        int                                              x,
        int                                              z,
        ::WorldGenContext const&                         context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
