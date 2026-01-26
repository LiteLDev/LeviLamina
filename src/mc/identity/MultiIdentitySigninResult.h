#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct MultiIdentitySigninResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6daf02;
    ::ll::UntypedStorage<1, 1>  mUnkde0209;
    ::ll::UntypedStorage<8, 32> mUnk6839c0;
    ::ll::UntypedStorage<8, 8>  mUnk33f7d4;
    ::ll::UntypedStorage<8, 32> mUnke2144f;
    ::ll::UntypedStorage<8, 32> mUnk42f07b;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiIdentitySigninResult& operator=(MultiIdentitySigninResult const&);
    MultiIdentitySigninResult(MultiIdentitySigninResult const&);
    MultiIdentitySigninResult();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Social::MultiIdentitySigninResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
