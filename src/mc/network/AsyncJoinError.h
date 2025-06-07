#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AsyncJoinError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk926a87;
    ::ll::UntypedStorage<8, 40> mUnk1eb7ea;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinError& operator=(AsyncJoinError const&);
    AsyncJoinError(AsyncJoinError const&);
    AsyncJoinError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AsyncJoinError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
