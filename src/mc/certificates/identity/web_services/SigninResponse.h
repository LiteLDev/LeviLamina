#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct SigninResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk1e58b9;
    ::ll::UntypedStorage<8, 232> mUnk3b364a;
    ::ll::UntypedStorage<8, 40>  mUnk4622a7;
    ::ll::UntypedStorage<8, 408> mUnk2d95bd;
    ::ll::UntypedStorage<8, 552> mUnk9b7949;
    ::ll::UntypedStorage<8, 40>  mUnkd2f5ab;
    ::ll::UntypedStorage<4, 8>   mUnk7bd288;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SigninResponse& operator=(SigninResponse const&);
    SigninResponse(SigninResponse const&);
    SigninResponse();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SigninResponse& operator=(SigninResponse const&);
    SigninResponse();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SigninResponse(::WebServices::EduSignin::SigninResponse&&);

    MCNAPI SigninResponse(::WebServices::EduSignin::SigninResponse const&);

    MCNAPI ~SigninResponse();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::WebServices::EduSignin::SigninResponse&&);

    MCNAPI void* $ctor(::WebServices::EduSignin::SigninResponse const&);
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

} // namespace WebServices::EduSignin
