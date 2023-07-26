#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {

public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&) = delete;
    ResultAny(ResultAny const&)            = delete;
    ResultAny()                            = delete;
};

}; // namespace Scripting
