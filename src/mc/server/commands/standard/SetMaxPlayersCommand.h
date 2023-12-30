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
    // vIndex: 0, symbol: __gen_??1SetMaxPlayersCommand@@UEAA@XZ
    virtual ~SetMaxPlayersCommand() = default;

    // vIndex: 2, symbol: ?execute@SetMaxPlayersCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@SetMaxPlayersCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
