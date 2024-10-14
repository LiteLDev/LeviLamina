#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class ResourceUriCommand : public ::Command {
public:
    // prevent constructor by default
    ResourceUriCommand& operator=(ResourceUriCommand const&);
    ResourceUriCommand(ResourceUriCommand const&);
    ResourceUriCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourceUriCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _executeClear(class Level& level, class Player* originPlayer, class CommandOutput& output) const;

    MCAPI void _executeNamed(class Level& level, class Player* originPlayer, class CommandOutput& output) const;

    MCAPI void _executeUriOnly(class Level& level, class Player* originPlayer, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
