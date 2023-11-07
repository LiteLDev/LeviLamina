#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ExecuteCommand : public ::Command {
public:
    // prevent constructor by default
    ExecuteCommand& operator=(ExecuteCommand const&);
    ExecuteCommand(ExecuteCommand const&);
    ExecuteCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExecuteCommand@@UEAA@XZ
    virtual ~ExecuteCommand() = default;

    // vIndex: 2, symbol: ?execute@ExecuteCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ExecuteCommand@@SAXAEAVCommandRegistry@@_NH@Z
    MCAPI static void setup(class CommandRegistry&, bool, int);

    // NOLINTEND
};
