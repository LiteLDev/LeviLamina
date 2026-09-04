#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb51945;
    ::ll::UntypedStorage<8, 32> mUnk8a202b;
    ::ll::UntypedStorage<8, 8>  mUnkde788c;
    ::ll::UntypedStorage<1, 1>  mUnk467273;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthToken& operator=(AuthToken const&);
    AuthToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AuthToken(::Identity::AuthToken const&);

    MCNAPI ~AuthToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Identity::AuthToken const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
