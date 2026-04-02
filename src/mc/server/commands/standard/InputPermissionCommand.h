#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/ClientInputLockCategory.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class InputPermissionCommand : public ::Command {
public:
    // InputPermissionCommand inner types define
    enum class CommandActionType : int {
        Set   = 0,
        Query = 1,
    };

    enum class CommandValueType : int {
        Undefined = 0,
        Enabled   = 1,
        Disabled  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputPermissionCommand::CommandActionType> mActionType;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>               mTargets;
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory>                   mPermission;
    ::ll::TypedStorage<4, 4, ::InputPermissionCommand::CommandValueType>  mValueType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~InputPermissionCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeQuery(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _executeQueryVerbose(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _executeSet(::CommandOrigin const& origin, ::CommandOutput& output) const;
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
