#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetChunkDataCommand : public ::Command {
public:
    // prevent constructor by default
    GetChunkDataCommand& operator=(GetChunkDataCommand const&);
    GetChunkDataCommand(GetChunkDataCommand const&);
    GetChunkDataCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetChunkDataCommand@@UEAA@XZ
    virtual ~GetChunkDataCommand() = default;

    // vIndex: 2, symbol: ?execute@GetChunkDataCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@GetChunkDataCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
