#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class GenericStatus : int {
    Success = 0,
    NotLoggedIn = 1,
    Forbidden = 2,
    Banned = 3,
    Suspended = 4,
    Fail = 5,
    BadRequest = 6,
    Unavailable = 7,
    UnknownServiceError = 8,
    UserNotAllowed = 9,
    RateLimit = 10,
};

}
