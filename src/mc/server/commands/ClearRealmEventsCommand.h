#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class ClearRealmEventsCommand : public ::ServerCommand {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~ClearRealmEventsCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
