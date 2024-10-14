#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class DedicatedWSServerCommand : public ::Command {
public:
    // prevent constructor by default
    DedicatedWSServerCommand& operator=(DedicatedWSServerCommand const&);
    DedicatedWSServerCommand(DedicatedWSServerCommand const&);
    DedicatedWSServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DedicatedWSServerCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, class IMinecraftApp& app);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static class IMinecraftApp*& mApp();

    // NOLINTEND
};
