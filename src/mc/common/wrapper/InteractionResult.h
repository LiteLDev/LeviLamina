#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractionResult {
public:
    enum class Result : int {
        Fail    = 0x0,
        Success = 0x1,
        Swing   = 0x2,
    };

    Result mResult;
};
