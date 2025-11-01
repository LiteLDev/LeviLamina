#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
// clang-format on

class EndPortalShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                mSource;
    ::ll::TypedStorage<4, 4, int>                                           mRightDir;
    ::ll::TypedStorage<4, 4, int>                                           mLeftDir;
    ::ll::TypedStorage<4, 4, int>                                           mDepthDir;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                   mBottomLeft;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                   mOrigin;
    ::ll::TypedStorage<4, 4, int>                                           mBlockDirection;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::Block const*>>> mPortalPattern;
    // NOLINTEND

public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&);
    EndPortalShape(EndPortalShape const&);
    EndPortalShape();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EndPortalShape(::BlockSource& region, ::BlockPos pos);

    MCAPI int getDistanceUntilEdge(::BlockPos const& pos, int direction, int facing);

    MCAPI bool isValid(::BlockSource& region);

    MCAPI ~EndPortalShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
