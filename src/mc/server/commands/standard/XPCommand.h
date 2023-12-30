#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class XPCommand : public ::Command {
public:
    // prevent constructor by default
    XPCommand& operator=(XPCommand const&);
    XPCommand(XPCommand const&);
    XPCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1XPCommand@@UEAA@XZ
    virtual ~XPCommand() = default;

    // vIndex: 2, symbol: ?execute@XPCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@XPCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
