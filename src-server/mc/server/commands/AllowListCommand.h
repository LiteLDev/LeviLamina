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
    ::ll::TypedStorage<4, 4, ::AllowListCommand::Action> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    virtual ~AllowListCommand() /*override*/ = default;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
