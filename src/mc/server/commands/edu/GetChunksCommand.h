#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class GetChunksCommand : public ::Command {
public:
    // prevent constructor by default
    GetChunksCommand& operator=(GetChunksCommand const&);
    GetChunksCommand(GetChunksCommand const&);
    GetChunksCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetChunksCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
