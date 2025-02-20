#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ErrorPathStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka29b8e;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorPathStack& operator=(ErrorPathStack const&);
    ErrorPathStack(ErrorPathStack const&);
    ErrorPathStack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ErrorPathStack();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
