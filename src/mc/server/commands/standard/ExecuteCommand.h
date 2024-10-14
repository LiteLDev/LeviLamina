#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class ExecuteCommand : public ::Command {
public:
    // prevent constructor by default
    ExecuteCommand& operator=(ExecuteCommand const&);
    ExecuteCommand(ExecuteCommand const&);
    ExecuteCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExecuteCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, bool isLegacyActive, int newExecuteStartVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
