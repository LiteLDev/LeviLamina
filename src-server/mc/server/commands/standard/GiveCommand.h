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

class GiveCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnka2b291;
    ::ll::UntypedStorage<8, 8>   mUnk14ca77;
    ::ll::UntypedStorage<4, 4>   mUnk648025;
    ::ll::UntypedStorage<4, 4>   mUnk79d1c1;
    ::ll::UntypedStorage<8, 16>  mUnkefc2f9;
    ::ll::UntypedStorage<1, 1>   mUnk9b697b;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveCommand& operator=(GiveCommand const&);
    GiveCommand(GiveCommand const&);
    GiveCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~GiveCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
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
