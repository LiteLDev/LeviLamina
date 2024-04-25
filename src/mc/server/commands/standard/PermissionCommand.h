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
    // vIndex: 0, symbol: __gen_??1PermissionCommand@@UEAA@XZ
    virtual ~PermissionCommand() = default;

    // vIndex: 2, symbol: ?execute@PermissionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@PermissionCommand@@SAXAEAVCommandRegistry@@PEAVPermissionsFile@@@Z
    MCAPI static void setup(class CommandRegistry& registry, class PermissionsFile* permissionsFile);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?list@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void list(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?reload@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void reload(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?set@PermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void set(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mPermissionsFile@PermissionCommand@@0PEAVPermissionsFile@@EA
    MCAPI static class PermissionsFile* mPermissionsFile;

    // NOLINTEND
};
