#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct SingleIdentitySignInResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk441039;
    ::ll::UntypedStorage<1, 1>  mUnk70bb45;
    ::ll::UntypedStorage<8, 32> mUnke4787b;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleIdentitySignInResult& operator=(SingleIdentitySignInResult const&);
    SingleIdentitySignInResult(SingleIdentitySignInResult const&);
    SingleIdentitySignInResult();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~SingleIdentitySignInResult();
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

} // namespace Social
