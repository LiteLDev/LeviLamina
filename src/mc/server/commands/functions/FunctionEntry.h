#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#include "mc/server/commands/functions/FunctionState.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

class FunctionEntry : public ::IFunctionEntry {
public:
    // prevent constructor by default
    FunctionEntry& operator=(FunctionEntry const&);
    FunctionEntry(FunctionEntry const&);
    FunctionEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FunctionEntry() = default;

    // vIndex: 1
    virtual void
    execute(class FunctionManager& functionManager, class CommandOrigin const& origin, ::FunctionQueueOrder order);

    MCAPI ::FunctionState getErrorState() const;

    // NOLINTEND
};
