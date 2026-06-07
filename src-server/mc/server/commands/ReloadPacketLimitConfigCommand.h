#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class ServerNetworkSystem;
// clang-format on

class ReloadPacketLimitConfigCommand : public ::Command {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& output, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::ServerNetworkSystem& serverNetworkSystem);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ServerNetworkSystem*& mServerNetworkSystem();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& output, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
