#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class QueryTargetCommand : public ::Command {
public:
    // prevent constructor by default
    QueryTargetCommand& operator=(QueryTargetCommand const&);
    QueryTargetCommand(QueryTargetCommand const&);
    QueryTargetCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~QueryTargetCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
