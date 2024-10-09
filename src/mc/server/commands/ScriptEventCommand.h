#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class ScriptEventCommand : public ::Command {
public:
    // prevent constructor by default
    ScriptEventCommand& operator=(ScriptEventCommand const&);
    ScriptEventCommand(ScriptEventCommand const&);
    ScriptEventCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptEventCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
