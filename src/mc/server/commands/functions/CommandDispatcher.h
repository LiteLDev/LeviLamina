#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/ICommandDispatcher.h"

class CommandDispatcher : public ::ICommandDispatcher {
public:
    // prevent constructor by default
    CommandDispatcher& operator=(CommandDispatcher const&);
    CommandDispatcher(CommandDispatcher const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandDispatcher() = default;

    // vIndex: 1
    virtual int performCommand(class CommandOrigin const& origin, class Command& command);

    MCAPI CommandDispatcher();

    // NOLINTEND
};
