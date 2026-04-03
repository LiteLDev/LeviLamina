#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6518e2;
    ::ll::UntypedStorage<4, 8>  mUnkf663fa;
    ::ll::UntypedStorage<4, 8>  mUnk94f526;
    ::ll::UntypedStorage<8, 64> mUnk68889d;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthError& operator=(AuthError const&);
    AuthError(AuthError const&);
    AuthError();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Identity
