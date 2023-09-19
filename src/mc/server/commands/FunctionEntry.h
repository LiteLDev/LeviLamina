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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@FunctionEntry@@UEAAXAEAVFunctionManager@@AEBVCommandOrigin@@W4FunctionQueueOrder@@@Z
    virtual void execute(class FunctionManager&, class CommandOrigin const&, ::FunctionQueueOrder);

    // symbol: ?getErrorState@FunctionEntry@@QEBA?AW4FunctionState@@XZ
    MCAPI ::FunctionState getErrorState() const;

    // NOLINTEND
};
