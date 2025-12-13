#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class PermissionsFile;
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
    ::ll::UntypedStorage<4, 4>   mUnk24ccee;
    ::ll::UntypedStorage<4, 4>   mUnk2d494e;
    ::ll::UntypedStorage<8, 200> mUnk62d6b2;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionCommand& operator=(PermissionCommand const&);
    PermissionCommand(PermissionCommand const&);
    PermissionCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~PermissionCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void list(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void reload(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void set(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::PermissionsFile* permissionsFile);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PermissionsFile*& mPermissionsFile();
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
