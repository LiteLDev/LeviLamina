#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
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
    // prevent constructor by default
    CanyonFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        pos,
        ::ChunkPos const&                                startPos,
        ::Vec3 const&                                    originalStartPos,
        ::Vec3 const&                                    x0,
        int                                              x1,
        int                                              y0,
        int                                              y1,
        int                                              z0,
        int                                              z1,
        int                                              rad,
        float                                            yRad,
        float                                            widthRandomization,
        ::gsl::span<float const>                         context,
        ::WorldGenContext const&                         biomeRegistry,
        ::BiomeRegistry const&
    ) const;

    virtual bool _isDiggable(::BlockType const& block) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CanyonFeature(short seaLevel);

    MCAPI void _addFeature(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::ChunkPos const&                                pos,
        ::Random&                                        random,
        int                                              x,
        int                                              z,
        ::WorldGenContext const&                         context,
        ::BiomeRegistry const&                           biomeRegistry
    );

    MCAPI void _addTunnel(
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
        ::WorldGenContext const&                         context,
        ::BiomeRegistry const&                           biomeRegistry
    ) const;

    MCAPI bool _detectWater(::BlockVolume& blocks, int x0, int x1, int y0, int y1, int z0, int z1) const;

    MCAPI void apply(
        ::BlockVolume&                                   blocks,
        ::ChunkPos const&                                pos,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        random,
        uint                                             levelSeed,
        ::WorldGenContext const&                         context,
        ::BiomeRegistry const&                           biomeRegistry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(short seaLevel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        pos,
        ::ChunkPos const&                                startPos,
        ::Vec3 const&                                    originalStartPos,
        ::Vec3 const&                                    x0,
        int                                              x1,
        int                                              y0,
        int                                              y1,
        int                                              z0,
        int                                              z1,
        int                                              rad,
        float                                            yRad,
        float                                            widthRandomization,
        ::gsl::span<float const>                         context,
        ::WorldGenContext const&                         biomeRegistry,
        ::BiomeRegistry const&
    ) const;

    MCAPI bool $_isDiggable(::BlockType const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
