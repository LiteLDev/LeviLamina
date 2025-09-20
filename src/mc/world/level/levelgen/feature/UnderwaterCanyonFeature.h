#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CanyonFeature.h"

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

class UnderwaterCanyonFeature : public ::CanyonFeature {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _isDiggable(::BlockType const& block) const /*override*/;

    // vIndex: 0
    virtual bool _carve(
        ::BlockVolume&       blocks,
        ::BiomeSource const& localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
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
        ::gsl::span<float const> widthRandomization,
        ::WorldGenContext const&
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isDiggable(::BlockType const& block) const;

    MCNAPI bool $_carve(
        ::BlockVolume&       blocks,
        ::BiomeSource const& localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
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
        ::gsl::span<float const> widthRandomization,
        ::WorldGenContext const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
