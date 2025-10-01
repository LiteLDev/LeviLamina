#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class SmoothStoneSelector : public ::BlockSelector {
public:
    // SmoothStoneSelector inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // SmoothStoneSelector inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const*> mInfestedStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const*> mAirBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mCrackedStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const*> mMossyStoneBrick;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SmoothStoneSelector::LocalRegistry> mLocalRegistry;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Block const& next(::Random& random, int, int, int, bool isEdge) const /*override*/;

    // vIndex: 0
    virtual ~SmoothStoneSelector() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $next(::Random& random, int, int, int, bool isEdge) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
