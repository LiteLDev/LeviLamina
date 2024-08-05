#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class PermissionCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    PermissionCommand& operator=(PermissionCommand const&);
    PermissionCommand(PermissionCommand const&);
    PermissionCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PermissionCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, class PermissionsFile* permissionsFile);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void list(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void reload(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void set(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class PermissionsFile* mPermissionsFile;

    // NOLINTEND
};
