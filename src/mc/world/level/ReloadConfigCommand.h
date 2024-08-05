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
    // vIndex: 0
    virtual ~ReloadConfigCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&, struct ScriptSettings&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct ScriptSettings* sScriptSettings;

    // NOLINTEND
};
