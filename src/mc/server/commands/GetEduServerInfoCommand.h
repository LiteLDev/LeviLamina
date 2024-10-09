#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class GetEduServerInfoCommand : public ::Command {
public:
    // prevent constructor by default
    GetEduServerInfoCommand& operator=(GetEduServerInfoCommand const&);
    GetEduServerInfoCommand(GetEduServerInfoCommand const&);
    GetEduServerInfoCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetEduServerInfoCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
