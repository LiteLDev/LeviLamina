#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionContext {

public:
    // prevent constructor by default
    IGameTestFunctionContext& operator=(IGameTestFunctionContext const&) = delete;
    IGameTestFunctionContext(IGameTestFunctionContext const&)            = delete;
    IGameTestFunctionContext()                                           = delete;
};

}; // namespace gametest
