#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class DeOpCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    DeOpCommand& operator=(DeOpCommand const&);
    DeOpCommand(DeOpCommand const&);
    DeOpCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeOpCommand@@UEAA@XZ
    virtual ~DeOpCommand() = default;

    // vIndex: 2, symbol: ?execute@DeOpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@DeOpCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
