#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GiveCommand : public ::Command {
public:
    // prevent constructor by default
    GiveCommand& operator=(GiveCommand const&);
    GiveCommand(GiveCommand const&);
    GiveCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GiveCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
