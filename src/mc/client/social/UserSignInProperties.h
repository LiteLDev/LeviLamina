#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/IdentityType.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct MultiIdentitySigninResult; }
// clang-format on

namespace Social {

struct UserSignInProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk861945;
    ::ll::UntypedStorage<1, 1>  mUnk111806;
    ::ll::UntypedStorage<4, 4>  mUnk797a9b;
    ::ll::UntypedStorage<8, 32> mUnk931d74;
    ::ll::UntypedStorage<8, 64> mUnk7c09ae;
    ::ll::UntypedStorage<8, 64> mUnk777212;
    // NOLINTEND

public:
    // prevent constructor by default
    UserSignInProperties& operator=(UserSignInProperties const&);
    UserSignInProperties(UserSignInProperties const&);
    UserSignInProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C UserSignInProperties(
        ::Social::IdentityType                                     identitySigningIn,
        bool                                                       allowUI,
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback,
        ::std::function<void(::std::string, ::std::string)>        displayDelegate
    );

    MCNAPI_C ~UserSignInProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Social::IdentityType                                     identitySigningIn,
        bool                                                       allowUI,
        ::Social::IdentitySignInTrigger                            signInTrigger,
        ::std::string const&                                       signInSource,
        ::std::function<void(::Social::MultiIdentitySigninResult)> callback,
        ::std::function<void(::std::string, ::std::string)>        displayDelegate
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
