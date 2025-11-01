#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ADPopupButtonAction {
public:
    // ADPopupButtonAction inner types define
    enum class Type : int {
        Link = 0,
        SignIn = 1,
        Dismiss = 2,
        RetrySignIn = 3,
        AgeVerification = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkded87f;
    ::ll::UntypedStorage<4, 4> mUnk4072d7;
    ::ll::UntypedStorage<8, 32> mUnkf4c01c;
    ::ll::UntypedStorage<8, 32> mUnk1e5411;
    // NOLINTEND

public:
    // prevent constructor by default
    ADPopupButtonAction& operator=(ADPopupButtonAction const&);
    ADPopupButtonAction(ADPopupButtonAction const&);
    ADPopupButtonAction();

};
