#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct SigninError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk97827c;
    ::ll::UntypedStorage<1, 1>  mUnk776b09;
    ::ll::UntypedStorage<8, 24> mUnk4615f3;
    // NOLINTEND

public:
    // prevent constructor by default
    SigninError& operator=(SigninError const&);
    SigninError(SigninError const&);
    SigninError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~SigninError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace WebServices::EduSignin
