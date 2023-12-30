#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetTopSolidBlockCommand : public ::Command {
public:
    // prevent constructor by default
    GetTopSolidBlockCommand& operator=(GetTopSolidBlockCommand const&);
    GetTopSolidBlockCommand(GetTopSolidBlockCommand const&);
    GetTopSolidBlockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetTopSolidBlockCommand@@UEAA@XZ
    virtual ~GetTopSolidBlockCommand() = default;

    // vIndex: 2, symbol: ?execute@GetTopSolidBlockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@GetTopSolidBlockCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
