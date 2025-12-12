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
    ::ll::UntypedStorage<8, 8> mUnk6e424d;
    ::ll::UntypedStorage<8, 8> mUnk713ba3;
    ::ll::UntypedStorage<8, 8> mUnkd7a0a0;
    ::ll::UntypedStorage<8, 8> mUnk785d56;
    ::ll::UntypedStorage<8, 8> mUnk6ef3df;
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
    MCNAPI void _generateIcebergBlock(
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
