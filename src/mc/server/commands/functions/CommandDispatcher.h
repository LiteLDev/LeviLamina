#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/ICommandDispatcher.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class CommandDispatcher : public ::ICommandDispatcher {
public:
    // prevent constructor by default
    CommandDispatcher& operator=(CommandDispatcher const&);
    CommandDispatcher(CommandDispatcher const&);
    CommandDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandDispatcher() /*override*/ = default;

    // vIndex: 1
    virtual int performCommand(::CommandOrigin const& origin, ::Command& command) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $performCommand(::CommandOrigin const& origin, ::Command& command);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
