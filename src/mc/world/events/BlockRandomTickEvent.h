#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSourceHandle;
// clang-format on

struct BlockRandomTickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mBlockPos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockRandomTickEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
