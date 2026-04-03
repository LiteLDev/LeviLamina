#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct SigninError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfc9f4c;
    ::ll::UntypedStorage<1, 1>  mUnk776b09;
    ::ll::UntypedStorage<8, 24> mUnk1c2076;
    // NOLINTEND

public:
    // prevent constructor by default
    SigninError& operator=(SigninError const&);
    SigninError(SigninError const&);
    SigninError();

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

} // namespace WebServices::EduSignin
