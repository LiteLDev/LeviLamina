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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry& registry, ::IMinecraftApp& app);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::IMinecraftApp*& mApp();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const& origin, ::CommandOutput&) const;


    // NOLINTEND
};
