#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class ClearCommand : public ::Command {
public:
    // prevent constructor by default
    ClearCommand& operator=(ClearCommand const&);
    ClearCommand(ClearCommand const&);
    ClearCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClearCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
