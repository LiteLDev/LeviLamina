#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSourceHandle;
class WeakEntityRef;
// clang-format on

struct LeverActionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle>> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                       mLeverBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                    mIsPowered;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                        mPlayerRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LeverActionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
