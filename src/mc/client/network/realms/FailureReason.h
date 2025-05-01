#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class FailureReason : int {
    None                    = 0,
    Generic                 = 1,
    TooManyRealms           = 2,
    InvalidRealmName        = 3,
    InvalidRealmDescription = 4,
    InvalidResponse         = 5,
    InvalidWorldName        = 6,
    Forbidden               = 7,
};

}
