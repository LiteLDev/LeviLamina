#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionRunResult {
public:
    // prevent constructor by default
    IGameTestFunctionRunResult& operator=(IGameTestFunctionRunResult const&);
    IGameTestFunctionRunResult(IGameTestFunctionRunResult const&);
    IGameTestFunctionRunResult();
};

}; // namespace gametest
