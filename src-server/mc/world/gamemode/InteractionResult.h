#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractionResult {
public:
    // InteractionResult inner types define
    enum class Result : int {
        Fail    = 0,
        Success = 1,
        Swing   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    Result mResult;
    // NOLINTEND
};
