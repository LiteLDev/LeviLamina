#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ClearSpawnPointCommand : public ::Command {
public:
    // prevent constructor by default
    ClearSpawnPointCommand& operator=(ClearSpawnPointCommand const&) = delete;
    ClearSpawnPointCommand(ClearSpawnPointCommand const&)            = delete;
    ClearSpawnPointCommand()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@ClearSpawnPointCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ClearSpawnPointCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
