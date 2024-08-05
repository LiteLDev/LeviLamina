#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DialogueCommand : public ::Command {
public:
    // prevent constructor by default
    DialogueCommand& operator=(DialogueCommand const&);
    DialogueCommand(DialogueCommand const&);
    DialogueCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DialogueCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
