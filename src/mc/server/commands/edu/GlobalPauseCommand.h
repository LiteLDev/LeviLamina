#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class GlobalPauseCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    GlobalPauseCommand& operator=(GlobalPauseCommand const&);
    GlobalPauseCommand(GlobalPauseCommand const&);
    GlobalPauseCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlobalPauseCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
