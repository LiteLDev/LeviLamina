#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FogCommand : public ::Command {
public:
    // prevent constructor by default
    FogCommand& operator=(FogCommand const&);
    FogCommand(FogCommand const&);
    FogCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FogCommand@@UEAA@XZ
    virtual ~FogCommand() = default;

    // vIndex: 2, symbol: ?execute@FogCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@FogCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
