#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TellRawCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TellRawCommand& operator=(TellRawCommand const&);
    TellRawCommand(TellRawCommand const&);
    TellRawCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TellRawCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
