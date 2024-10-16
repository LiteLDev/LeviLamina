#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class MeCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    MeCommand& operator=(MeCommand const&);
    MeCommand(MeCommand const&);
    MeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeCommand() = default;

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
