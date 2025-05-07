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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandDispatcher() /*override*/ = default;

    // vIndex: 1
    virtual int performCommand(::CommandOrigin const& origin, ::Command& command) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $performCommand(::CommandOrigin const& origin, ::Command& command);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
