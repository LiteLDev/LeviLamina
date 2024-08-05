#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TitleCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TitleCommand& operator=(TitleCommand const&);
    TitleCommand(TitleCommand const&);
    TitleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TitleCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
