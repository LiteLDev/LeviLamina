#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class FogCommand : public ::Command {
public:
    // FogCommand inner types define
    enum class Mode : int {
        Push   = 0,
        Pop    = 1,
        Remove = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkd7c0cd;
    ::ll::UntypedStorage<4, 4>   mUnk759b03;
    ::ll::UntypedStorage<8, 32>  mUnk1ad1dd;
    ::ll::UntypedStorage<8, 32>  mUnkdd8a6b;
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommand& operator=(FogCommand const&);
    FogCommand(FogCommand const&);
    FogCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~FogCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
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
