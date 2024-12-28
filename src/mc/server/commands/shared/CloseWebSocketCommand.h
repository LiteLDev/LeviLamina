#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class IMinecraftApp;
// clang-format on

class CloseWebSocketCommand : public ::Command {
public:
    // prevent constructor by default
    CloseWebSocketCommand& operator=(CloseWebSocketCommand const&);
    CloseWebSocketCommand(CloseWebSocketCommand const&);
    CloseWebSocketCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~CloseWebSocketCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::IMinecraftApp& app);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::IMinecraftApp*& mApp();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
