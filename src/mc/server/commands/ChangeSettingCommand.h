#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ChangeSettingCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ChangeSettingCommand& operator=(ChangeSettingCommand const&);
    ChangeSettingCommand(ChangeSettingCommand const&);
    ChangeSettingCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChangeSettingCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const&, class CommandOutput& output) const;

    // NOLINTEND
};
