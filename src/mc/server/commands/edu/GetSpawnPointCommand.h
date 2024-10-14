#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class GetSpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    GetSpawnPointCommand& operator=(GetSpawnPointCommand const&);
    GetSpawnPointCommand(GetSpawnPointCommand const&);
    GetSpawnPointCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetSpawnPointCommand() = default;

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
