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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IcebergFeature();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
