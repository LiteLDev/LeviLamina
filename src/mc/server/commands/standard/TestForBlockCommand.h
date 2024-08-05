#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TestForBlockCommand : public ::Command {
public:
    // prevent constructor by default
    TestForBlockCommand& operator=(TestForBlockCommand const&);
    TestForBlockCommand(TestForBlockCommand const&);
    TestForBlockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestForBlockCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
