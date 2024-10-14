#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class TestForCommand : public ::Command {
public:
    // prevent constructor by default
    TestForCommand& operator=(TestForCommand const&);
    TestForCommand(TestForCommand const&);
    TestForCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestForCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
