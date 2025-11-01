#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncStateRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7d86af;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncStateRef& operator=(AsyncStateRef const&);
    AsyncStateRef(AsyncStateRef const&);
    AsyncStateRef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AsyncStateRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
