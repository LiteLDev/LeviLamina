#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class GetTopSolidBlockCommand : public ::Command {
public:
    // prevent constructor by default
    GetTopSolidBlockCommand& operator=(GetTopSolidBlockCommand const&);
    GetTopSolidBlockCommand(GetTopSolidBlockCommand const&);
    GetTopSolidBlockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetTopSolidBlockCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
