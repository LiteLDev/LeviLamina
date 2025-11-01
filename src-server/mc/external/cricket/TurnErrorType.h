#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class TurnErrorType : int {
    Forbidden = 403,
    AllocationMismatch = 437,
    WrongCredentials = 441,
    UnsupportedProtocol = 442,
};

}
