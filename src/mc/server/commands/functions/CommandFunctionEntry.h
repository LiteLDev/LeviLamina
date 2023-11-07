#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/FunctionQueueOrder.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

class CommandFunctionEntry : public ::IFunctionEntry {
public:
    // prevent constructor by default
    CommandFunctionEntry& operator=(CommandFunctionEntry const&);
    CommandFunctionEntry(CommandFunctionEntry const&);
    CommandFunctionEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CommandFunctionEntry() = default;

    // vIndex: 1, symbol:
    // ?execute@CommandFunctionEntry@@UEAAXAEAVFunctionManager@@AEBVCommandOrigin@@W4FunctionQueueOrder@@@Z
    virtual void execute(class FunctionManager&, class CommandOrigin const&, ::FunctionQueueOrder);

    // NOLINTEND
};
