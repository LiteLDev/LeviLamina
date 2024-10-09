#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class SpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    SpawnPointCommand& operator=(SpawnPointCommand const&);
    SpawnPointCommand(SpawnPointCommand const&);
    SpawnPointCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnPointCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
