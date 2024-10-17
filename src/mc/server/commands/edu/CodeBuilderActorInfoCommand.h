#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class CodeBuilderActorInfoCommand : public ::Command {
public:
    // prevent constructor by default
    CodeBuilderActorInfoCommand& operator=(CodeBuilderActorInfoCommand const&);
    CodeBuilderActorInfoCommand(CodeBuilderActorInfoCommand const&);
    CodeBuilderActorInfoCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeBuilderActorInfoCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
