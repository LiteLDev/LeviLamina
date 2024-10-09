#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class AbilityCommand : public ::Command {
public:
    // prevent constructor by default
    AbilityCommand& operator=(AbilityCommand const&);
    AbilityCommand(AbilityCommand const&);
    AbilityCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AbilityCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
