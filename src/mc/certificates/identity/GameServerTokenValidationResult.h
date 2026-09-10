#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GameServerTokenValidationResult : int {
    Success       = 0,
    Expired       = 1,
    BadSignature  = 2,
    WrongAudience = 3,
};
