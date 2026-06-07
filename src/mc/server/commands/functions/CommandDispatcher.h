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
    virtual ~CommandDispatcher() /*override*/ = default;

    virtual int performCommand(::CommandOrigin const& origin, ::Command& command) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandDispatcher();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $performCommand(::CommandOrigin const& origin, ::Command& command);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
