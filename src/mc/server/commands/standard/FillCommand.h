#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FillCommand : public ::Command {
public:
    // prevent constructor by default
    FillCommand& operator=(FillCommand const&);
    FillCommand(FillCommand const&);
    FillCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FillCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
