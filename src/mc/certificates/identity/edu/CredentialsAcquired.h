#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredentialsAcquired {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke1a974;
    ::ll::UntypedStorage<8, 32> mUnkc23503;
    ::ll::UntypedStorage<8, 32> mUnkcef67c;
    ::ll::UntypedStorage<8, 32> mUnk31658b;
    ::ll::UntypedStorage<8, 32> mUnk5a4154;
    ::ll::UntypedStorage<1, 1>  mUnk7e4275;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CredentialsAcquired& operator=(CredentialsAcquired const&);
    CredentialsAcquired(CredentialsAcquired const&);
    CredentialsAcquired();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CredentialsAcquired& operator=(CredentialsAcquired const&);
    CredentialsAcquired();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CredentialsAcquired(::edu::auth::CredentialsAcquired const&);

    MCNAPI ~CredentialsAcquired();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::edu::auth::CredentialsAcquired const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace edu::auth
