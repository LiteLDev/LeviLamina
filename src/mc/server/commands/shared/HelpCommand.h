#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class HelpCommand : public ::Command {
public:
    // prevent constructor by default
    HelpCommand& operator=(HelpCommand const&);
    HelpCommand(HelpCommand const&);
    HelpCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HelpCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void getCommandHelp(
        class CommandRegistry const& registry,
        class CommandOrigin const&   origin,
        class CommandOutput&         output
    ) const;

    MCAPI void
    getHelpPage(class CommandRegistry const& registry, class CommandOrigin const& origin, class CommandOutput& output)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
