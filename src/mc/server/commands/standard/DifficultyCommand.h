#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DifficultyCommand : public ::Command {
public:
    // prevent constructor by default
    DifficultyCommand& operator=(DifficultyCommand const&);
    DifficultyCommand(DifficultyCommand const&);
    DifficultyCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DifficultyCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
