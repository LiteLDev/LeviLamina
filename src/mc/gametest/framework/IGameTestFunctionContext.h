#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionContext {
public:
    // prevent constructor by default
    IGameTestFunctionContext& operator=(IGameTestFunctionContext const&);
    IGameTestFunctionContext(IGameTestFunctionContext const&);
    IGameTestFunctionContext();
};

}; // namespace gametest
