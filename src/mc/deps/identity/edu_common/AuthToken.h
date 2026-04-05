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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AuthToken& operator=(AuthToken const&);
    AuthToken(AuthToken const&);
    AuthToken();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AuthToken(AuthToken const&);
    AuthToken();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Identity::AuthToken& operator=(::Identity::AuthToken&&);

    MCNAPI ::Identity::AuthToken& operator=(::Identity::AuthToken const&);
#endif

    MCNAPI ~AuthToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
