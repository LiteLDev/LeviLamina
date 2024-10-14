#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class SetMaxPlayersCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    SetMaxPlayersCommand& operator=(SetMaxPlayersCommand const&);
    SetMaxPlayersCommand(SetMaxPlayersCommand const&);
    SetMaxPlayersCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetMaxPlayersCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
