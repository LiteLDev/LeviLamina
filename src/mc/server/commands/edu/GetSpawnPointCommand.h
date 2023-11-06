#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetSpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    GetSpawnPointCommand& operator=(GetSpawnPointCommand const&);
    GetSpawnPointCommand(GetSpawnPointCommand const&);
    GetSpawnPointCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~GetSpawnPointCommand();

    // vIndex: 2, symbol: ?execute@GetSpawnPointCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@GetSpawnPointCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
