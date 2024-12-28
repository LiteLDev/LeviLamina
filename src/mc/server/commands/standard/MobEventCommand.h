#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class ServerLevel;
// clang-format on

class MobEventCommand : public ::Command {
public:
    // MobEventCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // MobEventCommand inner types define
    struct InitProxy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk50c0de;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit InitProxy(::ServerLevel& level);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ServerLevel& level);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4148c7;
    ::ll::UntypedStorage<1, 1>  mUnkdf3e53;
    ::ll::UntypedStorage<1, 1>  mUnkdf864c;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEventCommand& operator=(MobEventCommand const&);
    MobEventCommand(MobEventCommand const&);
    MobEventCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~MobEventCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::MobEventCommand::InitProxy&& dependencies);
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
