#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class FunctionManager;
// clang-format on

class IFunctionEntry {
public:
    // prevent constructor by default
    IFunctionEntry& operator=(IFunctionEntry const&);
    IFunctionEntry(IFunctionEntry const&);
    IFunctionEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFunctionEntry();

    // vIndex: 1
    virtual void execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
