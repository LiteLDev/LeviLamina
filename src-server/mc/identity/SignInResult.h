#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class SignInResult : int {
    Unknown = -1,
    Success = 0,
    Failure = 1,
    UserActionRequired = 2,
    Canceled = 3,
    SandboxFailure = 4,
    InternetTimeout = 5,
    IncorrectAccount = 6,
    PlayerBanned = 7,
};

}
