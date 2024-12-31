#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class IGameTestFunctionContext {
public:
    // prevent constructor by default
    IGameTestFunctionContext& operator=(IGameTestFunctionContext const&);
    IGameTestFunctionContext(IGameTestFunctionContext const&);
    IGameTestFunctionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameTestFunctionContext() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
