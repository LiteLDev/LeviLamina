#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractionResult {

public:
    enum class Result : int {
        Success = 0x1,
        Fail    = 0x2,
    };
    std::underlying_type_t<Result> mResult;

};
