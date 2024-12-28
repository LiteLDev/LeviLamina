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

class DedicatedWSServerCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb82e93;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedWSServerCommand& operator=(DedicatedWSServerCommand const&);
    DedicatedWSServerCommand(DedicatedWSServerCommand const&);
    DedicatedWSServerCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~DedicatedWSServerCommand() /*override*/;
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
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
