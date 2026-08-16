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
    virtual ~IFunctionEntry();

    virtual void
    execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order) = 0;
    // NOLINTEND
};
