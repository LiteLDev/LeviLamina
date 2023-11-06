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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~WSServerCommand() = default;

    // vIndex: 2, symbol: ?execute@WSServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@WSServerCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
