#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ListDCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ListDCommand& operator=(ListDCommand const&);
    ListDCommand(ListDCommand const&);
    ListDCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ListDCommand@@UEAA@XZ
    virtual ~ListDCommand() = default;

    // vIndex: 2, symbol: ?execute@ListDCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ListDCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
