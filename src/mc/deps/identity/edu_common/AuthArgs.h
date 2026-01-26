#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk8ee452;
    ::ll::UntypedStorage<8, 32> mUnk5640a8;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthArgs& operator=(AuthArgs const&);
    AuthArgs(AuthArgs const&);
    AuthArgs();

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
