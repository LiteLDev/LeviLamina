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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~IcebergFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void carve(
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

    MCNAPI void generateIcebergBlock(
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
        int               elllipseC,
        ::Block const&    blockToPlace
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
