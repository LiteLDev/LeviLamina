#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CanyonFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class Block;
class BlockVolume;
class ChunkPos;
class Random;
class Vec3;
struct WorldGenContext;
// clang-format on

class UnderwaterCanyonFeature : public ::CanyonFeature {
public:
    // prevent constructor by default
    UnderwaterCanyonFeature& operator=(UnderwaterCanyonFeature const&);
    UnderwaterCanyonFeature(UnderwaterCanyonFeature const&);
    UnderwaterCanyonFeature();

public:
    // virtual functions
    // NOLINTBEGIN
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
    ) const /*override*/;

    // vIndex: 0
    virtual ~UnderwaterCanyonFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UnderwaterCanyonFeature(short seaLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDiggable(::Block const& block);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
