#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ClearSpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    ClearSpawnPointCommand& operator=(ClearSpawnPointCommand const&);
    ClearSpawnPointCommand(ClearSpawnPointCommand const&);
    ClearSpawnPointCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClearSpawnPointCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
