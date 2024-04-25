#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ReloadConfigCommand : public ::Command {
public:
    // prevent constructor by default
    ReloadConfigCommand& operator=(ReloadConfigCommand const&);
    ReloadConfigCommand(ReloadConfigCommand const&);
    ReloadConfigCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ReloadConfigCommand@@UEAA@XZ
    virtual ~ReloadConfigCommand() = default;

    // vIndex: 2, symbol: ?execute@ReloadConfigCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ReloadConfigCommand@@SAXAEAVCommandRegistry@@AEAUScriptSettings@@@Z
    MCAPI static void setup(class CommandRegistry&, struct ScriptSettings&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sScriptSettings@ReloadConfigCommand@@0PEAUScriptSettings@@EA
    MCAPI static struct ScriptSettings* sScriptSettings;

    // NOLINTEND
};
