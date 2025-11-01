#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class StunErrorCode : int {
    TryAlternate = 300,
    BadRequest = 400,
    Unauthorized = 401,
    UnknownAttribute = 420,
    StaleNonce = 438,
    ServerError = 500,
    GlobalFailure = 600,
};

}
