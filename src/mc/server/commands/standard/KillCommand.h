#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class KillCommand : public ::Command {
public:
    // prevent constructor by default
    KillCommand& operator=(KillCommand const&);
    KillCommand(KillCommand const&);
    KillCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KillCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
