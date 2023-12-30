#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetChunksCommand : public ::Command {
public:
    // prevent constructor by default
    GetChunksCommand& operator=(GetChunksCommand const&);
    GetChunksCommand(GetChunksCommand const&);
    GetChunksCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetChunksCommand@@UEAA@XZ
    virtual ~GetChunksCommand() = default;

    // vIndex: 2, symbol: ?execute@GetChunksCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@GetChunksCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
