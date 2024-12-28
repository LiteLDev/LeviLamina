#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class AllowListCommand : public ::Command {
public:
    // AllowListCommand inner types define
    enum class Action : int {
        List       = 0,
        On         = 1,
        Off        = 2,
        AddName    = 3,
        RemoveName = 4,
        Reload     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5ae04a;
    ::ll::UntypedStorage<8, 32> mUnkaf2239;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListCommand& operator=(AllowListCommand const&);
    AllowListCommand(AllowListCommand const&);
    AllowListCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~AllowListCommand() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::AllowListFile& allowListFile);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::AllowListFile*& mAllowListFile();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
