#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class InputPermissionCommand : public ::Command {
public:
    // prevent constructor by default
    InputPermissionCommand& operator=(InputPermissionCommand const&);
    InputPermissionCommand(InputPermissionCommand const&);
    InputPermissionCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InputPermissionCommand@@UEAA@XZ
    virtual ~InputPermissionCommand() = default;

    // vIndex: 2, symbol: ?execute@InputPermissionCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@InputPermissionCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeQuery@InputPermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeQuery(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?_executeQueryVerbose@InputPermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeQueryVerbose(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?_executeSet@InputPermissionCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeSet(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
