#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FunctionCommand : public ::Command {
public:
    // prevent constructor by default
    FunctionCommand& operator=(FunctionCommand const&);
    FunctionCommand(FunctionCommand const&);
    FunctionCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FunctionCommand();

    // vIndex: 2, symbol: ?execute@FunctionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@FunctionCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
