#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class HudCommand : public ::Command {
public:
    // prevent constructor by default
    HudCommand& operator=(HudCommand const&);
    HudCommand(HudCommand const&);
    HudCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HudCommand@@UEAA@XZ
    virtual ~HudCommand() = default;

    // vIndex: 2, symbol: ?execute@HudCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@HudCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
