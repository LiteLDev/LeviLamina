#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct PressurePlatePopEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mPressurePlateBlockPos;
    ::ll::TypedStorage<4, 4, int const>                                     mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int const>                                     mRedstonePower;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PressurePlatePopEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
