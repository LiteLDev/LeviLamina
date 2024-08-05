#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class EventCommand : public ::Command {
public:
    // prevent constructor by default
    EventCommand& operator=(EventCommand const&);
    EventCommand(EventCommand const&);
    EventCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
