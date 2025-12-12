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
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput&) const /*override*/;

    virtual ~CloseWebSocketCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void setup(::CommandRegistry& registry, ::IMinecraftApp& app);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::IMinecraftApp*& mApp();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
