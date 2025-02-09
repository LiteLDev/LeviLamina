#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

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
    MCAPI ~ExecuteEventOnBlockRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
