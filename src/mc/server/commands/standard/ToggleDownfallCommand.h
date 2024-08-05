#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ToggleDownfallCommand : public ::Command {
public:
    // prevent constructor by default
    ToggleDownfallCommand& operator=(ToggleDownfallCommand const&);
    ToggleDownfallCommand(ToggleDownfallCommand const&);
    ToggleDownfallCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ToggleDownfallCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
