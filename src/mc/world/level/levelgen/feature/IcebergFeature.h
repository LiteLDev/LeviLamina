#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class IcebergFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mAirBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mWaterBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mSnowBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mPackedIceBlock;
    ::ll::TypedStorage<8, 8, ::Block const&> mBlueIceBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    IcebergFeature& operator=(IcebergFeature const&);
    IcebergFeature(IcebergFeature const&);
    IcebergFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    virtual ~IcebergFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _generateIcebergBlock(
        ::BlockSource&    region,
        ::Random&         random,
        ::BlockPos const& origin,
        int               height,
        int               xo,
        int               yOff,
        int               zo,
        int               radius,
        int               a,
        bool              snowOnTop,
        bool              isEllipse,
        float             shapeAngle,
        int               ellipseC,
        ::Block const&    blockToPlace
    ) const;

    MCAPI void carve(
        int               radius,
        int               yOff,
        ::BlockPos const& globalOrigin,
        ::BlockSource&    region,
        bool              underWater,
        float             angle,
        ::BlockPos const& localOrigin,
        int               ellipseA,
        int               ellipseC
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
