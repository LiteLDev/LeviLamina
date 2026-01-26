#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct SigninResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk1e58b9;
    ::ll::UntypedStorage<8, 200> mUnk3b364a;
    ::ll::UntypedStorage<8, 40>  mUnk4622a7;
    ::ll::UntypedStorage<8, 384> mUnk2d95bd;
    ::ll::UntypedStorage<8, 552> mUnk9b7949;
    ::ll::UntypedStorage<8, 40>  mUnkd2f5ab;
    ::ll::UntypedStorage<4, 8>   mUnk7bd288;
    // NOLINTEND

public:
    // prevent constructor by default
    SigninResponse& operator=(SigninResponse const&);
    SigninResponse(SigninResponse const&);
    SigninResponse();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::WebServices::EduSignin::SigninResponse&&);

    MCNAPI_C void* $ctor(::WebServices::EduSignin::SigninResponse const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace WebServices::EduSignin
