#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_IGAMETESTFUNCTIONCONTEXT
public:
    IGameTestFunctionContext& operator=(IGameTestFunctionContext const&) = delete;
    IGameTestFunctionContext(IGameTestFunctionContext const&)            = delete;
    IGameTestFunctionContext()                                           = delete;
#endif

public:
};

}; // namespace gametest
