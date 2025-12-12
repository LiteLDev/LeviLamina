#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class PlayAnimationCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkeaf76f;
    ::ll::UntypedStorage<8, 32>  mUnk193451;
    ::ll::UntypedStorage<8, 32>  mUnka4c1bf;
    ::ll::UntypedStorage<8, 32>  mUnk347be9;
    ::ll::UntypedStorage<8, 32>  mUnk49f5d3;
    ::ll::UntypedStorage<4, 4>   mUnk83afcb;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayAnimationCommand& operator=(PlayAnimationCommand const&);
    PlayAnimationCommand(PlayAnimationCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~PlayAnimationCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayAnimationCommand();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::MolangVersion const& mStopExpressionVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
