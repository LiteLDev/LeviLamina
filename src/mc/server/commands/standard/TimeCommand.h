#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TimeCommand : public ::Command {
public:
    // prevent constructor by default
    TimeCommand& operator=(TimeCommand const&);
    TimeCommand(TimeCommand const&);
    TimeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TimeCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
