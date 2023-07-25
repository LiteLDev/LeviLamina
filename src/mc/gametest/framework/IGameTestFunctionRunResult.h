#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionRunResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_IGAMETESTFUNCTIONRUNRESULT
public:
    IGameTestFunctionRunResult& operator=(IGameTestFunctionRunResult const&) = delete;
    IGameTestFunctionRunResult(IGameTestFunctionRunResult const&)            = delete;
    IGameTestFunctionRunResult()                                             = delete;
#endif

public:
};

}; // namespace gametest
