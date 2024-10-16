#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class StopCommand : public ::Command {
public:
    // prevent constructor by default
    StopCommand& operator=(StopCommand const&);
    StopCommand(StopCommand const&);
    StopCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StopCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry& registry, class DedicatedServer& server);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static class DedicatedServer*& mServer();

    // NOLINTEND
};
