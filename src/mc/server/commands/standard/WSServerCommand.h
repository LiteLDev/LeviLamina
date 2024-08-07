#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class WSServerCommand : public ::Command {
public:
    // prevent constructor by default
    WSServerCommand& operator=(WSServerCommand const&);
    WSServerCommand(WSServerCommand const&);
    WSServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WSServerCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
