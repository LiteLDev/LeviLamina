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
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFunctionEntry() = default;

    virtual void execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
