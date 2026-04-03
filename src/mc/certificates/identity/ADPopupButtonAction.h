#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ADPopupButtonAction {
public:
    // ADPopupButtonAction inner types define
    enum class Type : int {
        Link            = 0,
        SignIn          = 1,
        Dismiss         = 2,
        RetrySignIn     = 3,
        AgeVerification = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkded87f;
    ::ll::UntypedStorage<4, 4>  mUnk4072d7;
    ::ll::UntypedStorage<8, 32> mUnkc85352;
    ::ll::UntypedStorage<8, 32> mUnk97a29c;
    // NOLINTEND

public:
    // prevent constructor by default
    ADPopupButtonAction& operator=(ADPopupButtonAction const&);
    ADPopupButtonAction(ADPopupButtonAction const&);
    ADPopupButtonAction();

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
