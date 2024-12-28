#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct AuthToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkef5aa9;
    ::ll::UntypedStorage<8, 32> mUnk321eec;
    ::ll::UntypedStorage<8, 8>  mUnkde788c;
    ::ll::UntypedStorage<1, 1>  mUnk467273;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthToken& operator=(AuthToken const&);
    AuthToken(AuthToken const&);
    AuthToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AuthToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
