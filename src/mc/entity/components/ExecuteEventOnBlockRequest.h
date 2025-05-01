#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct ExecuteEventOnBlockRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPos;
    ::ll::TypedStorage<8, 32, ::std::string> mEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExecuteEventOnBlockRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
