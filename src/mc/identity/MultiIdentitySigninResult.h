#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct MultiIdentitySigninResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6daf02;
    ::ll::UntypedStorage<1, 1>  mUnkde0209;
    ::ll::UntypedStorage<8, 32> mUnk8a0493;
    ::ll::UntypedStorage<8, 8>  mUnk33f7d4;
    ::ll::UntypedStorage<8, 32> mUnk796a00;
    ::ll::UntypedStorage<8, 32> mUnkc9bee9;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    MultiIdentitySigninResult& operator=(MultiIdentitySigninResult const&);
    MultiIdentitySigninResult(MultiIdentitySigninResult const&);
    MultiIdentitySigninResult();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    MultiIdentitySigninResult& operator=(MultiIdentitySigninResult const&);
    MultiIdentitySigninResult();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI MultiIdentitySigninResult(::Social::MultiIdentitySigninResult const&);

    MCNAPI ~MultiIdentitySigninResult();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::MultiIdentitySigninResult const&);
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
