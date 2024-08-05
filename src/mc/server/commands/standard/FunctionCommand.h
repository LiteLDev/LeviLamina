#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FunctionCommand : public ::Command {
public:
    // prevent constructor by default
    FunctionCommand& operator=(FunctionCommand const&);
    FunctionCommand(FunctionCommand const&);
    FunctionCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FunctionCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
