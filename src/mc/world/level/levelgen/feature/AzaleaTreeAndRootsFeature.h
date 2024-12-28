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

class AzaleaTreeAndRootsFeature : public ::Feature {
public:
    // prevent constructor by default
    AzaleaTreeAndRootsFeature& operator=(AzaleaTreeAndRootsFeature const&);
    AzaleaTreeAndRootsFeature(AzaleaTreeAndRootsFeature const&);
    AzaleaTreeAndRootsFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~AzaleaTreeAndRootsFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isLushGroundReplaceable(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool
    _tryPlaceAzaleaTree(::BlockSource& region, ::BlockPos const& pos, ::Random& random, uint waterDepth) const;
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
