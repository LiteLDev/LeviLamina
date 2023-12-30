#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class WSServerCommand : public ::Command {
public:
    // prevent constructor by default
    WSServerCommand& operator=(WSServerCommand const&);
    WSServerCommand(WSServerCommand const&);
    WSServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WSServerCommand@@UEAA@XZ
    virtual ~WSServerCommand() = default;

    // vIndex: 2, symbol: ?execute@WSServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@WSServerCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
