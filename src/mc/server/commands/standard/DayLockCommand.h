#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class DayLockCommand : public ::Command {
public:
    // prevent constructor by default
    DayLockCommand& operator=(DayLockCommand const&);
    DayLockCommand(DayLockCommand const&);
    DayLockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DayLockCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
