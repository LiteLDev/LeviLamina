#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class GlobalPauseCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    GlobalPauseCommand& operator=(GlobalPauseCommand const&);
    GlobalPauseCommand(GlobalPauseCommand const&);
    GlobalPauseCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~GlobalPauseCommand() = default;

    // vIndex: 2, symbol: ?execute@GlobalPauseCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@GlobalPauseCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
