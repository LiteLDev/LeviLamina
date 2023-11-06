#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class SetMaxPlayersCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    SetMaxPlayersCommand& operator=(SetMaxPlayersCommand const&);
    SetMaxPlayersCommand(SetMaxPlayersCommand const&);
    SetMaxPlayersCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SetMaxPlayersCommand() = default;

    // vIndex: 2, symbol: ?execute@SetMaxPlayersCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@SetMaxPlayersCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
