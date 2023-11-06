#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ScriptEventCommand : public ::Command {
public:
    // prevent constructor by default
    ScriptEventCommand& operator=(ScriptEventCommand const&);
    ScriptEventCommand(ScriptEventCommand const&);
    ScriptEventCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ScriptEventCommand() = default;

    // vIndex: 2, symbol: ?execute@ScriptEventCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ScriptEventCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
