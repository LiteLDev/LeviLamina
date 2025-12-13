#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TemporaryItemCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk88eb70;
    ::ll::UntypedStorage<4, 4>   mUnk6469d7;
    // NOLINTEND

public:
    // prevent constructor by default
    TemporaryItemCounter& operator=(TemporaryItemCounter const&);
    TemporaryItemCounter(TemporaryItemCounter const&);
    TemporaryItemCounter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~TemporaryItemCounter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
