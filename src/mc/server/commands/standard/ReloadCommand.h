#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ReloadCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ReloadCommand& operator=(ReloadCommand const&);
    ReloadCommand(ReloadCommand const&);
    ReloadCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ReloadCommand@@UEAA@XZ
    virtual ~ReloadCommand() = default;

    // vIndex: 2, symbol: ?execute@ReloadCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ReloadCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
