#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class TwistingVinesClusterFeature : public ::Feature {
public:
    // prevent constructor by default
    TwistingVinesClusterFeature& operator=(TwistingVinesClusterFeature const&);
    TwistingVinesClusterFeature(TwistingVinesClusterFeature const&);
    TwistingVinesClusterFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~TwistingVinesClusterFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeVineString(
        ::BlockSource&    region,
        ::Random&         random,
        ::BlockPos const& vinePos,
        int               vineHeight,
        int               minAge,
        int               maxAge
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
