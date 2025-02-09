#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSourceHandle;
class Vec3;
class WeakEntityRef;
// clang-format on

struct TargetBlockHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                 mHitVector;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const>                        mSource;
    ::ll::TypedStorage<4, 4, int const>                                     mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int const>                                     mRedstonePower;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TargetBlockHitEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
