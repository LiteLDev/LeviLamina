#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class FailureReason : int {
    None             = 0,
    Generic          = 1,
    TooManyRealms    = 2,
    InvalidRealmName = 3,
    InvalidResponse  = 4,
    InvalidWorldName = 5,
    Forbidden        = 6,
};

}
