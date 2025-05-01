#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class EndPortalShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke4c8d8;
    ::ll::UntypedStorage<4, 4>  mUnk975a30;
    ::ll::UntypedStorage<4, 4>  mUnk4250e9;
    ::ll::UntypedStorage<4, 4>  mUnkd6a933;
    ::ll::UntypedStorage<4, 12> mUnk39cdb1;
    ::ll::UntypedStorage<4, 12> mUnkada50f;
    ::ll::UntypedStorage<4, 4>  mUnkbf3ee9;
    ::ll::UntypedStorage<8, 24> mUnk7a0811;
    // NOLINTEND

public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&);
    EndPortalShape(EndPortalShape const&);
    EndPortalShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EndPortalShape(::BlockSource& region, ::BlockPos pos);

    MCNAPI int getDistanceUntilEdge(::BlockPos const& pos, int direction, int facing);

    MCNAPI bool isValid(::BlockSource& region);

    MCNAPI ~EndPortalShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
