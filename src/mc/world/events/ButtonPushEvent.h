#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSourceHandle;
class WeakEntityRef;
// clang-format on

struct ButtonPushEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle>> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                       mButtonBlockPos;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                        mSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ButtonPushEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
