#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SetWorldSpawnCommand : public ::Command {
public:
    // prevent constructor by default
    SetWorldSpawnCommand& operator=(SetWorldSpawnCommand const&);
    SetWorldSpawnCommand(SetWorldSpawnCommand const&);
    SetWorldSpawnCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetWorldSpawnCommand@@UEAA@XZ
    virtual ~SetWorldSpawnCommand() = default;

    // vIndex: 2, symbol: ?execute@SetWorldSpawnCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@SetWorldSpawnCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
