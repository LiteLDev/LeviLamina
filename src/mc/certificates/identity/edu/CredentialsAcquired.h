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

public:
    // prevent constructor by default
    CredentialsAcquired& operator=(CredentialsAcquired const&);
    CredentialsAcquired(CredentialsAcquired const&);
    CredentialsAcquired();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~CredentialsAcquired();
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
