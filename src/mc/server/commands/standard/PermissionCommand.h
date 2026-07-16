#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class PermissionsFile;
class Player;
// clang-format on

class PermissionCommand : public ::ServerCommand {
public:
    // PermissionCommand inner types define
    enum class Action : int {
        List   = 0,
        Reload = 1,
        Set    = 2,
    };

    enum class AvailableCommandPermissionPresets : int {
        Visitor   = 0,
        Member    = 1,
        Operator  = 2,
        Undefined = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PermissionCommand::Action>                            mAction;
    ::ll::TypedStorage<4, 4, ::PermissionCommand::AvailableCommandPermissionPresets> mPermissionLevel;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>                          mTargetPlayers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::PermissionsFile* permissionsFile);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
