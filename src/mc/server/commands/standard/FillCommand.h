#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class FillCommand : public ::Command {
public:
    // prevent constructor by default
    FillCommand& operator=(FillCommand const&);
    FillCommand(FillCommand const&);
    FillCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FillCommand@@UEAA@XZ
    virtual ~FillCommand() = default;

    // vIndex: 2, symbol: ?execute@FillCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@FillCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
