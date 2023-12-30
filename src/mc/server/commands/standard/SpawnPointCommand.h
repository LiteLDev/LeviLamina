#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    SpawnPointCommand& operator=(SpawnPointCommand const&);
    SpawnPointCommand(SpawnPointCommand const&);
    SpawnPointCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpawnPointCommand@@UEAA@XZ
    virtual ~SpawnPointCommand() = default;

    // vIndex: 2, symbol: ?execute@SpawnPointCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@SpawnPointCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
