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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SpawnPointCommand() = default;

    // vIndex: 2, symbol: ?execute@SpawnPointCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@SpawnPointCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
