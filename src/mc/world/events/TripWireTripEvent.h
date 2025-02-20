#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSourceHandle;
class WeakEntityRef;
// clang-format on

struct TripWireTripEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mTripWireBlockPos;
    ::ll::TypedStorage<1, 1, bool const>                                    mIsPowered;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef> const>         mSources;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TripWireTripEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
