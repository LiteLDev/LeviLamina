#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class GenericStatus : int {
    Success             = 0,
    NotLoggedIn         = 1,
    Forbidden           = 2,
    Fail                = 3,
    BadRequest          = 4,
    Unavailable         = 5,
    UnknownServiceError = 6,
    UserNotAllowed      = 7,
    RateLimit           = 8,
};

}
