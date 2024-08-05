#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FogCommand : public ::Command {
public:
    // prevent constructor by default
    FogCommand& operator=(FogCommand const&);
    FogCommand(FogCommand const&);
    FogCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FogCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
