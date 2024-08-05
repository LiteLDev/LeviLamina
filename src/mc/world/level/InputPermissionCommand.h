#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class InputPermissionCommand : public ::Command {
public:
    // prevent constructor by default
    InputPermissionCommand& operator=(InputPermissionCommand const&);
    InputPermissionCommand(InputPermissionCommand const&);
    InputPermissionCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InputPermissionCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _executeQuery(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _executeQueryVerbose(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _executeSet(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
