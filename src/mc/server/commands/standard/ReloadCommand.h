#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ReloadCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ReloadCommand& operator=(ReloadCommand const&);
    ReloadCommand(ReloadCommand const&);
    ReloadCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReloadCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, bool isEditorWorld, bool isDedicatedServer);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
