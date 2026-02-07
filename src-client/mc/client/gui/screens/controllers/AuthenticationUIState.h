#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AuthenticationUIState : int {
    None            = 0,
    Welcome         = 1,
    DemoSignIn      = 2,
    SignInPrompt    = 3,
    SignInPromptIOS = 4,
    TrialPopup      = 5,
    GeneralPopup    = 6,
    Eula            = 7,
    Purchase        = 8,
    PackLoad        = 9,
    EduGraphSignin  = 10,
};
