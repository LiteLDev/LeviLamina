#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockType;
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
    ::ll::TypedStorage<1, 1, bool>        mAllowMegaCanyons;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&,
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
        ::gsl::span<float const> widthRandomization,
        ::WorldGenContext const& context
    ) const;

    virtual bool _isDiggable(::BlockType const& block) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addFeature(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::ChunkPos const&                                pos,
        ::Random&                                        random,
        int                                              x,
        int                                              z,
        ::WorldGenContext const&                         context
    );

    MCNAPI void _addTunnel(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        random,
        ::ChunkPos const&                                pos,
        ::Vec3 const&                                    startPos,
        ::Vec3 const&                                    originalStartPos,
        float                                            thickness,
        float                                            yRot,
        float                                            xRot,
        int                                              step,
        int                                              dist,
        float                                            yScale,
        ::WorldGenContext const&                         context
    ) const;

    MCNAPI void apply(
        ::BlockVolume&                                   blocks,
        ::ChunkPos const&                                pos,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        random,
        uint                                             levelSeed,
        ::WorldGenContext const&                         context
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&,
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
        ::gsl::span<float const> widthRandomization,
        ::WorldGenContext const& context
    ) const;

    MCNAPI bool $_isDiggable(::BlockType const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
