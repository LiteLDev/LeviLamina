#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ListCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ListCommand& operator=(ListCommand const&);
    ListCommand(ListCommand const&);
    ListCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ListCommand@@UEAA@XZ
    virtual ~ListCommand() = default;

    // vIndex: 2, symbol: ?execute@ListCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ListCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
