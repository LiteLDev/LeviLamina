#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionRunResult {

public:
    // prevent constructor by default
    IGameTestFunctionRunResult& operator=(IGameTestFunctionRunResult const&) = delete;
    IGameTestFunctionRunResult(IGameTestFunctionRunResult const&)            = delete;
    IGameTestFunctionRunResult()                                             = delete;
};

}; // namespace gametest
