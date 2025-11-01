#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4b0467;
    // NOLINTEND

public:
    // prevent constructor by default
    CallbackToken& operator=(CallbackToken const&);
    CallbackToken(CallbackToken const&);
    CallbackToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void cancelCallback();

    MCNAPI void release();

    MCNAPI ~CallbackToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
