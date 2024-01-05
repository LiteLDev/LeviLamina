#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FunctionQueueOrder.h"
#include "mc/enums/FunctionState.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

class FunctionEntry : public ::IFunctionEntry {
public:
    // prevent constructor by default
    FunctionEntry& operator=(FunctionEntry const&);
    FunctionEntry(FunctionEntry const&);
    FunctionEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FunctionEntry@@UEAA@XZ
    virtual ~FunctionEntry() = default;

    // vIndex: 1, symbol: ?execute@FunctionEntry@@UEAAXAEAVFunctionManager@@AEBVCommandOrigin@@W4FunctionQueueOrder@@@Z
    virtual void
    execute(class FunctionManager& functionManager, class CommandOrigin const& origin, ::FunctionQueueOrder order);

    // symbol: ?getErrorState@FunctionEntry@@QEBA?AW4FunctionState@@XZ
    MCAPI ::FunctionState getErrorState() const;

    // NOLINTEND
};
