#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CanyonFeature.h"

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

class UnderwaterCanyonFeature : public ::CanyonFeature {
public:
    // prevent constructor by default
    UnderwaterCanyonFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isDiggable(::BlockType const& block) const /*override*/;

    virtual bool _carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& random,
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
        ::gsl::span<float const>                         biomeRegistry,
        ::WorldGenContext const&,
        ::BiomeRegistry const&
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UnderwaterCanyonFeature(short seaLevel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(short seaLevel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isDiggable(::BlockType const& block) const;

    MCAPI bool $_carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& random,
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
        ::gsl::span<float const>                         biomeRegistry,
        ::WorldGenContext const&,
        ::BiomeRegistry const&
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
