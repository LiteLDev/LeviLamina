#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ClearSpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    ClearSpawnPointCommand& operator=(ClearSpawnPointCommand const&);
    ClearSpawnPointCommand(ClearSpawnPointCommand const&);
    ClearSpawnPointCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClearSpawnPointCommand@@UEAA@XZ
    virtual ~ClearSpawnPointCommand() = default;

    // vIndex: 2, symbol: ?execute@ClearSpawnPointCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ClearSpawnPointCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
