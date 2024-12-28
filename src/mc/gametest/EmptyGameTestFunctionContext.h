#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionContext.h"

class EmptyGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // prevent constructor by default
    EmptyGameTestFunctionContext& operator=(EmptyGameTestFunctionContext const&);
    EmptyGameTestFunctionContext(EmptyGameTestFunctionContext const&);
    EmptyGameTestFunctionContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmptyGameTestFunctionContext() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
