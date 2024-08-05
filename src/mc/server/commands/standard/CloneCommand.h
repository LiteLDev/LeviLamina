#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CloneCommand : public ::Command {
public:
    // prevent constructor by default
    CloneCommand& operator=(CloneCommand const&);
    CloneCommand(CloneCommand const&);
    CloneCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloneCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
